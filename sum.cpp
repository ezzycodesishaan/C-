#include <iostream>
using namespace std;

#define MAX 10

class student
{
    private : char name[30];
    int rollNo;
    
    float perc;
    int marks[100];
    int i;
    float sum;
    public :
        void
        getDetails(void);
    
    void putDetails(void);
};


void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    for (i = 0; i < 10; i++)
        {
            cout << "Enter marks: ";
            cin >> marks[i];
            sum = sum + marks[i];
            perc = sum / 500 * 100;
        }

    
}


void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",Roll Number:" << rollNo ;
    for (i = 0; i < 10; i++)
        {
            cout << "marks: " << marks[i] << endl;
            cout << "\n\n";
        }

        cout << "sum" << sum << endl;
        cout << "percentage" << perc << endl;

}

int main()
{
    student std[MAX]; 
    int n, loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for (loop = 0; loop < n; loop++)
    {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;

    for (loop = 0; loop < n; loop++)
    {
        cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].putDetails();
    }

    return 0;
}