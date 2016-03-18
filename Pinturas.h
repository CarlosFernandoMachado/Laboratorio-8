#pragma once
#include <string>
#include "obras.h"

using std::string;

class Pinturas : public Obras{
	string material;
	string tecnica;
public:
	Pinturas(string,string,string,string,string);
	~Pinturas();
	string toString();


};
