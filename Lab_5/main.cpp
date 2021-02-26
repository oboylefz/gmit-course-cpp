#include <iostream>
#include <iomanip>
#include "football_club.h"
#include "player.h"

using namespace std;

int main()
{
    FootballClub obj("Mayo","MayoForSam","Red and Green");
    obj.printInfo();

    //obj.setClubname("St Fergus");

//string clubname = obj.getClubname();
//string dristrict = obj.getDistrict();
//string stripColour = obj.stripColour();

//cout <<"clubname" <<endl;


        Playerclass Obj("Fergus","O Boyle","Full Back",999);
        Obj.printInfo();

 return 0;


}









