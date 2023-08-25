// REALIZA UN PROGRAMA QUE LEA UN ARREGLO DE ESTRUCTURAS LOS DATOS DE N EMPLEADOS DE LA EMPRESA Y QUE IMPRIMA LOS DATOS DEL EMPLEADO CON MAYOR Y MENOR SALARIO
#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
    char nombre[20];
    float salario;
} emp[100];

int main(){

    int n_empleados, posM = 0, posm = 0;
    float mayor = 0, menor = 9999999;

    cout<< "INTRODUZCA LA CANTIDAD DE EMPLEADOS: ";
    cin>> n_empleados;

    for (int i = 0; i = n_empleados; i++){
        cout<<i+1<<". INTRODUZCA SU NUMBRE: ";
        cin.getline(emp[i].nombre,20,'\n');
        cout<<i+1<<". INTRODUZCA SU SALARIO: ";
        cin>>emp[i].salario;
        
        if (emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }

        if (emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }
        
        cout<< '\n';
    }

    cout<< "\n.:DATOS DEL EMPLEADO CON MAYOR SALARIO: .\n";
    cout<< "NOMBRE: " << emp[posM].nombre << endl;
    cout<< "SALARIO: " << emp[posM].salario << endl; 

    getch();
    return 0;
}