#include <iostream>
#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Pinturas.h"
#include "Arquitectonicos.h"
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char*argv[]){
	vector<Obras> arte;
	vector<string> eliminados;
	int menu = 1;
	while(menu){
		cout << "0-Salir\n1-Agregar\n2-Eliminar\n3-Listar Existentes\n4-Listar Eliminados" << endl;
		cin >> menu;
		if(menu == 1){
			string nombre,autor,fecha;
			cout << "Escriba el nombre de la obra: ";
			cin >> nombre;
			cout << "Escriba el nombre del autor de la obra: ";
			cin >> autor;
			cout << "Escriba la fecha obra: ";
			cin >> fecha;
			cout << "1-Literatura\n2-Escultura\n3-Pinturas\n4-Arquitectonicas" << endl;
			cin >> menu;
			if(menu == 1){
				string genero,epoca;
				cout << "Escriba el genero de la obra: ";
				cin >> genero;
				cout << "Escriba la epoca de la obra: ";
				cin >> epoca;
				Literatura libro(nombre,autor,fecha,genero,epoca);
				arte.push_back(libro);
			}else if(menu == 2){
				double peso;
				string material;
				cout << "Escriba el peso de la obra: ";
				cin >> peso;
				cout << "Escriba el material de la obra: ";
				cin >> material;
				Esculturas libro(nombre,autor,fecha,peso,material);
				arte.push_back(libro);
			}else if(menu == 3){
				string material,tecnica;
				cout << "Escriba la tecnica utilizada en la obra: ";
				cin >> tecnica;
				cout << "Escriba el material de la obra: ";
				cin >> material;
				Pinturas libro(nombre,autor,fecha,material,tecnica);
				arte.push_back(libro);
			}else if(menu == 4){
				string terreno;
				cout << "Escriba el terreno de la obra: ";
				cin >> terreno;
				Arquitectonicos libro(nombre,autor,fecha,terreno);
				arte.push_back(libro);
			}
		}else if(menu == 2){
			for(int i = 0;i < arte.size();i++){
				cout << "Posicion " << i << " " << arte[i].toString();
			}
			int opcion;
			cout << "Escoja la posicion: ";
			cin >> opcion;
			eliminados.push_back(arte[opcion].toString());
			arte.erase(arte.begin()+opcion);
		}else if(menu == 3){
			for(int i = 0;i < arte.size();i++){
				cout << "Posicion " << i << " " << arte[i].toString();
			}
		}else if(menu == 4){
			for(int i = 0;i < eliminados.size();i++){
				cout << eliminados[i] << "\n";
			}
		}
	}
	return 0;
}
