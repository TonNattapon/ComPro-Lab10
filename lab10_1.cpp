#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double amountCanPay,balance,interest;
	int year;
	cout << "Enter initial loan: ";
	cin >> balance;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> amountCanPay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	year = 1;
	while (balance != 0)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << balance;
		cout << setw(13) << left << balance * (interest*0.01);
		cout << setw(13) << left << balance + (balance * (interest*0.01));
		if (balance +  (balance * (interest*0.01)) < amountCanPay)
		{
			amountCanPay = balance +  (balance * (interest*0.01));
		}
		cout << setw(13) << left << amountCanPay;
		cout << setw(13) << left << (balance +  (balance * (interest*0.01))) - amountCanPay;
		cout << "\n";
		year++;	
		balance = (balance +  (balance * (interest*0.01))) - amountCanPay; 
	}
	return 0;
}
