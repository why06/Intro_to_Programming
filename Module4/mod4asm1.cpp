/* Shaun Carter
 * Introduction to Programming
 * Module 4: Assignment 1
 * Program #7
 * Prof. Matt Blackmon
 * 
 * Description: A program that prompts for the # of liters consumed by the user's car
 *              and the distance traveled (in miles) and compute the miles per gallon.
 */


#include <iostream>

#define GALLONS_PER_LITER 0.264179

using namespace std;
int main(){
    //function
    double mpg(double miles, double gallons);
    bool isNeg(double num);
    
    //Variables
    double liters = 0;
    double miles = 0;
    bool repeat = false;
    int answer = 0;
    
    do{
        do{
            //reads in # of liters of gasoline used
            cout<<"\nEnter the amount of gasoline in liters: ";
            cin>>liters;
        //filtering negative numbers
        }while(isNeg(liters));
        
        do{
            //reads in # of miles traveled by car
            cout<<"\nEnter the number of miles traveled: ";
            cin>>miles;
        //filtering negative numbers
        }while(isNeg(miles));

        //outputs miles per gallon
        cout<<"\nThe gas mileage of this travel is " << mpg(miles, GALLONS_PER_LITER * liters)
        << " miles per gallon.";
        
        //Prompt to run again.
        do{
            cout<<"\n\nDo you want to run this program again(yes=1, no=0)? ";
            cin>>answer;
            if(answer > 1 || answer < 0){
                cout<<"\nInvalid input. Please enter either \'1\' or \'0\'.";
                repeat = true;
            }else{
                repeat = false;
            }
        }while(repeat);
    //loop    
    }while(answer);
    
    return 0;
}

//computes mpg
double mpg (double miles, double gallons){
    return (miles / gallons);
}

//filter negative numbers
bool isNeg(double num){
    if(num < 0 ){
        cout<<"\nPlease only enter positive numbers. (Ex. 0,1.2,2...)";
        return true;
    }else
        return false;
}