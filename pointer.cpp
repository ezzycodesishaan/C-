#include<iostream>
using namespace std;
//pointer is a data type
int main()
{
int a=3;
int* b=&a;

int** c;
c=&b;

cout<<b<<endl;
cout<<*b<<endl;
//pointer to pointer

cout<<&b<<endl; 
cout<<*c<<endl;
//value of address at c
cout<<**c;
//value of address of address at c
return 0;
}
