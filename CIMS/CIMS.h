#ifndef MENU_H
#define MENU_H

#include "CommTable.h"

class CIMS
{
private:
    CommTable table;
    std::string menuTitle[6];
public:
    CIMS();

public:
    void title();
    void mainMenu();
    void modifyMenu();

public:
    void addModule();
    void delModule();
    void insertModule();
    void modifyNameModule();
    void modifyDateModule();
    void modifyPhoneModule();
    void modifyEmailModule();
    void modifyCompanyModule();
    void displayModlue();
};

#endif // MENU_H
