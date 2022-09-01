#include <iostream>
using namespace std;

int mycalplus (int addend1, int addend2)  {
	return addend1 + addend2;
}
int mycalmul (int addend1, int addend2)  {
	return addend1 * addend2;
}
int mycaldiff (int addend1, int addend2)  {
    if(addend1>addend2){
	return addend1 - addend2;
} else{
    return addend2 - addend1;
}
}

int main ()  {
	int number1, number2, sum, product, diff;
	
	cout << "Enter two integers:\n";
	cin >> number1 >> number2;
	sum = mycalplus(number1, number2);
	cout << "\nThe sum is " << sum << ".";
    product = mycalmul(number1, number2);
	cout << "\nThe product is " << product << ".";
    diff = mycaldiff(number1, number2);
	cout << "\nThe diff is " << diff << ".";
}








