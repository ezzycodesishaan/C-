#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int roll;
    float marks[5];
};

int main()
{
    Person p1;
    int i,j;
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter roll ";
    cin >> p1.roll;
    for(i=0;i<5;i++){
    cout << "Enter marks: ";
    cin >> p1.marks[i];
    }
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"roll: " << p1.roll << endl;
    for(i=0;i<5;i++){
    cout << "marks: " << p1.marks[i];
    }
  
    return 0;
}