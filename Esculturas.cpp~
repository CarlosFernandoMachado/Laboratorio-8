#include <iostream>
#include "Obras.h"
#include "Esculturas.h"
#include <string>
#include <stringstream>

using std::string;
using std::stringstream;

Esculturas::Esculturas(string nombre,string autor,string fecha,double peso,string material) : Obras(nombre,autor,fecha),peso(peso),material(material){
}
Esculturas::~Esculturas(){
}
string Esculturas::toString(){
	stringstream ss;
	ss << "Escultura\n" << "Peso = " << peso << " Material = " << material << "\n";
	return ss.str();
}
