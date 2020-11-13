#include <iostream>

using namespace std;

void LabInfo() {

 cout << "Fergus O Boyle\n";
 cout << "Lab #2" << endl;

}
int main()
{
 LabInfo ();

 int x;
 int y;
 cin >>x;
 cin >>y;
 if (x > y)
 cout << "The largest value is " << x;
 else if (x < y)
 cout << "The largest value is " << y;




    return 0;
}
