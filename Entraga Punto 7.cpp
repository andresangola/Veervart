#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include <string> 
#include<stdlib.h>
using namespace std; 

int posicion_actual();//inicializa la función para verificar el progreso del juego 
//int tirardados(aleatorio);//inicializa la función para tirar los dados 

int movimiento; //contiene el valor obtenido por el jugador
int entrada;
int progreso;// contiene el valor de progreso del jugador
int jugador=0; //punto inicial de jugador
int serpiente [25]; // posiciones del juego 
int dado;           //Declaramos la variables mas importante
int tiro;
string alerta;


int main ()
{   cout << "Bienvenido a serpientes y escaleras."<<endl;
    cout<<"Jugador  Presiona la tecla intro para tirar los dados ..."<<endl;
   do 
   {
     string alerta=""; /// mensaje de victora o retroceso 

    
    srand((unsigned) time(0));

      
        cin.get();
        dado= (rand()%6)+1;//genera el valor aleatorio
        tiro=dado;
        cout<<"Dado  = "<<dado<<"       avanzas "<< tiro<<endl; /// lanzamiento de dado
    
         jugador=tiro + jugador; // posición actual del jugador 
     cout<<"Has quedado en la posición:    "<<jugador<<endl;
     
     cout<<"Jugador  Presiona una tecla para tirar..."<<endl;
     
        //cout<<jugador;
         
         
         switch(jugador) // son serpientes y escaleras, los números representan las serpientes y escaleras 
        { 
            case 14: 
            jugador =4 ; 
            cout<<"Quedaste en la posicion # 4"<<endl; 
            break; 

            case 19: 
            jugador = 8; 
            cout<<"Quedaste en la posicion # 8"<<endl; 
            break; 

            case 22: 
            jugador = 20; 
            cout<<"Quedaste en la posicion # 20"<<endl; 
            break; 

            case 24: 
            jugador = 16; 
            cout<<"Quedaste en la posicion # 16"<<endl ; 
            break;
            
            case 10: 
            jugador =12 ; 
            cout<<"Quedaste en la posicion # 12"<<endl; 
            break; 

            case 9: 
            jugador = 18; 
            cout<<"Quedaste en la posicion # 18"<<endl; 
            break;

            case 3: 
            jugador = 11; 
            cout<<"Quedaste en la posicion # 11"<<endl; 
            break; 

            case 6: 
            jugador = 17; 
            cout<<"Quedaste en la posicion # 17"<<endl; 
            break;
            
     default:
     alerta="";
     
        }
        
    if (jugador==25) //Creamos la condicion para que solo se detenga el juego cuando el jugador llegue a la casilla 25
        {
    
            cout<<" GANASTE "<<endl;

            }
            
     else if(jugador > 25)
    {
    
     jugador=jugador-tiro;
     
    }
        }
    
    
  
  while(jugador<25); // cerramos el ciclo del juego
   
    {

  
    
}
}