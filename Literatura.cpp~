#include <iostream>
#include "Literatura.h"
#include "Obras.h"
#include <string>
#include <stringstream>

using std::string;
using std::stringstream;

Literatura::Literatura(string nombre,string autor,string fecha,string genero,string epoca):Obras(nombre,autor,fecha),genero(genero),epoca(epoca){

}
Literatura::~Literatura(){
}
string Literatura::toString(){
	stringstream ss;
	ss << "Literatura\n" << "Genero = " << genero << " Epoca = " << epoca << "\n";
	return ss.str();
}
