#include <iostream>
#include "Obras.h"
#include "Arquitectonicos.h"
#include <string>
#include <sstream>

using std::stringstream;

Arquitectonicos::Arquitectonicos(string nombre,string autor,string fecha,string terreno):Obras(nombre,autor,fecha),terreno(terreno){
}
Arquitectonicos::~Arquitectonicos(){
}
string Arquitectonicos::toString(){
	stringstream ss;
	ss << "Arquitectonicos\n" << "Terreno = " << terreno << "\n";
	return ss.str();
}
