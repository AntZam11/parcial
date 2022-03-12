#include <iostream>

using namespace std;

main(){

string usuario,string,nombres,apellidos,mensaje="";
char continuar;
int codigo;
int n1=0,n2=0,n3=0,n4=0;	
float promedio =0;

 do{
 
cout<<"-------ESTUDIANTES--------"<<endl;
cout<<"ingrese codigo:";
cin>>codigo;
cout<<"ingrese usuario:";
cin>>usuario;
cout<<"ingrese nombre:";
cin>>nombres;
cout<<"ingrese apellidos:";
cin>>apellidos;

cout<<"_________________________________________________\n"<<endl;

cout<<"Ingrese Nota1:";
cin>>n1;
cout<<"Ingrese Nota2:";
cin>>n2;
cout<<"Ingrese Nota3:";
cin>>n3;
cout<<"Ingrese Nota4:";
cin>>n4;
cout<<"___________________________________________________\n"<<endl;

cout<<"\nCodigo del Usuario: "<<codigo<<endl;
cout<<"Usuario: "<<usuario<<endl;
cout<<"Nombre: "<<nombres<<endl;
cout<<"apellido: "<<apellidos<<endl;

cout<<"Nota 1: "<<n1<<endl;
cout<<"Nota 2: "<<n2<<endl;
cout<<"Nota 3: "<<n3<<endl;
cout<<"Nota 4: "<<n4<<endl;

cout<<"___________________________________________________\n"<<endl;
promedio = (n1+n2+n3+n4)/4;
mensaje = promedio >60 ?"Aprabado" : "Reprobado";
cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;



cout<<"_________________________________________________\n"<<endl;

		cout<<"Desea Agregar otro Estudiante (s/n):";
		cin>>continuar;
	}while(continuar=='s' || continuar=='S');


return 0;

};






