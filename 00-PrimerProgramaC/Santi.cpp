#include <iostream>
using namespace std;
int main(){

    string Nombre;
    cout<<"Inserte su nombre: ";
    cin>>Nombre;

    if(Nombre=="Santiago"){
        cout<<"Santiago es el dueño del repositorio";
        } 
        else {
            cout<<"Bienvenido "<<Nombre<<endl;
        }



    return 0;
}