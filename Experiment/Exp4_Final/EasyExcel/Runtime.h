//运行时

//头文件
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体定义
#include "Structure.h"

//本地化处理
#include "Localization.h"

//布尔常量定义
#define TRUE 1
#define FALSE 0

//命令列表
enum command //命令列表
{
    INSERT_ROW=1,//插入行
    DELETE_ROW=2,//删除行
    INSERT_COLUMN=3,//插入列
    DELETE_COLUMN=4,//删除列
    MODIFY_CELL=5,//修改单元格
    CLOSE_FILE=-1,//关闭文件
};