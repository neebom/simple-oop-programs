/*
In this assinment SWITCH is used with five cases details are given below:
1: I use only if
2: Use of if-else
3: Again use of SWITCH with three cases 1,2,3 (with help of if-else-if)
4: Use of  Nested if
5: Use of if-else-if
*/

#include<iostream>
using namespace std;
void main()
{
	int x;
	cout << "TELENOR MICROFINANCE BANK LTD. (SCHEDULE OF CHARGES)" << endl;
	
	cout << "\nMobile Account (MA) Products:" << endl;

	cout << "\n	1: New Mobile Account Opening" << endl;
	cout << "	2: Money Transfer from EMA to EMA OR CNIC to EMA" << endl;
	cout << "	3: Money Transfer Service Fee (Incl. Tax)" << endl;
	cout << "	4: Utility Bill Payment (MA)" << endl;
	
	cout << "\nOver the Counter (OTC) Products:" << endl;
	cout << "\n	5: Money Transfer (CNIC to CNIC)" << endl;

	cout << "\nPlease, Select what you want(Press 1-5): ";
	cin >> x;
	switch (x)
	{
		case 1:
			int new_acc;
			cout << "\nFor opening a new account (type any number): ";
			cin >> new_acc;
			if (new_acc > 0)
				cout << "\nPKR 0.00 (New mobile account opening is free for customers)" << endl;
			break;
		case 2:
			int ema_cnic;
			cout << "\n1:  Money Transfer from Easypaisa Mobile Account to other Easypaisa Mobile Account" << endl;
			cout << "x:  Money Transfer from CNIC to Easypaisa Mobile Account " << endl;
			cout << "\nPlease, Select what you want(Press 1-x): ";
			cin >> ema_cnic;
			if (ema_cnic == 1)
				cout << "\nTen transactions per month are free & subsequent are charged at 1.74% (incl. of tax) of transaction amount" << endl;
			else
				cout << "\nPKR 0.00 (This transaction is free for customers)" << endl;
			break;
		case 3:
			int ema_tmba;
			cout << "\n1: Money Transfer from Easypaisa Mobile Account to a CNIC" << endl;
			cout << "2: Transfer-out from Easypaisa Mobile Account to Telenor Microfinance Bank Account" << endl;
			cout << "3: Request a Payment through Easypaisa Mobile Account" << endl;
			cout << "\nPlease, Select what you want(Press 1-3): ";
			cin >> ema_tmba;
			switch (ema_tmba)
			{
				case 1:
					int ta_cnic_ema;
					cout << "\nPlease, Enter the Transaction Amount: ";
					cin >> ta_cnic_ema;
					if (ta_cnic_ema >= 1 && ta_cnic_ema <= 1000)
						cout << "\nTransaction fee will be PKR 46.4 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 1001 && ta_cnic_ema <= 2500)
						cout << "\nTransaction fee will be PKR 92.8 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 2501 && ta_cnic_ema <= 4000)
						cout << "\nTransaction fee will be PKR 139.2 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 4001 && ta_cnic_ema <= 6000)
						cout << "\nTransaction fee will be PKR 185.6 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 6001 && ta_cnic_ema <= 8000)
						cout << "\nTransaction fee will be PKR 232.0 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 8000 && ta_cnic_ema <= 10001)
						cout << "\nTransaction fee will be PKR 278.4 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 10001 && ta_cnic_ema <= 13000)
						cout << "\nTransaction fee will be PKR 324.8 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 13001 && ta_cnic_ema <= 16000)
						cout << "\nTransaction fee will be PKR 371.2 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 16001 && ta_cnic_ema <= 20000)
						cout << "\nTransaction fee will be PKR 440.8 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 20001 && ta_cnic_ema <= 25000)
						cout << "\nTransaction fee will be PKR 510.4 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 25001 && ta_cnic_ema <= 30000)
						cout << "\nTransaction fee will be PKR 580.0 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 30001 && ta_cnic_ema <= 40000)
						cout << "\nTransaction fee will be PKR 649.6 (Incl. Tax)." << endl;
					else if (ta_cnic_ema >= 40001 && ta_cnic_ema <= 50000)
						cout << "\nTransaction fee will be PKR 719.2 (Incl. Tax)." << endl;
					else
						cout << "\nSomething Went Wrong!" << endl;
					break;
				case 2:
					int ta_ema_tmba;
					cout << "\nPlease, Enter the Transaction Amount: ";
					cin >> ta_ema_tmba;
					if (ta_ema_tmba >= 1 && ta_ema_tmba <= 1000)
						cout << "\nTransaction fee will be PKR 23.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 1001 && ta_ema_tmba <= 2500)
						cout << "\nTransaction fee will be PKR 46.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 2501 && ta_ema_tmba <= 4000)
						cout << "\nTransaction fee will be PKR 70.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 4001 && ta_ema_tmba <= 6000)
						cout << "\nTransaction fee will be PKR 93.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 6001 && ta_ema_tmba <= 8000)
						cout << "\nTransaction fee will be PKR 116.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 8000 && ta_ema_tmba <= 10001)
						cout << "\nTransaction fee will be PKR 139.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 10001 && ta_ema_tmba <= 13000)
						cout << "\nTransaction fee will be PKR 162.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 13001 && ta_ema_tmba <= 16000)
						cout << "\nTransaction fee will be PKR 186.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 16001 && ta_ema_tmba <= 20000)
						cout << "\nTransaction fee will be PKR 209.0 (Incl. Tax)." << endl;
					else if (ta_ema_tmba >= 20001 && ta_ema_tmba <= 25000)
						cout << "\nTransaction fee will be PKR 232.0 (Incl. Tax)." << endl;
					else
						cout << "\nSomething Went Wrong!" << endl;
					break;
				case 3:
					int rp_ema;
					cout << "\nPlease, Enter the Transaction Amount: ";
					cin >> rp_ema;
					if (rp_ema >= 1 && rp_ema <= 200)
						cout << "\nTransaction fee will be PKR 5.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 201 && rp_ema <= 500)
						cout << "\nTransaction fee will be PKR 10.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 501 && rp_ema <= 1000)
						cout << "\nTransaction fee will be PKR 20.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 1001 && rp_ema <= 2500)
						cout << "\nTransaction fee will be PKR 40.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 2501 && rp_ema <= 4000)
						cout << "\nTransaction fee will be PKR 60.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 4001 && rp_ema <= 6000)
						cout << "\nTransaction fee will be PKR 80.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 6001 && rp_ema <= 8000)
						cout << "\nTransaction fee will be PKR 100.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 8000 && rp_ema <= 10001)
						cout << "\nTransaction fee will be PKR 120.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 10001 && rp_ema <= 13000)
						cout << "\nTransaction fee will be PKR 140.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 13001 && rp_ema <= 16000)
						cout << "\nTransaction fee will be PKR 160.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 16001 && rp_ema <= 20000)
						cout << "\nTransaction fee will be PKR 180.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 20001 && rp_ema <= 25000)
						cout << "\nTransaction fee will be PKR 200.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 25001 && rp_ema <= 30000)
						cout << "\nTransaction fee will be PKR 220.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 30001 && rp_ema <= 40000)
						cout << "\nTransaction fee will be PKR 240.0 (Incl. Tax)." << endl;
					else if (rp_ema >= 40001 && rp_ema <= 50000)
						cout << "\nTransaction fee will be PKR 260.0 (Incl. Tax)." << endl;
					else
						cout << "\nSomething Went Wrong!" << endl;
					break;
				default:
					cout << "\nSomething Went Wrong!" << endl;
					break;

			}
			break;
			case 4:
				int ub_ma;
				cout << "\nCount of Bills: ";
				cin >> ub_ma;
				if (ub_ma > 0) {
					cout << "\nPKR 0.00 (This product is free for customers)*" << endl;
					if (ub_ma >= 6 && ub_ma <= 10) {
						cout << "\n* Customer acting as agent or deemed/designated agents will be levied charges in line with Penalty Matrix Rate and Fee levied to agents as follows" << endl;
						cout << "PKR 5 per Bill will be charged." << endl;
					}
					if (ub_ma > 10) {
						cout << "\n* Customer acting as agent or deemed/designated agents will be levied charges in line with Penalty Matrix Rate and Fee levied to agents as follows" << endl;
						cout << "PKR 10 per Bill will be charged." << endl;
					}
				}
				else
						cout << "\nSomething Went Wrong!" << endl;
				break;
		case 5:
			int otc_cnic;
			cout << "\nPlease, Enter the Transaction Amount: ";
			cin >> otc_cnic;
			if (otc_cnic >= 1 && otc_cnic <= 1000)
				cout << "\nTransaction fee will be PKR 60.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 1001 && otc_cnic <= 2500)
				cout << "\nTransaction fee will be PKR 120.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 2501 && otc_cnic <= 4000)
				cout << "\nTransaction fee will be PKR 180.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 4001 && otc_cnic <= 6000)
				cout << "\nTransaction fee will be PKR 240.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 6001 && otc_cnic <= 8000)
				cout << "\nTransaction fee will be PKR 300.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 8000 && otc_cnic <= 10001)
				cout << "\nTransaction fee will be PKR 350.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 10001 && otc_cnic <= 13000)
				cout << "\nTransaction fee will be PKR 400.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 13001 && otc_cnic <= 16000)
				cout << "\nTransaction fee will be PKR 450.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 16001 && otc_cnic <= 20000)
				cout << "\nTransaction fee will be PKR 600.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 20001 && otc_cnic <= 25000)
				cout << "\nTransaction fee will be PKR 750.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 25001 && otc_cnic <= 30000)
				cout << "\nTransaction fee will be PKR 900.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 30001 && otc_cnic <= 40000)
				cout << "\nTransaction fee will be PKR 1100.0 (Incl. Tax)." << endl;
			else if (otc_cnic >= 40001 && otc_cnic <= 50000)
				cout << "\nTransaction fee will be PKR 1300.0 (Incl. Tax)." << endl;
			else
				cout << "\nSomething Went Wrong!" << endl;
			break;
		default:
			cout << "\nSomething Went Wrong!" << endl;
			break;

	}
	system("pause");
}
