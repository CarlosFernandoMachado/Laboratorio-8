#pragma once
#include "Obras.h"
#include <string>

class Arquitectonicos : public Obras{
	string terreno;
public:
	Arquitectonicos(string,string,string,string);
	~Arquitectonicos();
	string toString();
};
