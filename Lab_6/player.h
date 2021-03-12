#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#endif // PLAYER_H_INCLUDED

#include <iostream>
#pragma once
using namespace std;

class Playerclass{

    private:

    string forename;
    string surname;
    string position;
    int mobileNumber;


    public:

     Playerclass(string forename, string surname, string position, int mobileNumber){
        this->forename = forename;
        this->surname = surname;
        this->position = position;
        this->mobileNumber = mobileNumber;
     }

     string getforename(){
        return forename;
        }
     string getsurname(){
        return surname;
        }
     string getposition(){
        return position;
        }
     int getmobileNumber(){
        return mobileNumber;
        }
        void setforename(string forename){
        this->forename = forename;}

    void printInfo(){
    cout<<"Forename : "<<forename <<"\nSurname : "<< surname <<"\nPosition : " << position <<"\nMobileNumber : " << mobileNumber << endl;

}
};
