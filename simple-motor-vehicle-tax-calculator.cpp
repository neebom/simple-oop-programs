#include <iostream>
using namespace std;
void main()
{
	int case_no;
	cout << "Motor Vehicle Tax Calculator for (Punjab, PK) By Mobeen Asghar." << endl;

	cout << "\n1) If you want to check Token validation (Press 1)" << endl;
	cout << "2) If you want to check Concession on Income Tax (Press 2)" << endl;
	cout << "3) If you want to check Tax Rate on New Registration (Press 3)" << endl;
	cout << "4) If you want to check Rates of Transfer Fee (Press 4)" << endl;
	cout << "5) If you want to Calculate Token tax for Motor Car (Press 5)" << endl;

	cout << "\nPlease enter the case no between 1 and 5: ";
	cin >> case_no;

	switch (case_no)
	{
	//Use of simple -if-
	case 1:
		int dd, mm, yy;
		cout << "\n(Note: Wrong Date/Format cause a blank output)" << endl;
		cout << "Please Enter the date of token tax fee submission (dd mm yy): ";
		cin >> dd >> mm >> yy;
		if (dd >= 0 && mm >= 0 && yy >= 19 && dd <= 31 && mm <= 12 && yy < 20)
			cout << "\nToken tax is valid till 30 - Jun - 2020\n" << endl;
		break;
	//Use of -if-else-
	case 2:
		int filer;
		cout << "\nAre you a Tax Filer? Non-Filer (Press 0), Tax-Filer (Press 1 or greate than 1): ";
		cin >> filer;
		if (filer == 0)
			cout << "\nOpps! There's No Concession for Non-Filers." << endl;
		else
			cout << "\nCongrat's! You will get 50% Concession on Income Tax for Motor Car." << endl;

		break;
	//Use of Nested -if-
	case 3:
		int hp;
		cout << "\nEnter the Power fo Engine (cc): ";
		cin >> hp;
		if (hp > 0) {
			if (hp > 0 && hp <= 999) {
				cout << "\nTax Will be 1% of the value of the vehicle." << endl;
				if (hp >= 100 && hp <= 999)
					cout << "Combined Harvesters, Rigs, etc. PKR. 300/- each will be charged" << endl;
			}
			if (hp >= 1000 && hp <= 1500) {
				cout << "\nTax Will be 2% of the value of the vehicle." << endl;
				if (hp >= 1300 && hp < 1500)
					cout << "Imported Car? PKR. 15,000/- Will Charged" << endl;
			}
			if (hp >= 1501 && hp <= 1999) {
				cout << "\nTax Will be 3% of the value of the vehicle." << endl;
				if (hp >= 1500 && hp <= 1999)
					cout << "Imported Car? PKR. 25,000/- Will Charged" << endl;
			}
			if (hp >= 2000) {
				cout << "\nTax Will be 4% of the value of the vehicle." << endl;
				if (hp >= 2000 && hp <= 2499)
					cout << "Imported Car? PKR. 100,000/- Will Charged" << endl;
				if (hp >= 2500)
					cout << "Imported Car? PKR. 300,000/- Will Charged" << endl;
			}
		}
		else
			cout << "\nOpps! Invalid Choice :-(" << endl;
		break;
	//Use of if-else-if
	case 4:
		int fee;
		cout << "\nCategory: " << endl;
		cout << "\n1) Motorcycle / Scooter (Press 1)" << endl;
		cout << "2) Heavy Transport Vehicle [HTV] (Press 2) \nOthers:" << endl;
		cout << "3) Not exceeding 1000cc (Press 3)" << endl;
		cout << "4) Exceeding 1000cc but not more than 1800cc (Press 4)" << endl;
		cout << "5) Exceeding 1800cc (Press 5)" << endl;
		cin >> fee;
		if (fee == 1)
			cout << "\nTransfer fee is  PKR. 150/-" << endl;
		else if (fee == 2)
			cout << "\nTransfer fee is  PKR. 4000/-" << endl;
		else if (fee == 3)
			cout << "\nTransfer fee is  PKR. 1200/-" << endl;
		else if (fee == 4)
			cout << "\nTransfer fee is  PKR. 2000/-" << endl;
		else if (fee == 5)
			cout << "\nTransfer fee is  PKR. 3000/-" << endl;
		else
			cout << "\nOpps! Invalid Choice :-(" << endl;
		break;
	//Use of switch (with if-else-if)
	case 5:
		int token_tax;
		cout << "\nAre you a Tax Filer? Non-Filer (Press 0), Tax-Filer (Press 1): ";
		cin >> token_tax;
		switch (token_tax)
		{
		case 0:
			int epn;
			cout << "\nEnter the Power of Engine (cc): ";
			cin >> epn;
			if (epn > 0 && epn < 1000){
				cout << "\nMotor Car? Token Tax is PKR. 35200/- (one time)" << endl;
			if (epn > 0 && epn < 600)
				cout << "Motorcycle / Scooter? Token Tax is PKR. 1700/- (one time)" << endl;
			}
			else if (epn >= 1000 && epn <= 1199)
				cout << "\nToken Tax is PKR. 5000/- (yearly)" << endl;
			else if (epn >= 1200 && epn <= 1299)
				cout << "\nToken Tax is PKR. 5500/- (yearly)" << endl;
			else if (epn == 1300)
				cout << "\nToken Tax is PKR. 7000/- (yearly)" << endl;
			else if (epn >= 1301 && epn <= 1499)
				cout << "\nToken Tax is PKR. 11200/- (yearly)" << endl;
			else if (epn == 1500)
				cout << "\nToken Tax is PKR. 13700/- (yearly)" << endl;
			else if (epn >= 1501 && epn <= 1599)
				cout << "\nToken Tax is PKR. 16700/- (yearly)" << endl;
			else if (epn >= 1600 && epn <= 1999)
				cout << "\nToken Tax is PKR. 18200/- (yearly)" << endl;
			else if (epn == 2000)
				cout << "\nToken Tax is PKR. 29200/- (yearly)" << endl;
			else if (epn >= 2001 && epn <= 2500)
				cout << "\nToken Tax is PKR. 32200/- (yearly)" << endl;
			else if (epn > 2500)
				cout << "\nToken Tax is PKR. 35200/- (yearly)" << endl;
			else
				cout << "Opps! Invalid Choice :-(" << endl;
		break;
		case 1:
			int epf;
			cout << "\nEnter the Power of Engine (cc): ";
			cin >> epf;
			if (epf > 0 && epf < 1000) {
				cout << "\nMotor Car? Token Tax is PKR. 25200/- (one time)" << endl;
				if (epf > 0 && epf <600)
					cout << "Motorcycle / Scooter? Token Tax is PKR. 1700/- (one time)" << endl;
			}
			else if (epf >= 1000 && epf <= 1199)
				cout << "\nToken Tax is PKR. 3500/- (yearly)" << endl;
			else if (epf >= 1200 && epf <= 1299)
				cout << "\nToken Tax is PKR. 3750/- (yearly)" << endl;
			else if (epf == 1300)
				cout << "\nToken Tax is PKR. 4500/- (yearly)" << endl;
			else if (epf >= 1301 && epf <= 1499)
				cout << "\nToken Tax is PKR. 8700/- (yearly)" << endl;
			else if (epf == 1500)
				cout << "\nToken Tax is PKR. 9950/- (yearly)" << endl;
			else if (epf >= 1501 && epf <= 1599)
				cout << "\nToken Tax is PKR. 12950/- (yearly)" << endl;
			else if (epf >= 1600 && epf <= 1999)
				cout << "\nToken Tax is PKR. 13700/- (yearly)" << endl;
			else if (epf == 2000)
				cout << "\nToken Tax is PKR. 19200/- (yearly)" << endl;
			else if (epf >= 2001 && epf <= 2500)
				cout << "\nToken Tax is PKR. 22200/- (yearly)" << endl;
			else if (epf > 2500)
				cout << "\nToken Tax is PKR. 25200/- (yearly)" << endl;
			else
				cout << "Opps! Invalid Choice :-(" << endl;
		break;
		default:
			cout << "Opps! Invalid Choice :-(" << endl;
			break;
		}
		break;
	default:
		cout << "Opps! Invalid Choice :-(" << endl;
		break;
	}
	system("pause");
}
