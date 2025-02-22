#include <iostream>
#include <string>
#include <sstream>
#include "date.h"


Date::Date() {
	std::string dateString = "00/00/0000";
	int month = 0;
	int day = 0;
	int year = 0;
}


void Date::init(std::string dateString) {
	Date::dateString = dateString;
	std::stringstream ss;
	std::string tDay;
	std::string tMonth;
	std::string tYear;

	ss.clear();
	ss.str("");

	getline(dateString, tDay, '/');
	getline(dateString, tMonth, '/');
	getline(dateString, tYear);

	ss.clear();
	ss.str("");

	ss << tDay << " " << tMonth << " " << tYear;
	ss >> day >> month >> year;
}

void Date::printDate() {
	std::string monthNames[] = {"Null", "January", "February", "March", "April", "May",
	                   	    "June", "July", "August", "September", "October", "November", "December"}; 
	std::cout << months[month] << " ";
	std::cout << day << "," << year << std::endl;
}
