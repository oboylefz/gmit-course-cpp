#include <iostream>
#include "labInfo.h"

using namespace std;

   void LabInfo(){
    cout<<"Fergus "<<endl;
    cout<<"Lab Using Classes\n"<<endl;

    }
    //Class used for storing Lab Information
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

    // void printInfo(){
    // cout<<name<<"\n\n"<<labId<<"\n\n"<<"Date : "<<day<<":"<<month<<":"<<year<<"\n\n"<<endl;
    // }


};












