#include <iostream>
using namespace std;

int siete (int edad[], int asesinatos[], int n){
    int e=edad[0];
    int a=asesinatos[0];
    for(int i=0; i<n; i++){
        if(asesinatos[i]<a){
            e=edad[i];
            a=asesinatos[i];
        }
    }
    return e;
}

float seis(int bajas[], int n){
    int b=0;
    float porcentaje;
    for(int i=0; i<n; i++){
        b=b+bajas[i];
    }
    porcentaje=b/n;
    if(b>0){
        return porcentaje;
    } else {
        return 0;
    }
}

string cinco (string alias[], int edad[], int n){
    string c=alias[0];
    int e=edad[0];
    for(int i=0; i<n; i++){
        if(edad[i]<e){
            c=alias[i];
            e=edad[i];
        }
    }
    return c;
}

int cuatro (int asesinatos[],int edad[], int n){
    int ases=asesinatos[0];
    int eda=edad[0];
    for(int i=0; i<n; i++){
        if(edad[i]>eda){
            ases=asesinatos[i];
            eda=edad[i];
        }
    }
    return ases;
}

float tres (int bajas[], int horas[], int n){
    float porcentaje;
    int cantidad=0, baj=0;
    for(int i=0; i<n; i++){
        if(horas[i]>=100 && horas[i]<=200 ){
            cantidad++;
            baj=baj+bajas[i];
        }
    }
    porcentaje=baj/cantidad*100;
    if(cantidad>0){
    return porcentaje;
    }else {
        return 0;
    }
}

int dos(int horas[], int bajas[], int n){
    int ho=horas[0], ba=bajas[0];
    for(int i=0; i<n; i++){
        if(bajas[i]>ba){
            ho=horas[i];
            ba=bajas[i];
        }
    }
    return ho;
}

string uno(string alias[], int asesinatos[], int n){
    string nombre=alias[0];
    int ma=asesinatos[0];
    for(int i=0; i<n; i++){
        if(asesinatos[i]>ma){
            nombre=alias[i];
            ma=asesinatos[i];
        }
    }
    return nombre;
}

int main(){
    int n;
    cout<<"ingrese el numero de integrantes de su grupo"<<endl;
    cin>>n;
    string alias[n];
    int asesinatos[n], armas[n],bajas[n],edad[n],horas[n];
    for(int i=0; i<n; i++){
        cout<<"ingrese el alias del jugador "<<i+1<<endl;
        cin>>alias[i];
        cout<<"Ingrese la cantidad de asesinatos del jugador "<<i+1<<endl;
        cin>>asesinatos[i];
        cout<<"Ingrese cuantas armas utilizo el jugador "<<i+1<<endl;
        cin>>armas[i];
        cout<<"Ingrese el numero de bajas que realizo en jugador "<<i+1<<endl;
        cin>>bajas[i];
        cout<<"Ingrese la edad del jugador "<<i+1<<endl;
        cin>>edad[i];
        cout<<"Ingrese la cantidad de horas que jugo el jugador "<<i+1<<endl;
        cin>>horas[i];
    }

    cout<<"El jugador que asesino a mas enemigos es "<<uno(alias,bajas,n)<<endl;
    cout<<"Los minutos de juego que tuvo el jugador que mas bajas le propinaron es "<<dos(horas,bajas,n)<<endl;
    cout<<"El % de muertes de los jugadores que tuvieron entre 100 y 200 minutos jugando es "<<tres(bajas,horas,n)<<endl;
    cout<<"La cantidad de asesinatos que tuvo el jugador de mayor edad es "<<cuatro(asesinatos,edad,n)<<endl;
    cout<<"El alias del jugador de menor edad es "<<cinco(alias,edad,n)<<endl;
    cout<<"La cantidad de muertes en promedio durante el juego es "<<seis(bajas,n)<<endl;
    cout<<"La  edad del jugador que menos asesinatos tuvo durante el juego es "<<siete(bajas, n)<<endl;
    return 0;
    
}