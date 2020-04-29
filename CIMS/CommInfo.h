#ifndef COMMINFO_H
#define COMMINFO_H

#include <iostream>

class Date
{
private:
    int _year;
    int _day;
    int _month;

public:
    Date(int year = 0, int month = 0, int day = 0);

public:
    bool operator==(Date date);
    friend std::ostream &operator<<(std::ostream &out, Date &date);
    friend std::istream &operator>>(std::istream &in, Date &date);
};

class CommInfo
{
private:
    std::string _name;
    Date _date;
    std::string _phone;
    std::string _email;
    std::string _company;

public:
    void setName(std::string name);
    std::string getName();
    void setDate(Date date);
    Date getDate();
    void setPhone(std::string phone);
    std::string getPhone();
    void setEmail(std::string email);
    std::string getEmail();
    void setCompany(std::string company);
    std::string getCompany();

public:
    CommInfo(std::string name = "", std::string phone = "", std::string email = "", std::string company = "");
};

#endif // COMMINFO_H
