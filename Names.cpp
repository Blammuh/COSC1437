#include <iostream>
using namespace std;

int main()
{
string Fullname;
cout << "Please enter your full first and last name" << endl;
getline(cin, Fullname);
string arr[] = {Fullname};

    // Extracting first and last names 
    size_t Spacebar = Fullname.find(' ');
    string Firstname = Fullname.substr(0, Spacebar);
    string Lastname = Fullname.substr(Spacebar + 1);
    
    // Getting and printing initials
    char Finitial = Fullname[0];
    char Sinitial = Fullname[Spacebar + 1];
    cout << "Your initials are " << Finitial << "." << Sinitial << endl;
    
    // Outputting new names
    cout << "Your new first name is: " << Firstname.substr(0,Firstname.length() / 2)
    << Lastname.substr(Lastname.length() / 2) << endl;
    cout << "Your new last name is: " << Lastname.substr(0, Lastname.length() / 2) 
    << Firstname.substr(Firstname.length() / 2) << endl;

return 0;
}

/
