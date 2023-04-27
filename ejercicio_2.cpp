//CÓDIGO


#include <iostream>
#include <string> 

using namespace std;

int main() {
    string numero; //Defino mi variable "numero" como string.//
    cout << "Introduce un número entero: "; //Texto que aparecera en pantalla al iniciar.//
    cin >> numero; //El número que se vaya a introducir lo almaceno en la variable "numero".//

    string numero_invertido = string(numero.rbegin(), numero.rend()); //Defino una nueva variable "numero_invertido" en string y seguidamente uso las funciones string(numero.rbegin(), numero.rend()) para invertir el numero colocado y que se guarde en la variable "numero_invertido" usando el "=".//

    if (numero == numero_invertido) {
        cout << "Es palíndromo" << endl;
    } else {
        cout << "No es palíndromo" << endl;
    }
    //Uso "if" para verificar si el numero es palíndromo o no, comparando el "numero" con "numero_invertido" si son iguales se muestra en pantalla "Es palíndromo" y uso "else" para que cuando no sean iguales se muestre en pantalla "No es palindromo"
    return 0;
}

/*PSEUDOCODIGO:
 Pedir al usuario que introduzca un número entero y guardarlo en una variable llamada "numero".
 Invertir el número introducido y guardarlo en una variable llamada "numero_invertido".
 Si "numero" es igual a "numero_invertido", mostrar "Es ppalíndromo".
 Si "numero" no es igual a "numero_invertido", mostrar "No es palíndromo".*/