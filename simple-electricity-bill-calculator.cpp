#include <iostream>
using namespace std;
void main()
{
	int pwt_w, daily_time, unit_price, daily_cst, weekly_cst, monthly_cst, yearly_cst;
	float pwr_kwh;
	cout << "\nSimple C++ Project to Calculate Eletricity Bill by Mobeen Asghar. (PKR_Version)" << endl;
	cout << "\nPower consumption (watt): ";
	cin >> pwt_w;
	cout << "\nDaily Consumption time (hours): ";
	cin >> daily_time;
	cout << "\nCost per KWh (PKR): ";
	cin >> unit_price;
	pwr_kwh = pwt_w / 1000.00;
	daily_cst = pwr_kwh * daily_time * unit_price;
	weekly_cst = daily_cst * 7;
	monthly_cst = daily_cst * 30;
	yearly_cst = daily_cst * 365;
	cout << "\nPower cost/Day: " << daily_cst << " Rupees\n";
	cout << "\nPower cost/Week: " << weekly_cst << " Rupees\n";
	cout << "\nPower cost/Month: " << monthly_cst << " Rupees\n";
	cout << "\nPower cost/Year: " << yearly_cst << " Rupees\n" << endl;
	system("pause");
}
