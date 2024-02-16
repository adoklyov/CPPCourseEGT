// Date class member-function definitions.
#include <iostream>
#include "Date.h"
#include <iomanip>
#include <sstream>

using namespace std;

// initialize static member at file scope; one classwide copy
const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
} // end Date constructor

// set month, day and year
void Date::setDate(int mm, int dd, int yy)
{
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    // test for a leap year
    if (month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
} // end function setDate

// overloaded prefix increment operator 
Date& Date::operator++()
{
    helpIncrement(); // increment date
    return *this; // reference return to create a lvalue
} // end function operator++

// overloaded postfix increment operator; note that the  
// dummy integer parameter does not have a parameter name
Date Date::operator++(int)
{
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

// add specified number of days to date
const Date& Date::operator+=(int additionalDays)
{
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear) const
{
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; // a leap year
    else
        return false; // not a leap year
} // end function leapYear

// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay) const
{
    if (month == 2 && leapYear(year))
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == days[month];
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement()
{
    // day is not end of month
    if (!endOfMonth(day))
        day++; // increment day
    else
        if (month < 12) // day is end of month and month < 12
        {
            month++; // increment month
            day = 1; // first day of new month
        } // end if
        else // last day of year
        {
            year++; // increment year
            month = 1; // first month of new year
            day = 1; // first day of new month
        } // end else
} // end function helpIncrement

//Homework Task Code Begins Here--------------------------------------------
//Overloaded prefix decrement operator
Date& Date::operator--()
{
    //if day is not the first day of the month
    if (day != 1)
        day--; //decrement day
    else
    {
        //if month is not January
        if (month != 1)
        {
            month--; //decrement month
            day = days[month]; //set day to last day of previous month
        }
        else
        {
            year--; //decrement year
            month = 12; //set month to December
            day = days[month]; //set day to last day of December
        }
    }
    return *this; //enables cascading
}

//Overloaded postfix decrement operator
Date Date::operator--(int)
{
    Date temp = *this; //hold current state of object
    --*this; //decrement date
    return temp; //return unincremented, saved, temporary object
}

//Getter and setter implementations
int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

void Date::setMonth(int m)
{
    month = m;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setYear(int y)
{
    year = y;
}

//End of getter and setter implementations

//Overload << operator 
ostream& operator<<(ostream& os, const Date& d) {
    os << std::setw(2) << std::setfill('0') << d.getDay() << '-'
        << std::setw(2) << std::setfill('0') << d.getMonth() << '-'
        << std::setw(2) << d.getYear() % 100;  // Modulo 100 for last two digits of year
    return os;
}

//Overload >> operator
istream& operator>>(istream& is, Date& d) {
    string date;
    if (getline(is, date, '\n')) {
        istringstream dateStream(date);
        int day, month, year;
        char dash1, dash2;

        if (dateStream) {
            dateStream >> day >> dash1 >> month >> dash2 >> year;
            if (dateStream && dash1 == '-' && dash2 == '-') {
                d.setDay(day);
                d.setMonth(month);
                d.setYear(year);
            }
            else {
                is.setstate(ios::failbit);
            }
        }
        else {
            is.setstate(ios::failbit);
        }

    }
    return is;
}
//Homework Task Code Ends Here---------------------------------------------