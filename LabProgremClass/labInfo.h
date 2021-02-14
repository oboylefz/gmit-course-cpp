#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED
#endif // LABINFO_H_INCLUDED
using namespace std;

    void LabInfo(){
    cout<<"Fergus "<<endl;
    cout<<"Lab Using Classes\n"<<endl;

    }
    //Class used for storing LabInformation
    class labInfo{

    public:
    string name;
    string labId;
    //int day;
    //int month;
    //int year;

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

};
