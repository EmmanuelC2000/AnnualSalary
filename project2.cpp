/* Workers at a particular company have won a 7.6% pay increase retroactive for 6 months. Write a program that takes an
 * employee’s previous annual salary as input, and outputs the amount of retroactive pay due the employee, the new
 * annual salary, and the new monthly salary. Use a variable declaration with the modifier const to express the pay
 * increase. Your program should allow the calculation to be repeated as often as the user wishes.
 */

#include <iostream>
using namespace std;

void programIntroduction();
double additionalPay(double originalSalary, double percentageIncrease, int numberOfMonths);
double updatedSalary(double originalSalary, double percentageIncrease, int numberOfMonths);
double newMonthlySalary(double originalSalary, double percentageIncrease, int NumberOfMonths);

int main(){

const double PAY_INCREASE_PERCENTAGE = 0.076;
int const NUMBER_OF_MONTHS = 6;
double originalEmployeeSalary = 0;
char userAnswer;

do{

    programIntroduction();

    cout << "Please enter the employees original annual salary: ";
    cin >> originalEmployeeSalary;
    cout << "Additional amount due: " << additionalPay(originalEmployeeSalary, PAY_INCREASE_PERCENTAGE,NUMBER_OF_MONTHS)
    << endl;
    cout << "Updated Salary: " << updatedSalary(originalEmployeeSalary, PAY_INCREASE_PERCENTAGE, NUMBER_OF_MONTHS)
    << endl;
    cout << "Updated Monthly Salary: " << newMonthlySalary(originalEmployeeSalary, PAY_INCREASE_PERCENTAGE,
                                                           NUMBER_OF_MONTHS);
    cout << endl;

    cout << "Would you like to run this program again? : ";
    cin >> userAnswer;

}while(userAnswer == 'y');


    return 0;
}

void programIntroduction(){
    cout << "======================" << endl;
    cout << "Employees New Pay" << endl;
    cout << "=======================" << endl;
}

double additionalPay(double originalSalary, double percentageIncrease, int numberOfMonths){
    double additionalPay = (originalSalary * percentageIncrease) * numberOfMonths;
    return additionalPay;
}

double updatedSalary(double originalSalary, double percentageIncrease, int numberOfMonths){
    double additionalPay = (originalSalary * percentageIncrease) * numberOfMonths;
    return (additionalPay + originalSalary);
}

double newMonthlySalary(double originalSalary, double percentageIncrease, int NumberOfMonths){
    return updatedSalary(originalSalary, percentageIncrease, NumberOfMonths) / 12;

}



