/*
 * Program liczący pole i obód prostokąta i trójkąta
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    float a, b, c, h = 0;

    cout << "Podaj długości boków prostokąta:" << endl;
    cin >> a;
    cin >> b;

    cout << "Obwód=\t\t" << 2*a + 2*b << endl;
    cout << "Pole=\t\t" << a * b << endl;


    cout << "Podaj długości boków trojkąta" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Podaj wysokość trójkąta" << endl;
    cin >> h;

    cout << "Obwód=\t\t" << a + b + c << endl;
    cout << "Pole=\t\t" << a * h / 2 << endl;




	return 0;
}
