#ifndef COMMTABLE_H
#define COMMTABLE_H

#include "CommInfo.h"
#include <iostream>
#include <iomanip>
#include <list>

class CommTable
{
private:
    std::list<CommInfo> _commtable;
    int count;

public:
    int getCount();

public:
    CommTable();
    void addInfo(std::string name, Date date, std::string phone, std::string email, std::string company);
    void deleteInfo(std::string name);
    void modifyName(std::string name, std::string newName);
    void modifyDate(std::string name, Date newDate);
    void modifyPhone(std::string name, std::string newPhone);
    void modifyEmail(std::string name, std::string newEmail);
    void modifyCompany(std::string name, std::string newCompany);
    void insertInfo(int len, CommInfo info);
    CommInfo findInfoByName(std::string name);
    CommInfo findInfoByPhone(std::string phone);
    void display(int index);
};

#endif // COMMTABLE_H
