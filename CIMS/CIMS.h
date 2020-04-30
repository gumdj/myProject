#ifndef MENU_H
#define MENU_H

#include "CommTable.h"

class CIMS
{
private:
    CommTable table;
    std::string menuTitle[7];
public:
    CIMS();
    int exec();

public:
    void title();
    void mainMenu();
    void modifyMenu();
    void findMenu();

public:
    void addModule();
    void delModule();
    void insertModule();
    void modifyNameModule();
    void modifyDateModule();
    void modifyPhoneModule();
    void modifyEmailModule();
    void modifyCompanyModule();
    void displayModule();
    void findByNameModule();
    void findByPhoneModule();

};

#endif // MENU_H
