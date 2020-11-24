#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#endif // FUNCTIONS_H_INCLUDED



    //Question 1,Create a function called LabInfo() and call it from main.
void LabInfo () {
    cout<<"Question 1:\n";
    cout<<"Fergus O Boyle\n";
    cout<<"LAB #2\n"<<endl;
}


    /*Question 2, Create a function in a file that can take two number like the following and return the
    largest*/
void LargestNumber () {
    cout<<"\nQuestion 2:\n";
    float x;
    float y;
    cout<<"Enter First Integer: ";
    cin>>x;
    cout<<"Enter Second Integer: ";
    cin>>y;
    if(x>y){
    cout<<"\nThe Largest value is: "<<x;}
    else{
    cout<<"\nThe Largest value is: "<<y;
}

}


    //Question 3, Create a function that can check the user has input a number between 1 and 100
void NumberCheck (){
    cout<<"\n\nQuestion 3:";
    float N1;
    cout<<"\nPlease enter a number of your choice:";
    cin>>N1;
    if (N1>=1&&N1<=100)
    cout<<"\nYes the number entered is between 1 and 100\n\n";
    else{cout<<"\nNo the number entered is not between 1 and 100\n\n";
}
 }



    /*Question 5, the following program takes in the radius value and calculates the area of a circle*/
 void Circle(){
    cout<<"\nQuestion 5:";
    cout <<"\nArea of a circle with radius: ";
    // Deceleration of variables.
    float PI = 3.14159;
    float radius;
    float Area;
    cin >> radius;
    Area = PI*radius*radius;
    cout <<Area<<"mm^2";
 }

    /*Question 6, Make a function that can take in two values and calculate the area of a rectangle and
    return the value to main*/
 void Rectangle(){
    cout<<"\n\nQuestion 6:";
    cout << "\nArea of rectangle: ";
    // Deceleration of variables.
    float length;
    float breath;
    float area;
    cout <<"\nEnter length: ";
    cin >> length;
    cout <<"\nEnter breath: ";
    cin >> breath;
    area = length * breath;
    cout <<area<<"mm^2";
 }


    /*Question 7, Make a function that can take in two values temperature and humidity and
    prints an alarm message if temperature >= 95 or if the humidity >=90*/
 void TempHumity(){
     cout<<"\n\nQuestion 7:";
     float t;
     float h;
     cout<<"\nPlease enter Temp: ";
     cin>> t;
     if (t>= 95){
     cout<<"\nAlarm----High Temp Warning----";}
     else {
     cout<<"\nTemp in range\n";}
     cout<<"\nPlease enter Humidity: ";
     cin>> h;
     if (h>=90){
     cout<<"\nAlarm----High Humidity Warning----";}
     else {
     cout<<"\nHumidity in range\n";}
     }


    /*Question 9, Write a temperature conversion function that gives the user the option of converting
    a value of temperature to Celsius and Fahrenheit scales of temperature. Find equation
    solution online*/
void TempConversion() {
    cout<<"\n\nQuestion 9:";
    int temp;
	char unit;
    cout << "\nPlease enter the temperature and unit of measurement. e.g(12c or 66f): ";
	cin >> temp>>unit;
    if ( isupper(unit) ){
    unit = tolower(unit);}
    if (unit == 'f'){
    temp = (temp - 32)  / 9.0 * 5.0;
    cout << temp << " degrees Celsius\n";}
	else if (unit == 'c'){
    temp = 9.0 / 5.0 * temp + 32;
    cout << temp << " degrees Fahrenheit\n";}
	else{
    cout << "Sorry that unit of measurement is not recognized in County MAYO.\n";}
    }





    //Question 10, Write a function to find all the even number from 0 to 1000 and print them.
void EvenNumbers(){
    cout<<"\nQuestion 10:\n";
    int number;
    int num1 = 0;
    int num2 = 1000;
    char u;
    cout<<"Would you like to run all the even numbers from 0 to 1000? Enter y: ";
    cin >> u;
    if (u=='y'){
    cout<<"\nEven numbers in given range are: ";
    for(number = num1;number <= num2; number++)
    if(number % 2 ==0)
    cout << number << " \n";}
    else{cout<<"\nIncorrect Input. Next Question:\n";}

}



    //Question 11, Write a function that can take two interger values and find all the odd numbers
void OddNumbers(){
    cout<<"\nQuestion 11:\n";
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"\nEnter second number: ";
    cin>> num2;
    for (int num3 = num1;num3<=num2;num3++)
    if(num3%2 ==1||
    num3%2==-1)
    cout<<num3<<"\n";

    }

void Array(){
    cout<<"\nQuestion 12:\n";
    int arr[0];
    for(int i=0;i<150;i++){
    if (arr[i]%2!=0)
    cout<<arr[i]<<"......Odd number\n\n";}
    }



    //Question 13, Create a function that can create 6 random numbers.
void RandomNumbers(){
    cout<<"\nQuestion 13:\n";
    char u;
    cout<<"Would you like to create 6 random numbers? Enter y: ";
    cin >> u;
    if (u=='y'){
    int v1 = rand() % 100; // v1 in the range 0 to 99
    int v2 = rand() % 100 + 1; // v2 in the range 1 to 100
    int v3 = rand() % 30 + 1985; // v3 in the range 1985-2014
    int v4 = rand() % 80 * 12;
    float v5 = rand() % -200 / 21;
    float v6 = rand() % 4000 / 87.5;{
    cout<<v1<<"\n"<<v2<<"\n"<<v3<<"\n"<<v4<<"\n"<<v5<<"\n"<<v6<<"\n";}}
    else {cout<<"Incorrect Input. Moving on to next Question.\n";
    }


}
    /*Question 14, Create functions by copying-and-pasting the example code, fix the issues to get it
    working, declare variables etc*/
void Solve(){
    cout<<"\nQuestion 14:\n";
    int i=5;
    int grade;
    int count =0;
    while (i < 10){
    cout<<i;
    cout<< endl;
    i=i+1;}
    /* Finding the sum 1 + 2 + 3 + ... + 20 */
    int b = 1;
    int sum = 0;
    while (b <= 20)
{   sum = sum + b;
    b=b+1;}
    cout<<"The sum ="<<sum<<"\n";
    /* Average a list of grades terminated by -1 */
    sum = 0;
    count = 0;
    cout << "Enter grade (-1 to end): "; // prompt user for grade
    cin >> grade; // read grade
    while (grade != -1){
    sum = sum + grade;
    count = count  + 1;
    /* Get next grade */
    cout << "Enter grade (-1 to end): ";
    cin >> grade;}
    if (count > 0);
    cout << "Average is " << (double) sum / count<<"\n";

}



    /*Question 15, Create a function that will print “finished” 10 time, using 3 ways
    for, while and a do while loops*/
void Finished() {
    cout<<"\nQuestion 15:\n";
    cout<<"Press y to proceed: \n";
    char p;
    cin >> p;
    if (p=='y'){
    cout<<"\nWhile Loop.....\n";
    int i = 1;
    while (i <=10) {
    cout <<"\nfinished\n";
    i = i+1;}

    cout<<"\nFor Loop.......\n";
    for (int i = 1; i <=10; ++i) {
    cout <<"\nfinished\n";}

    cout<<"\nDo...While Loop....\n";
    int count = 1;
    do { count = count + 1;
    cout<<"\nfinished\n";}
    while(count <= 10);}
    else{
    cout<<"Incorrect Input. Back to the start...........";}









}

