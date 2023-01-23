#pragma once
#include <iostream>
#include <string>
#include "Processor.h"
#include "Monitor.h"
class Computer
{
public:
	Computer(std::string& manufacturer, Monitor& doiganal, std::string& atx) :_proc(manufacturer), _monitor(doiganal), _formFactor(atx) {}
private:
	std::string _formFactor;
	Processor _proc;
	Monitor _monitor;
};

