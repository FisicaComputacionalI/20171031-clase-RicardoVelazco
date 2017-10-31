//Edad promedio a la que graduara este grupo
//Ricardo Velazco Castillo
//Martes 31 de Octubre de 2017
//Esta modificacion es en el caso de que no sepamos de antemano cuantos datos resiviremos (size_t talla=n(numero)).
//El asterisco esn un contador, es necesario.
#include <iostream>
using namespace std;
int main (){
  int sum=0;
  size_t talla=0;
  cout<<"¿cuantos alumnos tienes?"<<endl;
  cin>>talla;
  int *edad = new int[talla];
    for(int i=0; i<talla; i++){
      cout<<"¿Que edad tienes?" <<endl;
      cin>>edad[i];
    }
  for(int j=0; j<talla; j++)
    sum+=(edad[j] + 3);
  for(int j=0; j<talla; j++)
    cout<<edad[j]<<" , "; 
  cout<<endl;
  cout<<"El promedio de edad al que se graduara este grupo es "<<sum/talla<<endl;
  return 0;
}
