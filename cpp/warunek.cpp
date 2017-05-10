/*
 * Program liczący pole i obód prostokąta i trójkąta
 *
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)

{
    int a, b, c = 0;
    cout << "podaj trzy liczby:" << endl;
    cin >> a >> b >> c;

    if (a > b) {
        cout << "a jest większe!" << endl;
        cout << "a > b";
    } else if (a < b) {
        cout << "b jest większe!" << endl;
        cout << "a < b";
    } else if (a == b) {
        cout << "a jest równe b" << endl;
        cout << "a = b" << endl;
    }

	return 0;
}
