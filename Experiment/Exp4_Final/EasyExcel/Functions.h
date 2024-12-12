//表格操作
#include "Runtime.h"

//函数声明
Table *create_table(void);
Table *read_table(FILE *fp);
void insert_row(Table *table, int index);
void delete_row(Table *table, int index);
void insert_col(Table *table, int index);
void delete_col(Table *table, int index);
void modify_cell(Table *table, int row, int col, int value);
void print_table(Table *table);
void write_table(Table *table, FILE *fp);

//新建表格
Table *create_table(void) 
{
    printf(Strings.input_rowcol);
    int row,col;
    scanf(" %d %d",&row,&col);
    Table *table = (Table *)malloc(sizeof(Table));
    table->rows = NULL;
    table->columns = NULL;
    for (int i = 0; i < row; i++) 
    {
        Row *new_row = (Row *)malloc(sizeof(Row));
        new_row->head = NULL;
        new_row->next = table->rows;
        table->rows = new_row;
        Cell *last_cell = NULL;
        for (int j = 0; j < col; j++) 
        {
            Cell *new_cell = (Cell *)malloc(sizeof(Cell));
            new_cell->value = 0;
            if (j == 0) 
                new_row->head = new_cell;
            else
                last_cell->next_col = new_cell;
            last_cell = new_cell;
        }
    }
    print_table(table);
    return table;
}

//从文件读取表格
Table *read_table(FILE *fp)
{
    Table *table = (Table *)malloc(sizeof(Table));
    table->rows = NULL;
    table->columns = NULL;
    char line[100];
    while (fgets(line, 100, fp)!= NULL) {
        Row *new_row = (Row *)malloc(sizeof(Row));
        new_row->head = NULL;
        new_row->next = table->rows;
        table->rows = new_row;
        Cell *last_cell = NULL;
        char *token = strtok(line, " ");
        while (token!= NULL) {
            Cell *new_cell = (Cell *)malloc(sizeof(Cell));
            new_cell->value = atoi(token);
            if (last_cell == NULL) 
                new_row->head = new_cell;
            else
                last_cell->next_col = new_cell;
            last_cell = new_cell;
            token = strtok(NULL, " ");
        }
    }
    print_table(table);
    return table;
}

//插入全零行
void insert_row(Table *table, int index)
{
    int col_count = 0;//表格的列数
    if (table->rows != NULL) 
    {
        Row *first_row = table->rows;
        Cell *cell = first_row->head;
        while (cell != NULL)
        {
            col_count++;
            cell = cell->next_col;
        }
    }
    Row *new_row = (Row *)malloc(sizeof(Row));
    new_row->head = NULL;
    new_row->next = NULL;
    Cell *last_cell = NULL;
    for (int j = 0; j < col_count; j++) 
    {
        Cell *new_cell = (Cell *)malloc(sizeof(Cell));
        new_cell->value = 0; // 将每个单元格的值初始化为0
        if (j == 0) 
            new_row->head = new_cell;
        else
            last_cell->next_col = new_cell;
        last_cell = new_cell;
    }
    if (index == 0) 
    {
        new_row->next = table->rows;
        table->rows = new_row;
    } 
    else 
    {
        Row *prev_row = table->rows;
        for (int i = 0; i < index - 1; i++) 
            prev_row = prev_row->next;
        new_row->next = prev_row->next;
        prev_row->next = new_row;
    }
    print_table(table);
}

//删除行
void delete_row(Table *table, int index)
{
    if (index == 0) {
        Row *temp = table->rows;
        table->rows = table->rows->next;
        free(temp);
    }
    else {
        Row *prev_row = table->rows;
        for (int i = 0; i < index - 1; i++) {
            prev_row = prev_row->next;
        }
        Row *temp = prev_row->next;
        prev_row->next = prev_row->next->next;
        free(temp);
    }
    print_table(table);
}

//插入全零列
void insert_col(Table *table, int index)
{
    int col_count = 0;// 表格的列数
    if (table->rows != NULL) 
    {
        Row *first_row = table->rows;
        Cell *cell = first_row->head;
        while (cell != NULL) 
        {
            col_count++;
            cell = cell->next_col;
        }
    }
    for (Row *row = table->rows; row != NULL; row = row->next) 
    {
        Cell *new_cell = (Cell *)malloc(sizeof(Cell));
        new_cell->value = 0; // 将新的单元格值初始化为0
        new_cell->next_col = NULL; // 初始化新单元格的下一个列为NULL
        if (index == 0) 
        {
            new_cell->next_col = row->head;
            row->head = new_cell;
        } 
        else 
        {
            Cell *prev_cell = row->head;
            for (int i = 0; i < index - 1; i++) 
                prev_cell = prev_cell->next_col;
            new_cell->next_col = prev_cell->next_col;
            prev_cell->next_col = new_cell;
        }
    }
    print_table(table);
}

//删除列
void delete_col(Table *table, int index)
{
    for (Row *row = table->rows; row!= NULL; row = row->next) {
        if (index == 0) {
            Cell *temp = row->head;
            row->head = row->head->next_col;
            free(temp);
        }
        else {
            Cell *prev_cell = row->head;
            for (int i = 0; i < index - 1; i++) {
                prev_cell = prev_cell->next_col;
            }
            Cell *temp = prev_cell->next_col;
            prev_cell->next_col = prev_cell->next_col;
            free(temp);
        }
    }
    print_table(table);
}

//修改单元格
void modify_cell(Table *table, int row, int col, int value)
{
    Row *current_row = table->rows;
    for (int i = 0; i < row; i++) {
        current_row = current_row->next;
    }
    Cell *current_cell = current_row->head;
    for (int i = 0; i < col; i++) {
        current_cell = current_cell->next_col;
    }
    current_cell->value = value;
    print_table(table);
}

//打印表格
void print_table(Table *table)
{
    for (Row *row = table->rows; row != NULL; row = row->next) {
        for (Cell *cell = row->head; cell != NULL; cell = cell->next_col) 
            printf("%d ", cell->value);
        printf("\n");
    }
}

//将表格写入文件
void write_table(Table *table, FILE *fp)
{
    for (Row *row = table->rows; row!= NULL; row = row->next) {
        for (Cell *cell = row->head; cell!= NULL; cell = cell->next_col) 
            fprintf(fp, "%d ", cell->value);
        fprintf(fp, "\n");
    }
}
