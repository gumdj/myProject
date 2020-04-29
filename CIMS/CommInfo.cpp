#include "CommInfo.h"

Date::Date(int year, int month, int day)
{
    _year = year;
    _month = month;
    _day = day;
}

bool Date::operator==(Date date)
{
    if (date._year == this->_year && date._month == this->_month && date._day == this->_day)
    {
        return true;
    }
    else {
        return false;
    }

}

std::ostream &operator<<(std::ostream &out, Date &date)
{
    out << std::to_string(date._year) + "年" + std::to_string(date._month) + "月" + std::to_string(date._day) + "日";
    return out;
}

std::istream &operator>>(std::istream &in, Date &date)
{
    in >> date._year >> date._month >> date._day;
    return in;
}

CommInfo::CommInfo(std::string name, std::string phone, std::string email, std::string company)
{
    _name = name;
    _phone = phone;
    _email = email;
    _company = company;
}

void CommInfo::setName(std::string name)
{
    _name = name;
}

void CommInfo::setDate(Date date)
{
    _date = date;
}

void CommInfo::setPhone(std::string phone)
{
    _phone = phone;
}

void CommInfo::setEmail(std::string email)
{
    _email = email;
}

void CommInfo::setCompany(std::string company)
{
    _company = company;
}

std::string CommInfo::getName()
{
    return _name;
}

Date CommInfo::getDate()
{
    return _date;
}

std::string CommInfo::getPhone()
{
    return _phone;
}

std::string CommInfo::getEmail()
{
    return _email;
}

std::string CommInfo::getCompany()
{
    return _company;
}
