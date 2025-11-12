#include <iostream>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;

    Visitor(string visitorName, int ticketsBought){
        visitorName = visitorName;
        ticketsBought = 0;
    }


    void displayInfo(){

    }

};
