#include <iostream>
using namespace std;

float FarentoCelsius(float farenheit)
{
    return (farenheit - 32.0) * 5.0 / 9.0;
}

int main()
{
    float farenTemp;
    cout << "Enter your degree in Farenheit" << endl;
    cin >> farenTemp;
    float celsiusTemp = FarentoCelsius(farenTemp);
    cout << "Your degrees in celsius is " + farenTemp + "." << endl;
    return 0;

}