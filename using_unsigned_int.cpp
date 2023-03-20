/*
Finding the total value of a set of coins

*/

#include <iostream>
using namespace std;

int main()
{
//Defining constants
const unsigned int pennyValue=1;
const unsigned int nickelValue=5;
const unsigned int dimeValue=10;
const unsigned int quarterValue=25;
const unsigned int dollarValue=100;

// Defining variables (number of each coin)
unsigned int pennies;
unsigned int nickles;
unsigned int dimes;
unsigned int quarters;
unsigned int dollars;

// Defining total value
unsigned long totalValue;

// Inputting number of different coins
cout <<" Enter the number of pennies:";
cin  >> pennies;
cout << "Enter the number of nickles: ";
cin  >>nickles;
cout <<"Enter the number of dimes:";
cin  >>dimes;
cout <<"Enter the number of qaurters:";
cin  >>quarters;
cout <<"Enter the number of dollar";
cin  >>dollars;


// Calculating total value
totalValue=(pennies*pennyValue)+(nickles*nickelValue) + (dimes*dimeValue) + (quarters * quarterValue) + (dollars*dollarValue);

//Outputting the results
cout <<" The total value is: " << totalValue<<"pennies";

return 0;


}