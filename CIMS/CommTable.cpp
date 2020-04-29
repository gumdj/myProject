#include "CommTable.h"

CommTable::CommTable()
{
    count = 0;
}

int CommTable::getCount()
{
    return count;
}

void CommTable::addInfo(std::string name, Date date, std::string phone, std::string email, std::string company)
{
    CommInfo temp;
    temp.setName(name);
    temp.setDate(date);
    temp.setPhone(phone);
    temp.setEmail(email);
    temp.setCompany(company);
    _commtable.push_back(temp);
    count++;
}

void CommTable::deleteInfo(std::string name)
{
    std::list<CommInfo>::iterator it;
    bool isDeleted = false;
    for (it = _commtable.begin(); it !=_commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            _commtable.erase(it);
            isDeleted = true;
            break;
        }
    }
    if (isDeleted)
    {
        std::cout << "删除成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::modifyName(std::string name, std::string newName)
{
    std::list<CommInfo>::iterator it;
    bool isModified = false;
    for (it = _commtable.begin(); it != _commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setName(newName);
            isModified = true;
        }
    }
    if (isModified)
    {
        std::cout << "修改成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::modifyPhone(std::string name, std::string newPhone)
{
    std::list<CommInfo>::iterator it;
    bool isModified = false;
    for (it = _commtable.begin(); it != _commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setPhone(newPhone);
            isModified = true;
        }
    }
    if (isModified)
    {
        std::cout << "修改成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::modifyDate(std::string name, Date newDate)
{
    std::list<CommInfo>::iterator it;
    bool isModified = false;
    for (it = _commtable.begin(); it != _commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setDate(newDate);
            isModified = true;
        }
    }
    if (isModified)
    {
        std::cout << "修改成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::modifyEmail(std::string name, std::string newEmail)
{
    std::list<CommInfo>::iterator it;
    bool isModified = false;
    for (it = _commtable.begin(); it != _commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setEmail(newEmail);
            isModified = true;
        }
    }
    if (isModified)
    {
        std::cout << "修改成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::modifyCompany(std::string name, std::string newCompany)
{
    std::list<CommInfo>::iterator it;
    bool isModified = false;
    for (it = _commtable.begin(); it != _commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            it->setCompany(newCompany);
            isModified = true;
        }
    }
    if (isModified)
    {
        std::cout << "修改成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
}

void CommTable::insertInfo(int len, CommInfo info)
{
    std::list<CommInfo>::iterator it;
    it = _commtable.begin();
    for (int i = 0; i < len; i++)
    {
        it++;
    }
    _commtable.insert(it, info);
    std::cout << "插入成功!" << std::endl;
}

CommInfo CommTable::findInfoByName(std::string name)
{
    std::list<CommInfo>::iterator it;
    CommInfo temp;
    bool isfound = false;
    for (it = _commtable.begin(); it !=_commtable.end(); it++)
    {
        if (it->getName() == name)
        {
            temp = *it;
            isfound = true;
            break;
        }
    }
    if (isfound)
    {
        std::cout << "查找成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
    return temp;
}

CommInfo CommTable::findInfoByPhone(std::string phone)
{
    std::list<CommInfo>::iterator it;
    CommInfo temp;
    bool isfound = false;
    for (it = _commtable.begin(); it !=_commtable.end(); it++)
    {
        if (it->getPhone() == phone)
        {
            temp = *it;
            isfound = true;
            break;
        }
    }
    if (isfound)
    {
        std::cout << "查找成功!" << std::endl;
    }
    else {
        std::cout << "未找到此人" << std::endl;
    }
    return temp;
}

void CommTable::display(int len)
{
    std::list<CommInfo>::iterator it;
    it = _commtable.begin();
    for (int i = 0; i < len; i++)
    {
        it++;
    }
    Date date = it->getDate();
    std::cout << std::left << std::setw(10) << it->getName() << std::setw(15) << date << std::setw(15) <<
                 it->getPhone() << std::setw(25) << it->getEmail() << std::setw(10) << it->getCompany() << std::endl;
}
