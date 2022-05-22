// Autores: BALSECA RENE,
// Fecha de creaciÃ³n: 2022-05-21
// Fecha de ultima actualizacion: 2022-05-21


#include<iostream>
#include<stdlib.h>
using namespace std;
#include "rb-libreria.h"
//#include "BB_libreria.h"
//#include "CC_libreria.h"
//#include "DD_libreria.h"
//#include "DD_libreria.h"




int main()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************Grupo GeneraciÃ³n Z**************"<<endl<<endl;
			cout<<"1.- PROGRAMA DE RENE BALSECA"<<endl;
			cout<<"2.- Programas de "<<endl;
			cout<<"3.- Programas de "<<endl; 
			cout<<"4.- Programas de "<<endl;
			cout<<"5.- Programas de "<<endl;
			cout<<"0.- Salir del menu. \n"<<endl;
			cout<<" Ingrese una opcion : "<<endl;
			 cin>>op;     //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE RENE BALSECA ";
					int RB_menu();
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE ";
					int RB_menu();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE ";
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE ";
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE ";
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
	}while(op!=0);
	
	system("tree");

	return(0);

}
