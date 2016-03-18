#include "Obras.h"
#include <iostream>
#include <string>
#include <sstream>
#pragma once

using std::stringstream;
using std::string;

Obras::Obras(string nombre,string autor,string fecha):nombre(nombre),autor(autor),fecha(fecha){
}
Obras::~Obras(){
}
string Obras::toString(){
	stringstream ss;
	ss << "Nombre = " << nombre << ", Autor = " << autor << ", Fecha = " << fecha << "\n";
	return ss.str();
}
