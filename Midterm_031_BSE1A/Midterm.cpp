#include<iostream>
using namespace std;
int main()
{
	int current_stock;
	const int threshold = 5;
	char choice;
	int restock;
	int quantity;

	cout << "\nEnter the current available quantity of stock:";
	cin >> current_stock;
	

	if (current_stock < 0)
		cout << "Invalid stock..";
	else
	{
		while (true )
		{
			cout << "\ncurrent stock is :" << current_stock ;

			cout << "\n\nMENU\n 1)Enter S to sell item\n 2)Enter R to see restock\n 3)Enter E to exit program \n";
			cin >> choice;

			

			if (choice == 'E' || choice == 'e')
			{
				cout << "\nYou exitted the program";
				break;
			}
			else if (choice == 'R' || choice == 'r')
			{
				cout << "\nEnter the quantity to restock\t";
				cin >> restock;
				current_stock += restock;
				cout << "\nThe stock is   " << current_stock;
			}

			else if (choice == 'S' || choice == 's' && current_stock > 4)
			{
				cout << "\nEnter the quantity to be sold"<<endl;
				cin >> quantity;
				if (quantity < current_stock)
				{
					quantity = min(quantity, current_stock);
					current_stock -= quantity;
					cout << quantity << "items sold!!" << "\nRemaining Items are    " << current_stock << endl;
				}
				else
					cout<<"\nCannot sell more than current stock";

			}
			else
				
					cout << "\nStock is lower than threshold cannot proceed...Restock please";
		}

	}


	system("pause");
	return 0;
}