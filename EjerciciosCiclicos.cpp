#include <iostream>
class EjerciciosCiclicos{
  public:
  void calcularFactorialNum(){
    int numero, contador=1, resultado=1;
     //datos de entrada
     printf("ingrese el numero que desea su factorial;\n");
     scanf("%i",&numero);
     //procesos
     if(numero>0){
      while(contador<numero){
        contador++;
        resultado=resultado*contador;
      }
    }
    //datos de salida
    printf("elfactorial de %i Es: %i\n",numero, resultado);
  }
};
//ejecucion
//g++ EjerciciosCiclicos.cpp -o ejerciciosciclicos.o
//./ejerciciosciclicos.o
int main(){
EjerciciosCiclicos obj;
obj.calcularFactorialNum();
return 0;
}