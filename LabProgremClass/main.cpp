#include <iostream>
#include "labInfo.h"

using namespace std;

    /*void LabInfo(){
    cout<<"Fergus "<<endl;
    cout<<"Lab Using Classes\n"<<endl;

    }
    Class used for storing LabInformation
    class labInfo{

    public:
    string name;
    string labId;
    //int day;
    //int month;
    // int year;

    void printInfo(){
    cout<<name<<"\n\n"<<labId<<"\n\n"<<"Date : "<<day<<":"<<month<<":"<<year<<"\n\n"<<endl;

    }
    void setdate(int dayTemp, int monthTemp, int yearTemp){
    day = dayTemp;
    month = monthTemp;
    year = yearTemp;

    }

    private:
    int day;
    int month;
    int year;

    };*/

    int main(){

    LabInfo();
    labInfo fob1;
    fob1.name ="Fergus O Boyle";
    fob1.labId = "Lab 4";
    fob1.day = 12;
    fob1.month = 02;
    fob1.year = 2021;
    fob1.printInfo();

    return 0;
}
