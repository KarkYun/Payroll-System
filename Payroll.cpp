// Net Salary of Employee
#include<iostream>
using namespace std;

	double calculateNetSalary(int nday, double dailyrate) {
    double bsal, gsal, netsal;
    double fuelallow, rentallow;
    double tax, socsec;

    bsal = nday * dailyrate;

    // Allowances
    fuelallow = bsal * 0.15;
    rentallow = bsal * 0.20;

    // Deductions
    tax = bsal * 0.12;
    socsec = bsal * 0.14;

    gsal = bsal + fuelallow + rentallow;
    netsal = gsal - tax - socsec;

    return netsal;
}

int main() {
    string sid, sname;
    int nday;
    double dailyrate;
    char choice;

    while (true) {
      	cout <<"PAYROLL FOR KTU EMPLOYEES" <<endl;
	    cout<<"Enter staff name: ";
	    cin >> sname;
		cout << "Enter staff id: ";
        cin >> sid;
        cout << "Enter rate per day: ";
        cin >> dailyrate;
        cout << "Enter number of days worked: ";
        cin >> nday;

        double netsal = calculateNetSalary(nday, dailyrate);

        cout << "Basic Salary: Ghc" << nday * dailyrate << endl;
        cout << "Gross Salary: Ghc" << (nday * dailyrate) + (nday * dailyrate * 0.15) + (nday * dailyrate * 0.20) << endl;
        cout << "Net Salary for: Ghc" << sid << ": " << netsal << endl;

        cout << "Do you want to enter details for another employee? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}



