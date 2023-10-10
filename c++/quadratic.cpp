#include <iostream>
#include <stdio.h>
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
        cout << "\n Enter roll no : ";
        cin >> rollno;
        cout << "\n Enter name  : ";
        cin >> name;
        cout << "\n Enter marks : ";
        cin >> marks;
    }
    void dispStudent()
    {
        calcGrade();
        cout << " roll no : " << rollno << endl;
        cout << " NAme : " << name << endl;
        cout << " marks: " << marks << endl;
        cout << " grade: " << grade << endl;
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
            grade = 'c';
        }
        else
        {
            grade = 'F';
        }
    }
};

int main()
{
    Student XIIIa[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "\n ENter details of students" << i + 1 << ": ";
        XIIIa[i].readStudent();
    }
    int choice, rno, pos = -1, highmarks = 0;
    do
    {
        system("cls");
        cout << "\n\n Main menu\n";
        cout << "1. Specific student \n";
        cout << "2> Topper\n";
        cout << "3. exit\n";
        cout << "ENter your choice( 1..3)";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n Enter roll no of student whose details you want to see: ";
            cin >> rno;
            for (int i = 0; i < 10; i++)
            {
                if (XIIIa[i].getRollno() == rno)
                {
                    XIIIa[i].dispStudent();
                    break;
                }
            }
            int i;
            if (i == 10)
            {
                cout << "\n Invalid roll no: ";
            }

            break;
        case 2:
            for (int i = 0; i < 10; i++)
            {
                if (XIIIa[i].getMarks() > highmarks)
                {
                    pos = i;
                    highmarks = XIIIa[i].getMarks();
                }
            }
            XIIIa[pos].dispStudent();
            break;

        case 3:
            break;

        default:
            cout << "\nWRONGCHOICE!!";
            break;
        }
    } while (choice >= 1 && choice < 3);
    return 0;
}