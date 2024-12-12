//结构体定义

// 单元格结构体
typedef struct Cell {
    int value;            
    struct Cell *next_col;
    struct Cell *next_row;
} Cell;

// 行结构体
typedef struct Row {
    Cell *head;
    struct Row *next;
} Row;

// 列结构体
typedef struct Column {
    Cell *head;
    struct Column *next;
} Column;

// 表格结构体
typedef struct Table {
    Row *rows;
    Column *columns;
} Table;