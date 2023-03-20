/*
Variables

A variables in computer language parlance is a memory chunk that needs to have a name and a type. It is called a variable because its contents may change during the
execution of the program. Its purpose is to store and retrieve data. It must have a type because we use different data types for different purposes.Before we use  a variable
we must define it. We must tell the compiler that we want to use a  moemory location with the given name and the given type. The name is used to refere to the variable;
the type is used to tell what type of data is stored in the variable.

Values

The contents of a variable are referred to as its value.
*/



/*
This program gets the values of two number from the keyboard, adds them together and prints the result on the monitor

*/

#include <iostream>
using namespace std;

int main()
{
    //Definition: Reservation of variable  with corresponding name and no values are stored at this moment
    int num1;
    int num2;
    int sum;
    // Getting inputs
    cout<<"Enter the first number :";
    cin>>num1;// for console in and a command (>>) which means read. This command waits for the user  of the program to enter a  values on the keyboard
             // and hit enter the value then stores the value in variable num1
    cout<<"Enter the second number:";
    cin>> num2;

    // Calculating and storing results
    sum=num1+num2;// here we used the operators assignemt (=) and addition (+) where the assign operator means store. It stores the value on the right hand side and the
                 // on the left-hand side


    // display output
    cout<<" The sum is :" << sum;


    int x;
    int y;
    
    x=y;
    cout<<x << endl;
    cout<<y<<endl;

    x=5;
    cout<<x<<endl;
    cout<<y<<endl;

    x=y+6;
    cout<<x<<endl;
    cout<<y<<endl;

    x=x+3;
    cout<<x<<endl;
    cout<<y<<endl;

    x=x+y;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}

/*
The cin and cout objects

*/