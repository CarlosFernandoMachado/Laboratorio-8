#pragma once
#include "Obras.h"
#include <string>

using std::string;

class Esculturas : public Obras{
	double peso;
	string material;
public:
	Esculturas(string,string,string,double,string);
	~Esculturas();
	string toString();
};
