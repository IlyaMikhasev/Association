#pragma once
#include <iostream>

class Processor{
public:
	Processor(std::string& manufacturer) :_manufacturer(manufacturer) {}
private:
	std::string _manufacturer;
};

