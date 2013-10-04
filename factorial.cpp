#include <iostream>

using namespace std;

int factorial(int n);

int factorial(int n)
{

	if(n == 0)
		return 1;
	else
		return n * factorial(n-1);

}

int main()
{

	int n;

	cout << "Enter the number you want to take the factorial of: ";
	cin >> n;

	cout << "The factorial of " << n << " is: " << factorial(n) << endl;

}
