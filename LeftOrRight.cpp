#include <iostream>
using namespace std;

int main() 
{
    int Leftcount = 0;
    int Rightcount = 0;
    char input;

    cout << "Enter an L if you are left-handed, an R if you are right-handed, or X to quit:"
     << endl;

    do {
        cout << "Enter choice: ";
        cin >> input;

        if (input == 'L')
        {
            Leftcount++;
        } 

        else if (input == 'R') 
        {
            Rightcount++;
        } 
    }
     while(input != 'X');
    

    cout << "Number of left-handed students: " << Leftcount << endl;
    cout << "Number of right-handed students: " << Rightcount << endl;

    return 0;

}