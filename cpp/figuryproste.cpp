/*
 * Program liczący pole i obód prostokąta i trójkąta
 *
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)

{
    float a, b, c, p = 0;

    cout << "Podaj długości boków prostokąta:" << endl;
    cin >> a;
    cin >> b;

    cout << "Obwód=\t\t" << 2*a + 2*b << endl;
    cout << "Pole=\t\t" << a * b << endl;


    cout << "Podaj długości boków trojkąta" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    p = 0.5 * (a+b+c);
    cout << "Pole=\t\t" << sqrt(p * (p-a) * (p-b) * (p-c)) << endl;
    cout << "Obwód=\t\t" << a + b + c << endl;




	return 0;
}
