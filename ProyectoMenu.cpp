#include <iostream>
using namespace std;

int main() {
	int opc;
	cout<<"1. Figuras Geometricas\n2. Operaciones matematiacas\n3. Salir"<<endl;
	cout<<"Opcion: ";cin>>opc;
	
	switch(opc) {
		case 1:
			cout<<"\n-- Figuras Geometricas --";
			
			break;
		case 2:
			cout<<"\n-- Opereaciones Matematicas --";
			
			break;
		case 3:
			cout<<"\n-- Salir --";
			
			break;
		default: 
			cout<<"\nTodo botsito pues, *mandar devuelta al menu*";
	}
	return 0;
}
