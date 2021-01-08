#include <iostream>
using namespace std;
#include "functions.h"


    int main()

    {

    int *arrayRef;
    //p = MyArray;
    LabInfo();

    //Question 2
    arrayRef = ArrayArray();


    //Question 4
    int scalerRef = InputScalar();

    //Question 5
    ArrayArrayRef(arrayRef,6,scalerRef);

   //Question 7
    char tree[8][9] = {{' ',' ',' ',' ','x',' ',' ',' ',' '},
                       {' ',' ',' ','x','x','x',' ',' ',' '},
                       {' ',' ','H','A','P','P','Y',' ',' '},
                       {' ','x','x','x','x','x','x','x',' '},
                       {'C','H','R','I','S','T','M','A','S'},
                       {' ',' ',' ',' ','o',' ',' ',' ',' '},
                       {' ',' ',' ',' ','o',' ',' ',' ',' '},
                       {' ',' ',' ',' ','o',' ',' ',' ',' '}};
    PrintTree(tree);


    return 0;

    }
