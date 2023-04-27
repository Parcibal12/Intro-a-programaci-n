//CÓDIGO

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número de día de la semana: ";
    cin >> numero; //Declaramos nuestra variable "numero", imprimimos un mensaje inicial y almacenamos el numero del día que coloque el usuario.// 
    switch (numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "El número ingresado no es un día de la semana" << endl;
            break; //Usamos "switch" para comparar el valor de "numero" con cada uno de los "case" dado que coincida con uno de ellos se imprima el dia de la semana del respectivo "case", también colocamos un "default" en caso de que el "numero" no coincida con ningun "case" imprimiendo un mensaje y saliendo del bloque en cada uno de los casos al cumplirse un caso con "break". 
    }
    return 0;
}

/*PSEUDOCODIGO:
Pedir al usuario que ingrese un número del día de la semana.
Leer y almacenar el número del día ingresado por el usuario.
Usar una estructura de control switch para comparar el número de día ingresado con cada día de la semana posible (1-7).
Si el número de día es 1, imprimir "Lunes" en la consola.
Si el número de día es 3, imprimir "MiÃ©rcoles" en la consola.
Si el número de día es 4, imprimir "Jueves" en la consola.
Si el número de día es 5, imprimir "Viernes" en la consola.
Si el número de día es 6, imprimir "SÃ¡bado" en la consola.
Si el número de día es 7, imprimir "Domingo" en la consola.
Si el número de día no está entre 1 y 7, imprimir un mensaje de error en la consola indicando que el número de día ingresado no es válido.
Finalizar el programa.*/