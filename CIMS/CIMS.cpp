#include "CIMS.h"

CIMS::CIMS()
{
    menuTitle[0] = "主菜单";
    menuTitle[1] = "录入模块";
    menuTitle[2] = "删除模块";
    menuTitle[3] = "修改菜单";
    menuTitle[4] = "插入模块";
    menuTitle[5] = "查看";
    mainMenu();
}

void CIMS::title()
{
    std::cout << "************************" << std::endl;
    std::cout << "*  通 讯 管 理 系 统   *" << std::endl;
    std::cout << "*    C   I   M   S     *" << std::endl;
    std::cout << "************************" << std::endl;
}

void CIMS::mainMenu()
{
    while (1)
    {
        title();
        char ch;
        std::cout << "当前是: " << menuTitle[0] << std::endl;
        std::cout << "1 录入通讯信息*" << std::endl;
        std::cout << "2 删除通讯信息*" << std::endl;
        std::cout << "3 修改通讯信息*" << std::endl;
        std::cout << "4 插入通讯信息*" << std::endl;
        std::cout << "5 查看通讯信息*" << std::endl;
        std::cout << "***************" << std::endl;
        std::cout << "请选择(输入0退出): "; std::cin >> ch;
        switch (ch)
        {
        case '0':
            return;
        case '1':
            addModule();
            break;
        case '2':
            delModule();
            break;
        case '3':
            modifyMenu();
            break;
        case '4':
            insertModule();
            break;
        case '5':
            displayModlue();
            break;
        default:
            std::cout << "Input Error!" << std::endl;
            break;
        }
    }
}

void CIMS::modifyMenu()
{
    while (1)
    {
        char ch;
        title();
        std::cout << "当前是: " << menuTitle[4] << std::endl;
        std::cout << "0 返回上一级" << std::endl;
        std::cout << "1 修改姓名" << std::endl;
        std::cout << "2 修改出生日期" << std::endl;
        std::cout << "3 修改电话号码" << std::endl;
        std::cout << "4 修改电子邮箱" << std::endl;
        std::cout << "5 修改工作单位" << std::endl;
        std::cout << "请选择: "; std::cin >> ch;
        switch (ch)
        {
        case '0':
            return;
        case '1':
            modifyNameModule();
            break;
        case '2':
            modifyDateModule();
            break;
        case '3':
            modifyPhoneModule();
            break;
        case '4':
            modifyEmailModule();
            break;
        case '5':
            modifyCompanyModule();
            break;
        default:
            std::cout << "Input Error" << std::endl;
            break;
        }
    }
}

void CIMS::addModule()
{
    while (1)
    {
        char ch;
        std::string name, phone, email, company;
        Date date;
        title();
        std::cout << "当前是: " << menuTitle[1] << std::endl;
        std::cout << "请输入姓名: "; std::cin >> name;
        std::cout << std::endl;
        std::cout << "请输入日期(xxxx xx xx): "; std::cin >> date;
        std::cout << std::endl;
        std::cout << "请输入电话: "; std::cin >> phone;
        std::cout << std::endl;
        std::cout << "请输入电子邮箱: "; std::cin >> email;
        std::cout << std::endl;
        std::cout << "请输入所在单位: "; std::cin >> company;
        std::cout << std::endl;
        table.addInfo(name, date, phone, email, company);
        std::cout << "录入成功, 是否继续y/n:"; std::cin >> ch;
        if (ch == 'n')
        {
            break;
        }
    }
}

void CIMS::delModule()
{
    std::string name;
    title();
    std::cout << "当前是: " << menuTitle[3] << std::endl;
    std::cout << "请输入要删除通讯信息的姓名: "; std::cin >> name;
    table.deleteInfo(name);
}

void CIMS::modifyNameModule()
{
    std::string name, newName;
    std::cout << "请输入姓名与要修改的新姓名: "; std::cin >> name >> newName;
    table.modifyName(name, newName);
}

void CIMS::modifyDateModule()
{
    std::string name;
    Date newDate;
    std::cout << "请输入姓名与要修改的生日"; std::cin >> name >> newDate;
    table.modifyDate(name, newDate);
}

void CIMS::modifyPhoneModule()
{
    std::string name, newPhone;
    std::cout << "请输入姓名与要修改的生日"; std::cin >> name >> newPhone;
    table.modifyPhone(name, newPhone);
}

void CIMS::modifyEmailModule()
{
    std::string name, newEmail;
    std::cout << "请输入姓名与要修改的生日"; std::cin >> name >> newEmail;
    table.modifyEmail(name, newEmail);
}

void CIMS::modifyCompanyModule()
{
    std::string name, newCompany;
    std::cout << "请输入姓名与要修改的生日"; std::cin >> name >> newCompany;
    table.modifyCompany(name, newCompany);
}


void CIMS::insertModule()
{
    int index;
    CommInfo temp;
    std::string name, phone, email, company;
    Date date;
    title();
    std::cout << "当前是: " << menuTitle[4] << std::endl;
    std::cout << "请输入姓名: "; std::cin >> name;
    std::cout << std::endl;
    std::cout << "请输入日期(xxxx xx xx): "; std::cin >> date;
    std::cout << std::endl;
    std::cout << "请输入电话: "; std::cin >> phone;
    std::cout << std::endl;
    std::cout << "请输入电子邮箱: "; std::cin >> email;
    std::cout << std::endl;
    std::cout << "请输入所在单位: "; std::cin >> company;
    std::cout << std::endl;
    std::cout << "请输入要插入的位置(整型): "; std::cin >> index;
    temp.setName(name);
    temp.setDate(date);
    temp.setPhone(phone);
    temp.setEmail(email);
    temp.setCompany(company);
    table.insertInfo(index, temp);
}

void CIMS::displayModlue()
{
    std::cout << std::left << std::setw(10) << "姓名" << std::setw(15) << "生日" << std::setw(15) << "电话号码" <<
                 std::setw(25) << "电子邮箱" << std::setw(10) << "单位" << std::endl;
    for (int i = 0; i < table.getCount(); i++)
    {
        table.display(i);
    }
}
