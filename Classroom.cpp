#include <iostream>
using namespace std;

int main()
{
    string Names[20];
    int Ages[20];
    char Grades[20];

        int NumStudents;

        cout << "Type in how many students you have (max 20): ";
        cin >> NumStudents;
        cout << endl;
            while(NumStudents > 20 || NumStudents < 1)
            {
                cout << "That's not right, try again: ";
                cin >> NumStudents;
                cout << endl;
            }

        for(int i = 0; i < NumStudents; ++i)
        {
            cout << "Enter name for student " << i + 1 << " : ";
            cin >> Names[i];
            cout << endl;
            
            cout << "Next, Enter the age for the student: ";
            cin >> Ages[i];
            cout << endl;
                while(Ages[i] < 0)
                {
                    cout << "That's not possible, try again: ";
                    cin >> Ages[i];
                    cout << endl;
                }


            cout << "Finally, enter the student's grade: ";
            cin >> Grades[i];
            cout << endl;
                while(Grades[i] != 'A' && Grades[i] != 'B' && Grades[i] != 'C'
                && Grades[i] != 'D' && Grades[i] != 'F')
                {
                    cout << "That's not right, try again: ";
                    cin >> Grades[i];
                    cout << endl;
                }

            
            cout << "Student " << i + 1 << "'s Name/Age/Grade is " <<
            Names[i] << "/" << Ages[i] << "/" << Grades[i] << endl;
            cout << "---------------------------------------------" << endl;
        }
}