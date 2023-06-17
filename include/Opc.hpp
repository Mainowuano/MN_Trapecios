#include <iostream>
#include "Datos.hpp"
#include <cmath>

using namespace std;

class NewtonCotes {
private:
    double lower_limit;
    double upper_limit;
    int num_intervals;

public:
    NewtonCotes(double lower, double upper, int intervals) {
        lower_limit = lower;
        upper_limit = upper;
        num_intervals = intervals;
    }

    double function(double x) {
        return pow(x, 2);
    }

    double calculateIntegral() {
        double class_width = (upper_limit - lower_limit) / num_intervals;
        double integral = 0.0;

        for (int i = 0; i < num_intervals; i++) {
            double x0 = lower_limit + i * class_width;
            double x1 = x0 + class_width;

            double y0 = function(x0);
            double y1 = function(x1);

            double area = (y0 + y1) * class_width / 2.0;

            cout << "\nSubintervalo " << i + 1 << ": ";
            cout.precision(8);
            cout << fixed << area << endl;

            integral += area;
        }

        return integral;
    }
};

class p2 {
public:
    void Operaciones() {
        cout << "\nMetodo numerico: Newton-Cotes por trapecios" << endl;

        double lower_limit = pedirNumero("\nIngrese el límite inferior: ");
        double upper_limit = pedirNumero("\nIngrese el límite superior: ");
        int num_intervals = pedirEntero("\nIngrese el número de intervalos: ");

        NewtonCotes nc(lower_limit, upper_limit, num_intervals);
        double result = nc.calculateIntegral();

        cout << "\nEl valor de espaciamiento entre intervalos es: " << (upper_limit - lower_limit) / num_intervals << endl;
        cout << "\nEl resultado de la integral es: " << result << endl;
    }
};
