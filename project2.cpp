/* Workers at a particular company have won a 7.6% pay increase retroactive for 6 months. Write a program that takes an
 * employee’s previous annual salary as input, and outputs the amount of retroactive pay due the employee, the new
 * annual salary, and the new monthly salary. Use a variable declaration with the modifier const to express the pay
 * increase. Your program should allow the calculation to be repeated as often as the user wishes.
 */

#include <iostream>
using namespace std;

void programIntroduction();
double additionalPay(double originalSalary, double percentageIncrease);
double updatedSalary(double originalSalary, double percentageIncrease);
double newMonthlySalary(double originalSalary, double percentageIncrease);

int main(){

double percentageIncrease = 0;
double originalEmployeeSalary = 0;
char userAnswer;
string employeeName = "";

do{

    programIntroduction();

    cout << "Please enter the employee's name: ";
    getline(cin, employeeName);
    cout << "Please enter the pay increase (as a percentage): ";
    cin >> percentageIncrease;
    percentageIncrease /= 100;
    cout << "Please enter " << employeeName << " annual salary: ";
    cin >> originalEmployeeSalary;
    cout << "Additional amount due: " << additionalPay(originalEmployeeSalary, percentageIncrease)
    << endl;
    cout <<  employeeName << "\' " << "Updated Salary: " << updatedSalary(originalEmployeeSalary, percentageIncrease)
    << endl;
    cout << employeeName << "\' " << "Updated Monthly Salary: "
    << newMonthlySalary(originalEmployeeSalary, percentageIncrease);
    cout << endl;

    cout << "Would you like to run this program again? (y/n) : ";
    cin >> userAnswer;

}while(userAnswer == 'y');


    return 0;
}

void programIntroduction(){
    cout << "======================" << endl;
    cout << "Employees New Pay" << endl;
    cout << "=======================" << endl;
}

double additionalPay(double originalSalary, double percentageIncrease){
    double additionalPay = (originalSalary * percentageIncrease);
    return additionalPay;
}

double updatedSalary(double originalSalary, double percentageIncrease){
    double additionalPay = (originalSalary * percentageIncrease);
    return (additionalPay + originalSalary);
}

double newMonthlySalary(double originalSalary, double percentageIncrease){
    return updatedSalary(originalSalary, percentageIncrease) / 12;

}



