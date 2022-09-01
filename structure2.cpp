#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int roll;
    int marks[5];
    int sum = 0;
    float percentage;
};

int main()
{
    int n, j, marks;
    cout << "enter limit" << endl;
    cin >> n;
    Person p1[50];
    int i;
    for (j = 0; j < n; j++)
    {
        cout << "Enter Full name: ";
        cin >> p1[j].name;
        cout << "Enter roll ";
        cin >> p1[j].roll;
        for (i = 0; i < 5; i++)
        {
            cout << "Enter marks: ";
            cin >> p1[j].marks[i];
            p1[j].sum = p1[j].sum + p1[j].marks[i];
            p1[j].percentage = p1[j].sum * 0.4;
        }
    }

    cout << "\nDisplaying Information." << endl;
    for (j = 0; j < n; j++)
    {
        cout << "Name: " << p1[j].name << "\n";
        cout << "roll: " << p1[j].roll << '\n';

        for (i = 0; i < 5; i++)
        {
            cout << "marks: " << p1[j].marks[i] << endl;
            cout << "\n\n";
        }

        cout << "sum" << p1[j].sum << endl;
        cout << "percentage" << p1[j].percentage << endl;
    }
    int in;
    cout << "enter roll number to search" << endl;
    cin >> in;
    for (j = 0; j < n; j++)
    {
        if (p1[j].roll == in)

            cout << "Name: " << p1[j].name << "\n";
        cout << "roll: " << p1[j].roll << '\n';

        for (i = 0; i < 5; i++)
        {
            cout << "marks: " << p1[j].marks[i] << endl;
            cout << "\n\n";
        }

        cout << "sum" << p1[j].sum << endl;
        cout << "percentage" << p1[j].percentage << endl;
    }

    return 0;
}