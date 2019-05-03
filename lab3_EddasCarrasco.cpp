#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//prototipos de funcion
int mcd(int,int);
int* calculadoraPrimos();



int main(){
        //menu con fin centinela
        //mientras no se seleccione la opcion de salida el menu continua
        char opcion;
	int*array=calculadoraPrimos();
        do{
                cout<<"\ningrese una opcion\n1.op1\n2.op2\n3.op3\n4.salir\n\n?:";cin>>opcion;
                //la opcion es procesada en una estructura de casos
                switch(opcion){
                        case '1':
				int a,b;
				//pedir datos
				cout<<"ingresar datos(a>b)&positivos:"<<endl;
				cout<<"ingrese a:";
				cin>>a;
				while(a<1){
					cout<<"\nerror a debe ser positivo / intente de nuevo"<<endl;
					cout<<"ingrese a:";
					cin>>a;
				}
				cout<<endl;
				cout<<"ingrese b:";
				cin>>b;	
				while(b<1){
					cout<<"\nerror b debe ser positivo / intente de nuevo"<<endl;
					cout<<"ingrese b:";
					cin>>b;
					cout<<endl;
				}


				//a tiene que ser mayor que b
				while(a<b){
					cout<<"error a debe ser mayor que b /intente de nuevo"<<endl;
					cout<<"ingrese a:";
					cin>>a;
					while(a<1){
						cout<<"\nerror a debe ser positivo / intente de nuevo"<<endl;
						cout<<"ingrese a:";
						cin>>a;
					}
					cout<<endl;
					cout<<"ingrese b:";
					cin>>b;	
					while(b<1){
						cout<<"\nerror b debe ser positivo / intente de nuevo"<<endl;
						cout<<"ingrese b:";
						cin>>b;
						cout<<endl;
					}
		


				}

				//iteracion
				cout<<"mcd(a,b):"<<mcd(a,b);

                                break;
                        case '2':
				//entrada de datos
				int num;
				cout<<"ingrese numero mayor que 1: ";
				cin>>num;
				cout<<endl;
				while(num<1){
					cout<<"error! ingrese un numero > 1: ";
					cin>>num;
				}	
					
                                //accedemos al arreglo
				cout<<array[0];

				
				

				break;


                        case '3': 
                                break;
                        case '4':
                                cout<<"\nhasta luego"<<endl;
                                break;

                        default:cout<<"\nno ingreso una opcion correcta/intente de nuevo"<<endl;
                }
        }while(opcion!='4');
        
        
        
        
}

int mcd(int a,int b){
	int aux;
	if(a%b==0){
		return b;
	}else{
		aux=a%b;
		a=b;
		b=aux;
		return mcd(a,b);
	}
}

int* calculadoraPrimos(){
	//se crea un arreglo de primos
	int ptrarray[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,73, 79, 83, 89, 97};
	//se retorna una referencia
	return &ptrarray;

}
