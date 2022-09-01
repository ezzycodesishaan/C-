#include <iostream>
using namespace std;

struct product
{
    char name[50];
    int id;
    float qnt;
    int price;
};

int main()
{
    int n, j;
    cout << "enter no. of product" << endl;
    cin >> n;
    product p1[50];
    int i;
    for (j = 0; j < n; j++)
    {
        cout << "Enter product name: ";
        cin >> p1[j].name;
        cout << "Enter id ";
        cin >> p1[j].id;

        cout << "Enter qnt: ";
        cin >> p1[j].qnt;
        cout << "Enter price: ";
        cin >> p1[j].price;
    }

    cout << "\nDisplaying Information." << endl;
    for (j = 0; j < n; j++)
    {
        cout << "Name: " << p1[j].name << "\n";
        cout << "id: " << p1[j].id << '\n';

        cout << "qnt: " << p1[j].qnt << "\n";
        cout << "price: " << p1[j].price << "\n";
    }

    return 0;
}