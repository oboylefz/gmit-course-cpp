#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#endif // PLAYER_H_INCLUDED

#include <iostream>

using namespace std;

class FootballClub{

    private:

    string clubname;
    string district;
    string stripColour;

    public:

    FootballClub(string clubname, string district, string stripColour){
        this->clubname = clubname;
        this->district = district;
        this->stripColour = stripColour;
        }
    string getClubname(){
        return clubname;
        }
    string getDistrict(){
        return district;
        }
    string getstripColour(){
        return stripColour;
        }


    void setClubname(string clubname){
        this->clubname = clubname;
}
    void printInfo(){
    cout<<"Clubname : "<<clubname <<"\nDistrict : "<< district <<"\nStripColour : " << stripColour << endl;

}
};



