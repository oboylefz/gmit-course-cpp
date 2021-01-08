#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#endif

    const int n=6;


 void LabInfo() {
    cout << "Fergus O Boyle\n";
    cout << "Lab #3\n" << endl;
 }


    //Question 2
 int* ArrayArray(){
    static int myArray [6];
    for (int i = 0; i < n; ++i){
    cout << "Please enter value ";
    cin>>myArray[i];

    if ((myArray[i]<0)||(myArray[i]>100)){
    --i;

    }
    }
    //Question 3
     cout<<"\nHere is the array:\n\n";
    for (int i = 0; i <n; ++i){
    cout<<"Value "<<myArray[i]<<" address = "<<&myArray[i]<<"\n";}
    return myArray;
 }



    //Question 4
 int InputScalar(){
    static int ScalarRef = 0;
    cout<<"\nPlease enter a Scalar: ";
    cin >>ScalarRef;
    return ScalarRef;
 }


    //Question 5 + 6
 void ArrayArrayRef(int* ArrayRef,int n,int scalerRef){
    for (int i = 0; i < n; i++)
    {
    cout <<"Required Value = " <<ArrayRef[i]*scalerRef<<" Address = "<<&ArrayRef[i]<<"\n";
    }
    cout<<"\n\n";
 }
    //Question 7
void PrintTree(char ary[8][9]){
    for (int i = 0; i < 8; i++){
    for (int j = 0; j < 9; j++){
    cout << ary[i][j];}
    cout << endl;
    }
}







