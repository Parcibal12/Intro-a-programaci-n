//CÓDIGO

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int money = 20;
    int price = 5; //Defino mis variables, "money" como el dinero que tengo y "price" como el precio del helado.//

    cout << "Dinero inicial: " << money << endl;
    cout << "Precio del helado: " << price << endl; //Estas son las oraciones que mostrare en pantalla acompañadas del valor de las varibales "money" y "price" respectivamente.//

    while (money >= price) {
        money -= price;
        cout << "Se compa un helado" << endl;
        cout << "Te quedan " << money << " para comprar helado" << endl;
    } 

    cout << "No hay dinero para comprar helado" << endl;
    //Utilizo bucle "while" para comprar con la condición de que "money" sea mayor o igual a "price", al cumplirse mostrará en pantalla los mensajes de "se compra un helado" seguido de "te quedan "money" para comprar helado", asi hasta que se incumpla la condición donde finalmente mostrara el mensaje de "no hay dinero para comprar helado"// 
    return 0;
}
  
/*PSEUDOCODIGO:
INPUT
 money a 20
 price a 5

OUTPUT "Dinero inicial: " SEGUIDO DE money
OUTPUT "Precio del helado: " SEGUIDO DE price

Mientras money sea mayor o igual a price:
    RESTAR price de money
    OUTPUT "Se compra un helado"
    OUTPUT "Te quedan " SEGUIDO DE money Y " para comprar helados"

OUTPUT "No te queda suficiente dinero para comprar helados"*/