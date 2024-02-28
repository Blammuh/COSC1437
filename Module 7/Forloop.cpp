#include <iostream>
using namespace std;


int main()
{
cout << "We will now begin the fitness counting test." << endl;
cout << "Numbers 0-10 will be multiplied by 2 and 10." << endl;
cout << "Ready? Begin." << endl;

    for(int i = 0; i <= 10; ++i)
    {
        int Number = i;
        int Numberby2;
        int Numberby10;

        cout << "Number: " << Number << endl;
        Numberby2 = Number * 2;
        Numberby10 = Number * 10;
        cout << "Multiplied by 2: " << Numberby2 << endl;
        cout << "Multiplied by 10: " << Numberby10 << endl;
        ++i;
    }
}