#include <iostream>
using namespace std;


virtual class Animal{
   
    private:
     string name;
     int age;
     bool isHungry;

    Animal(string name, int age, bool isHungry){
        name = name;
        age = 0;
        isHungry = 0;

    }

    class Mammal :: virtual Animal{

        private:
        string furColor;

        Mammal(string furColor){
            furColor = furColor;
        }
    }
    
    class Bird :: virtual Animal{
            private:
            float wingSpan;

            Bird(float wingSpan){
                wingSpan = wingSpan;
            }

        }

    class Reptile : virtual Animal{
            
            private:
            bool isVenomous;

            Reptile (bool isVenomous){
                isVenomous = 0;

            }
        }


 void display(){ 

    }

void feed(){ 

    }





};

