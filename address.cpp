#include "address.h"
#include <iostream>


Address::Address() {
	street = "";
	city = "";
	state = "";
	zip = "";
}

void Address::init(std::string street, std::string city,
		   std::string state, std::zip){
	
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
}

void Address::printAddress() {
	std::cout << street << std::endl;
	std::cout << city << " " << state << ",";
	std::cout << zip << std::endl;
}
