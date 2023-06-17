#include <iostream>

using namespace std;

double pedirNumero(string mensaje) {
    double numero;
    cout << mensaje;
    cin >> numero;
    return numero;
}

int pedirEntero(string mensaje) {
    int entero;
    cout << mensaje;
    cin >> entero;
    return entero;
}

class p1 {
public:
    void pedirDato() {
        double lower_limit = pedirNumero("\nIngrese el límite inferior: ");
        double upper_limit = pedirNumero("\nIngrese el límite superior: ");
        int num_intervals = pedirEntero("\nIngrese el número de intervalos: ");
        
        // Resto del código de la parte 1...
    }
};
