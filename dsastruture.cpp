#include <iostream>
using namespace std;

struct Product
{
    char name[50];
    int id;
    float price;
    int qnt[5];
};

int main()
{
    Product p1;
    int i;
    cout << "Enter  name of product: ";
    cin.get(p1.name, 50);
    cout << "Enter id ";
    cin >> p1.id;
    for(i=0;i<5;i++){
    cout << "Enter qnt: ";
    cin >> p1.qnt[i];
    }
    cout <<"price";
    cin>>p1.price; 
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"id: " << p1.id << endl;
    for(i=0;i<5;i++){
    cout << "qnt: " << p1.qnt[i];
    }
    cout <<"price"<< p1.price << endl;;
  
    return 0;
}