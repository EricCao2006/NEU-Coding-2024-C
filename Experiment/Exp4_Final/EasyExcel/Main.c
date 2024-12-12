//轻量excel1.0.0主程序
//作者：东大软院A360团队

//函数原型：
#include "Functions.h"

//程序本体
int main(void)
{
    //设置语言
    printf("请选择语言:\n\
    1.简体中文(默认)\n\
    2.繁體中文\n\
    3.English\n");
    int language;
    scanf(" %d",&language);
    setLanguage(language);
    printf(Strings.welcome);
    while(TRUE)//主循环
    {
        printf(Strings.open_file);
        char path[100];
        char temp;
        int i=0;
        getchar();
        while((temp=getchar())!='\n')
        {
            path[i]=temp;
            i++;
        }
        Table * table = NULL;
        FILE *fp;
        if(i==0) //新建文件
        {
            printf(Strings.name_input);
            char filename[100];
            for(i=0;i<100;i++)
            {
                temp=getchar();
                if(temp=='\n')
                    break;
                filename[i]=temp;
            }
            filename[i]='\0';
            fp=fopen(filename,"w+");
            printf(Strings.create_success);
            table=create_table();
        }
        else //打开文件
        {
            fp=fopen(path,"r");
            if(fp==NULL)
            {
                printf(Strings.open_failed);
                continue;
            }
            printf(Strings.open_success);
            table=read_table(fp);
            fclose(fp);
            fp=fopen(path,"w");
            if(table->rows==NULL)//空文件
                table=create_table();
        }
        enum command command;
        int flag=TRUE;
        while(flag)//命令模式
        {
            {printf(Strings.commands);}
            scanf(" %d",&command);
            switch(command)//执行命令
            {
                case INSERT_ROW:
                    {printf(Strings.insert_row);
                    int row;
                    scanf(" %d",&row);
                    insert_row(table,row);
                    break;}
                case DELETE_ROW:
                    {printf(Strings.delete_row);
                    int row;
                    scanf(" %d",&row);
                    delete_row(table,row);
                    break;}
                case INSERT_COLUMN:
                    {printf(Strings.insert_col);
                    int col;
                    scanf(" %d",&col);
                    insert_col(table,col);
                    break;}
                case DELETE_COLUMN:
                    {printf(Strings.delete_col);
                    int col;
                    scanf(" %d",&col);
                    delete_col(table,col);
                    break;}
                case MODIFY_CELL:
                    {printf(Strings.modify_cell);
                    int row,col,value;
                    scanf(" %d %d %d",&row,&col,&value);
                    modify_cell(table,row,col,value);
                    break;}
                case CLOSE_FILE:
                    {flag=FALSE;
                    break;}
                default:
                    {printf(Strings.illigal_command);
                    continue;}
            }
        }
        {//保存文件
            printf(Strings.save_flie);
            char save;
            scanf(" %c", &save);
            if(save=='y' || save=='Y')
            {
                write_table(table,fp);
                printf(Strings.save_success);
            }
        }
        fclose(fp);
        printf(Strings.close_file);
        {//退出程序
            printf(Strings.exit);
            char exit;
            scanf(" %c", &exit);
            if(exit=='y' || exit=='Y')
                break;
        }
    }
    printf(Strings.goodbye);
    return 0;
}