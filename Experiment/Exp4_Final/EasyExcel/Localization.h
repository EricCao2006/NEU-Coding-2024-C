// 本地化设置

//支持的语言
enum Language {
    zh_CN = 1,
    zh_TW,
    En_US,
};

//语言结构体
struct LanguageSetting {
    char* welcome;
    char* open_file;
    char* name_input;
    char* create_success;
    char* open_failed;
    char* open_success;
    char* empty_file;
    char* commands;
    char* insert_row;
    char* delete_row;
    char* insert_col;
    char* delete_col;
    char* modify_cell;
    char* illigal_command;
    char* save_flie;
    char* save_success;
    char* close_file;
    char* exit;
    char* goodbye;
    char* input_rowcol;
};
struct LanguageSetting Strings;

//设置语言
void setLanguage(enum Language lang) 
{
    switch (lang)
    {
        case zh_TW:// 繁体中文
        {Strings.welcome = "歡迎使用輕量Excel!\n";
        Strings.name_input = "請輸入檔名,如檔案已存在,將會覆蓋原檔:";
        Strings.open_file = "新建檔案請按Enter,開啟檔案請輸入路徑:";
        Strings.create_success = "檔案建立成功!\n";
        Strings.open_failed = "檔案開啟失敗或檔案不存在!\n";
        Strings.open_success = "檔案開啟成功!\n";
        Strings.empty_file = "空白檔案,請先初始化!\n";
        Strings.commands = "請輸入命令:\n1.插入行\n2.刪除行\n3.插入列\n4.刪除列\n5.修改單元格\n-1.關閉檔案\n";
        Strings.insert_row = "請輸入要插入的行號:\n";
        Strings.delete_row = "請輸入要刪除的行號:\n";
        Strings.insert_col = "請輸入要插入的列號:\n";
        Strings.delete_col = "請輸入要刪除的列號:\n";
        Strings.modify_cell = "請輸入行號、列號及欲修改的值,以空格分隔:\n";
        Strings.illigal_command = "不支援該命令!\n";
        Strings.save_flie = "是否儲存檔案?(y/n)\n";
        Strings.save_success = "檔案儲存成功!\n";
        Strings.close_file = "檔案關閉成功!\n";
        Strings.exit = "是否離開程式?(y/n)\n";
        Strings.goodbye = "謝謝下次使用!\n";
        Strings.input_rowcol = "請輸入行數和列數,以空格分隔:\n";
        break;}
        case En_US:// 英文
        {Strings.welcome = "Welcome to Lightweight Excel!\n";
        Strings.name_input = "Please enter the file name, if the file already exists, it will be overwritten:";
        Strings.open_file = "Press Enter to create a new file, or enter the path to open a file:";
        Strings.create_success = "File creation successful!\n";
        Strings.open_failed = "Failed to open the file or the file does not exist!\n";
        Strings.open_success = "File open successful!\n";
        Strings.empty_file = "Empty file, please initialize!\n";
        Strings.commands = "Please enter the command:\n1.Insert row\n2.Delete row\n3.Insert column\n4.Delete column\n5.Modify cell\n-1.Close file\n";
        Strings.insert_row = "Please enter the row number to insert:\n";
        Strings.delete_row = "Please enter the row number to delete:\n";
        Strings.insert_col = "Please enter the column number to insert:\n";
        Strings.delete_col = "Please enter the column number to delete:\n";
        Strings.modify_cell = "Please enter the row number, column number and the value to be modified, separated by spaces:\n";
        Strings.illigal_command = "Unsupported command!\n";
        Strings.save_flie = "Do you want to save the file?(y/n)\n";
        Strings.save_success = "File saved successfully!\n";
        Strings.close_file = "File closed successfully!\n";
        Strings.exit = "Do you want to exit the program?(y/n)\n";
        Strings.goodbye = "Thank you for using!\n";
        Strings.input_rowcol = "Please enter the number of rows and columns, separated by spaces:\n";
        break;}
        case zh_CN://默认为简体中文
        default:
        {Strings.welcome = "欢迎使用轻量Excel!\n";
        Strings.name_input = "请输入文件名,如果文件存在,将会覆盖原文件:";
        Strings.open_file = "新建文件请回车,打开文件请输入路径:";
        Strings.create_success = "文件创建成功!\n";
        Strings.open_failed = "文件打开失败或文件不存在1\n";
        Strings.open_success = "文件打开成功!\n";
        Strings.empty_file = "空白文档,请先初始化1\n";
        Strings.commands = "请输入命令:\n1.插入行\n2.删除行\n3.插入列\n4.删除列\n5.修改单元格\n-1.关闭文件\n";
        Strings.insert_row = "请输入要插入的行号:\n";
        Strings.delete_row = "请输入要删除的行号:\n";
        Strings.insert_col = "请输入要插入的列号:\n";
        Strings.delete_col = "请输入要删除的列号:\n";
        Strings.modify_cell = "请输入行号和列号及欲修改的值,用空格分隔:\n";
        Strings.illigal_command = "暂不支持该命令!\n";
        Strings.save_flie = "是否保存文件?(y/n)\n";
        Strings.save_success = "文件保存成功!\n";
        Strings.close_file = "文件关闭成功!\n";
        Strings.exit = "是否退出程序?(y/n)\n";
        Strings.goodbye = "欢迎下次使用!\n";
        Strings.input_rowcol = "请输入行数和列数,用空格分隔:\n";}
    }
}