//CÓDIGO

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int decimal;
    stack<int> pila;
    cout << "Introduce un número decimal: ";
    cin >> decimal;
    //Definimos nuestra variable "decimal" para almacenar ahí el nímero que colocara el usuario, tambien la variable "pila" para almacenar los restos de la división, se mostrará al inicio el mensaje de "Introduce un número decimal" el cual una vez colocado se almacenara en "decimal".//
    if (decimal == 0) {
        cout << "0" << endl;
        return 0;
    }
    //Usamos la condición "if" para comprobar en caso de que el número colocado sea "0", en caso de que sea asi el programa mostrara en pantalla "0"//
    while (decimal > 0) {
        int resto = decimal % 2;
        pila.push(resto);
        decimal /= 2;
    }
    //Utilizamos este bucle para dividir nuestro "decimal" entre 2 y que luego se guarde el resto, el bucle se repetira hasta que decimal sea menor o igual a "0"//
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
    //Esto no servirá para mostrar los restos de la pila en pantalla utilizando "pila.top();" "pila.pop();" para invertir la lectura de los restos dando asi la correcta interpretacion del numero binario//
    cout << endl; //Esto nos muestra el codigo binario resultante//
    return 0;
}

/*PSEUDOCODIGO:
Pedir al usuario que ingrese un número decimal
Leer el número decimal ingresado por el usuario
Crear una pila vacía llamada "binario"
Mientras el número decimal sea mayor que 0:
a. Calcular el resto de la división del número decimal entre 2
b. Agregar el resto a la pila "binario"
c. Dividir el número decimal entre 2 y asignar el resultado a la variable del número decimal
Mientras la pila "binario" no esté vacía:
a. Imprimir el último elemento de la pila "binario"
b. Eliminar el último elemento de la pila "binario"
Mostrar el resultado*/