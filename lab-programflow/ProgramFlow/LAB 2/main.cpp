#include <iostream>
using namespace std;
#include "functions.h"
#include <stdio.h> //Used for question 4 "char".
#include <cstdlib> // Used for Question 13 for "rand".

   int main()
{
    LabInfo (); //Question 1
    LargestNumber (); //Question 2
    NumberCheck (); //Question 3


    /*Question 4, Create a menu in your main program for the user to select the question/answer. Use
    a switch statement*/
    int a;
    char b [20],d[30];//Extra characters needed for name and location.
    int c;
    cout<<"\nQuestion 4:\n";
    cout<<"Please select a questions number: \n\n";
    cout<< "Table of Questions:\n";
    cout<< "Q1 What is your name:\n";
    cout<< "Q2 How Old are you:\n";
    cout<< "Q3 Where are you from:\n";
    cin>> a;
    switch (a){
    case 1:
    cout<<"Name:";
    cin>>b ;
    cout<<"That is a nice name.\n";
    break;
    case 2:
    cout<<"Age:";
    cin>> c;
    cout<<"You are getting old...\n";
    break;
    case 3:
    cout<<"Location:";
    cin>> d;
    cout<<"Thats a beautiful part of the country.\n";
    break;
    default:
    cout << "Oh no your computer will explode in 20 seconds. bye bye\n";
}

    Circle (); //Question 5
    Rectangle (); //Question 6
    TempHumity (); //Question 7


    /* Question 8, the following program uses a loop to test for a range of values from 0
    to 120 meters, in 1 meter steps.*/
    cout<<"\n\nQuestion 8:";
    char u;
    cout <<"\nTest function for a range of values from 0 to 120 meters, in 1 meter steps Q5? Enter y: ";
    cin >> u;
    if (u=='y'){
    // Deceleration of variables.
    float PI = 3.14159;
    float radius;
    float Area;
    for (float radius = 0; radius <=120;++radius){
    Area = PI*radius*radius;
    cout <<Area<<"m^2\n";}}
    else{
    cout<<"Incorrect Input. Moving on to next Question.";
    }

    TempConversion(); //Question 9
    EvenNumbers(); //Question 10
    OddNumbers(); //Question 11
    Array(); //Question 12
    RandomNumbers(); //Question 13
    Solve(); //Question 14
    Finished(); //Question 15

    return 0;

}



