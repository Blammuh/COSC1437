#include <iostream>
using namespace std;

int main()
{
    int num1 = -50;
    int num2 = 53;
    int num3 = 78;

    int largest, smallest;

    // Initialize largest and smallest with the first value
    largest = smallest = num1;

    // Compare with the second value
    if (num2 > largest)
        largest = num2;
    else if (num2 < smallest)
        smallest = num2;

    // Compare with the third value
    if (num3 > largest)
        largest = num3;
    else if (num3 < smallest)
        smallest = num3;

    cout << "The largest value is " << largest << endl;
    cout << "The smallest value is " << smallest << endl;

    return 0;
}