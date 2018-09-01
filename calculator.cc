/// Jingyu Wang
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num1;
	int num2;
	int result;
	int choice;
	char exitsymbol;
	do
	{
		cout << "Enter your choice. Pick (1-7) " << endl;
		cout << " 1. Addition " << endl;
		cout << " 2. Subtraction " << endl;
		cout << " 3. square " << endl;
		cout << " 4. square root " << endl;
		cout << " 5. cube  " << endl;
		cout << " 6. cube root " << endl;
		cout << " 7. power " << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			// do addition

			cout << "Enter first number " << endl;
			cin >> num1;

			cout << "Enter second number " << endl;
			cin >> num2;

			result = num1 + num2;
			cout << "Result is " << result;

			break;

		case 2:


			//do subtraction
			cout << "Enter first number " << endl;
			cin >> num1;

			cout << "Enter second number " << endl;
			cin >> num2;

			result = num1 - num2;
			cout << "Result is " << result;
			break;
		case 3:

			//do square
			cout << "Enter the number " << endl;
			cin >> num1;
			result = pow(num1, 2);
			cout << "Result is " << result;
			break;
		case 4:

			//do square root
			cout << "Enter the number " << endl;
			cin >> num1;
			result = sqrt(num1);
			cout << "Result is " << result;

			break;
		case 5:

			//do cube
			cout << "Enter the number " << endl;
			cin >> num1;
			result = pow(num1, 3);
			cout << "Result is " << result;

			break;
		case 6:

			//do cube root
			cout << "Enter the number " << endl;
			cin >> num1;
			result = cbrt(num1);
			cout << "Result is " << result;

			break;
		case 7:

			// do power
			cout << "Enter the number " << endl;
			cin >> num1;

			cout << "Enter the power number " << endl;
			cin >> num2;

			result = pow(num1, num2);
			cout << "Result is " << result;

			break;

		default:
			cout << "Enter a valid input " << endl;
		}


		cout << endl << endl;
		cout << "Will you exit?(Y/N)" << endl;
		cin >> exitsymbol;

	} while (exitsymbol != 'Y' && exitsymbol != 'y');


	return 0;

}