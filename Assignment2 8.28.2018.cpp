// Jingyu Wang
// 8/26/2018
// Assignment #2

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int enternumber;
	
	const int number_width=20;
	string displaystring;
	long double thenumber;
	
	char exitsymbol;
	do
	{

		 do
		 {
			cout << "Enter the number you want 1 to 8? ";
			cin >> enternumber;
		 } while (enternumber > 8 || enternumber < 1);



		for (int j = 1; j <= enternumber; j++)
		{
			displaystring="";
			thenumber=0;

				 
			for (int i = 1; i <=j; i++)
			{
				displaystring = displaystring + '1';
			}


			thenumber = stod(displaystring);
			thenumber = thenumber*thenumber;

			if (j == 1)
			{
				cout << setw(number_width) << right;
				cout << ' ';
				cout << j;
				cout << setw(number_width) << left;
				cout << ' ';
			}
			else 
			{
				
				cout << setw(number_width) << right;
				cout << displaystring;
				cout << '*';
				cout << setw(number_width) << left;
				cout << displaystring;
			}

			



			cout << '=';

			for (int k=1; k<=8 - j; k++)
			{ 
				cout << " ";
			}
				cout << setw(4*number_width) ;
				cout << setprecision(0) << fixed << thenumber;
				
			


			cout << endl;
		}

		 

		 cout << endl << endl;
		 cout << "Will you exit?(Y/N)";
		 cin >> exitsymbol;

	} while (exitsymbol != 'Y' && exitsymbol != 'y');


	return 0;

}
