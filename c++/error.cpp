#include <iostream>
#include <stdlib.h>
#include <stdlib.h>
using namespace std;
class Student
{
private:
    int rollno;
    char name[25];
    float marks;
    char grade;

public:
    void readStudent()
    {
        cout << "\n Enter rollno : ";
        cin >> rollno;
        cout << "\n Enter name : ";
        gets(name);
        cout << "\n  Enter marks : ";
        cin << marks;
    }
    void dispStudent()
    {
        calcGrade();
        cout << "Rollno : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "marks: " << marks << endl;
        cout << "Grade :" << grade << endl;
    }

    int getRollno()
    {
        return rollno;
    }

    float getMarks()
    {
        return marks;
    }

    void calcGrade()
    {
        if (marks >= 75)
        {
            grade = 'O';
        }
        else if (marks >= 60)
        {
            grade = 'A';
        }
        else if (marks >= 50)
        {
            grade = 'B';
        }
        else if (marks >= 40)
        {
            grade = 'C';
        }
        else
        {
            grade = 'F';
        }
    }
};
int main()
{
    Student 12A [10];
    for (int i = 0; i < 10; i++)
    {
        cout << "\nENter details of STudent" << i + 1 << ":";
        12A [i].readStudent();
    }
    int choice, rno, pos = -1, highmarks = 0;
    do
    {
        system("cls");
        cout << "\n\n  MAIN MENUE\n";
        cout << "1.specific Student\n";
        cout << "2.TOPPER\n";
        cout << "3. EXIt\n";
        cout << "\nEnter your choice(1,.2,3..)\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n Enter the rollno  of student whose details you want to see: ";
            cin >> rno;
            for (int i = 0; i < 10; i++)
            {
                if (12A [i].getRollno() == rno)
                {
                    /* code */
                    XIIA[i].dispStudent();
                    break;
                }
            }
            if (i == 10)
                cout << "\n   INVLAIDE ROLLNO!!1\n";
            break;
        case 2:
            for (int i = 0; i < 10; i++)
            {
                if (XIIA[i].getMarks() > highmarks)
                {
                    /* code */
                    pos = i;
                    highmarks = 12A [i].getMarks();
                }
            }
            12A [pos].dispStudent();
            break;

        case 3:
            break;
        default:
            cout << "\n WRONG CHOICE !!\n";
            break;basic_streambuf ;
            
        }................................ 
    } while (choice >= 1 && choice < 3)
    {

        return 0;
    }
}