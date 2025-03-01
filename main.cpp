#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "date.h"
#include "address.h"
#include "student.h"

std::string menu();
void loadStudents(std::vector<Student*>& students);
void printStudents(std::vector<Student*>& students);
void printStudentNames(std::vector<Student*>& students);
void searchStudents(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);

int main(){
	bool keepGoing = true;
	std::string menuChoice = "";

	std::vector<Student*> students;
	loadStudents(students);

	while (keepGoing){
		std::cout << std::endl;
		menuChoice = menu();
		if (menuChoice == "0"){
			std::cout << "Have a Good Day! Goodbye!"  << std::endl;
			delStudents(students);
			keepGoing = false;
		}

		else if (menuChoice == "1"){
			printStudentNames(students);
		}

		else if (menuChoice == "2"){
			printStudents(students);
		}

		else if (menuChoice == "3"){
			findStudents(students);
		} 

		else{
			//if user types in invalid int 
		} 
	} 
