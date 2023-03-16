#include <iostream>

using namespace std;

const int class_size = 5;

struct StudentRecord
{
    int StudentID;
    double quiz1, quiz2, midterm, final, average;
    char grade;
};

void input(StudentRecord &student);
void computeGrade(StudentRecord &student);
void output(const StudentRecord student);

int main()
{
    /*
    Data for the test run:
    1 7 10 90 95
    2 9 8 90 80
    3 7 8 70 80
    4 5 8 50 70
    5 4 0 40 35
    */

    StudentRecord student[class_size];
    for (int i = 0; i < class_size; i++)
        input(student[i]);
    // Enclosing block fixes VC++ "for" loop control defined outside loop
    {
        for (int i = 0; i < class_size; i++)
        {
            computeGrade(student[i]);
            output(student[i]);
            cout << endl;
        }
    }
    return 0;
}

void input(StudentRecord &student)
{
    cout << "Enter the student's student ID number: ";
    cin >> student.StudentID;
    cout << "Enter the first quiz's score: ";
    cin >> student.quiz1;
    cout << "Enter the second quiz's score: ";
    cin >> student.quiz2;
    cout << "Enter the midterm score: ";
    cin >> student.midterm;
    cout << "Enter the final score: ";
    cin >> student.final;
    cout << endl;
}

void computeGrade(StudentRecord &student)
{

    student.average = (((student.quiz1 / 10) * 12.5) + ((student.quiz2 / 10) * 12.5) + ((student.midterm / 100) * 25) + ((student.final / 100) * 50));

    if (student.average >= 90)
    {
        student.grade = 'A';
    }
    else if (student.average >= 80)
    {
        student.grade = 'B';
    }
    else if (student.average >= 70)
    {
        student.grade = 'C';
    }
    else if (student.average >= 60)
    {
        student.grade = 'D';
    }
    else
    {
        student.grade = 'F';
    }
}

void output(const StudentRecord student)
{
    cout << "StudentID: " << student.StudentID << endl;
    cout << "Quiz 1 Score: " << student.quiz1 << endl;
    cout << "Quiz 2 Score: " << student.quiz2 << endl;
    cout << "Midterm Score: " << student.midterm << endl;
    cout << "Final Score: " << student.final << endl;
    cout << "The Student's Numeric Average is: " << student.average << endl;
    cout << "The Student's Letter Grade is: " << student.grade << endl;
}