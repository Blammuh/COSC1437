#include <iostream>
using namespace std;

int main() {
    cout << "We will now begin the fitness counting test." << endl;
    cout << "Numbers 0-10 will be multiplied by 2 and 10." << endl;
    cout << "Ready? Begin." << endl;

    int i = 0;
    do {
        int Number = i;
        int Numberby2 = Number * 2;
        int Numberby10 = Number * 10;

        cout << "Number: " << Number << endl;
        cout << "Multiplied by 2: " << Numberby2 << endl;
        cout << "Multiplied by 10: " << Numberby10 << endl;

        ++i;
    } while (i <= 10);

    return 0;
}