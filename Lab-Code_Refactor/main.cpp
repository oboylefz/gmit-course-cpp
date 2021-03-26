#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test(){

/*
string galwayTeam[2][]=   {{"Ruairi", "Lavelle"},
                            {"Eoghan", "Kerin"},
                            {"Sean Andy", "Ó Ceallaigh"},
                            {"David", "Wynne"},
                            {"Gary", "O'Donnell"},
                            {"Gareth", "Bradshaw"},
                            {"Johnny", "Heaney"},
                            {"Thomas", "Flynn"},
                            {"Ciarán", "Duggan"},
                            {"Michael", "Daly"},
                            {"Johnathan", "Duane"},
                            {"Eamon", "Brannigan"},
                            {"Barry", "McHugh"},
                            {"Padraig", "Cunningham"},
                            {"Antaine", "Ó Laoí"}}

*/

}




int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Crossmolina\n");
    club.setDistrictname("Mayo\n");
    club.setManager("Fergus O Boyle\n");

    string clubName = club.getClubname();
    string district = club.getDistrict();
    string manager = club.getManager();



    cout <<clubName<<district<<manager<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, weight;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>weight)){
            break;
        }
        else{
           // cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<" "<<weight<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            playerTemp.setWeight(weight);
            club.addPlayerToSquad(playerTemp, i);
        }


        //increments
        i =i+1;
    }
    infile.close();
                                                                                    /*
    //READING DATA FROM A FILE
    infile.open("teamTeam.csv", ios::in);
    i = 0; //reset i
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
         //   club.addPlayerToTeam(playerTemp, i);
        }
        //increments
        i =i+1;
    }
                                                                                        */
    cout<<"<<---------------->>\n"<<endl;
    cout<<"SQUAD_TeamInfo\n"<<endl;
    club.printSquad();
                                                            //  cout<<"TEAM"<<endl;
                                                            //    club.printTeam();




    return 0;
}
