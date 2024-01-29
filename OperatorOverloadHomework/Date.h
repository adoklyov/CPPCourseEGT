// Date class definition.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::istream;
using std::ostream;

class Date
{
	friend ostream& operator<<(ostream&, const Date&);
public:
	Date(int m = 1, int d = 1, int y = 1900); // default constructor
	void setDate(int, int, int); // set month, day, year
	Date& operator++(); // prefix increment operator
	Date operator++(int); // postfix increment operator
	const Date& operator+=(int); // add days, modify object
	bool leapYear(int) const; // is date in a leap year?
	bool endOfMonth(int) const; // is date at the end of month?
	//Prefix decrement operator
	Date& operator--();
	//Postfix decrement operator
	Date operator--(int);
	//Operator <<
	friend ostream& operator<<(ostream&, const Date&);
	//Operator >>
	friend istream& operator>>(istream&, const Date&);

	//Setters and getters
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	//End setters and getters

private:
	int month;
	int day;
	int year;

	static const int days[]; // array of days per month
	void helpIncrement(); // utility function for incrementing date
}; // end class Date

#endif