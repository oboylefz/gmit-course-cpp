#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



#endif // FUNCTIONS_H_INCLUDED


void LabInfo () {
cout<<"Fergus O Boyle\n";
cout<<"LAB #2\n\n"<<endl;
}



void LargestNumber () {//Q2
    float x;
    float y;
cout<<"Enter First Integer: ";
cin>>x;
cout<<"\nEnter Second Integer: ";
cin>>y;
if(x>y){
    cout<<"\nThe Largest value is: "<<x;
}
else{
    cout<<"The Largest value is: "<<y;
}

}



void NumberCheck (){//Q3
    float N1;
cout<<"\n\nPlease enter a number of your choice:";
cin>>N1;
if (N1>=1&&N1<=100)
    cout<<"\nYes the number entered is between 1 and 100";
else{cout<<"\nNo the number entered is not between 1 and 100";
}
 }




