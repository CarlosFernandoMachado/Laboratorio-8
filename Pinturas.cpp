#include <iostream>
#include "Pinturas.h"
#include "Obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Pinturas::Pinturas(string nombre,string autor,string fecha,string material,string tecnica):Obras(nombre,autor,fecha),material(material),tecnica(tecnica){
}
Pinturas::~Pinturas(){
}
string Pinturas::toString(){
	stringstream ss;
	ss << "Pintura\n" << "Material = " << material << " Tecnica = " << tecnica << "\n";
	return ss.str();
}
