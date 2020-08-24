// cafeteria.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; // needed for opps

int main()
{
	int coffee;
	int sweet;
	int coffeecount;
	int sweetcount;
	double frappe = 10.5;	
	double countfrappe = 0;
	double espresso = 11;
	double countespresso = 0;
	double cappucino = 14.5;
	double countcappucino = 0;
	double brownie = 10.5;
	double countbrownie = 0;
	double cookie = 8.5;
	double countcookie = 0;
	double creme = 13.5;
	double countcreme = 0;
	double pay;
	double total=0;

	// coffee menu
	cout << "CHOOSE\nCOFFEE";
	cout << " \n \t[1]frappe-10.5 \n \t[2]espresso-11 \n \t[3]cappucino-14.5";

	cout << "\nWhich coffe you want?";
	cin >> coffee;
	cout << "\nAmmount of coffees?";
	cin >> coffeecount;

	// sweets menu
	cout << "CHOOSE\nSWEET";
	cout << " \n \t[1]brownie-10.5 \n \t[2]cookie-8.5 \n \t[3]creme-13.5";

	cout << "\nWhich sweet you want?";
	cin >> sweet;
	cout << "\nAmmount of sweets?";
	cin >> sweetcount;





	cout << "YOUR ORDER";
	// switch cases to choose coffee and the amount and the money 
	switch (coffee)
	{ 
	case 1:
		cout << "frappe 10.5 x" << coffeecount << "=" << coffeecount * frappe << "\n";
		countfrappe = coffeecount * frappe;
		break;
	case 2:
		cout << "espresso 11 x" << coffeecount << "=" << coffeecount * espresso << "\n";
		countespresso = coffeecount * espresso;
		break;
	case 3:
		cout << "cappucino 14.5 x" << coffeecount << "=" << coffeecount * cappucino << "\n";
		countcappucino = coffeecount * cappucino;
		break;
	
	}
	// switch cases to choose sweet and the amount and the money 
	switch (sweet)
	{
	case 1:
		cout << "brownie 10.5 x" << sweetcount << "=" << sweetcount * brownie << "\n";
		countbrownie = sweetcount * brownie;
		break;
	case 2:
		cout << "cookie 8.5 x" << sweetcount << "=" << sweetcount * cookie << "\n";
		countcookie = sweetcount * cookie;
		break;
	case 3:
		cout << "creme 13.5 x" << sweetcount << "=" << sweetcount * creme << "\n";
		countcreme = sweetcount * creme;
		break;

	}

	total = 0;
	total = total + countcreme + countcookie + countbrownie + countcappucino + countespresso + countfrappe;
	cout << "Your receipt is : " << total << "\n";
	cout << "Please insert your payment :" << "\t";
	cin >> pay;
	cout << "Your change is :" << pay - total;




	}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
