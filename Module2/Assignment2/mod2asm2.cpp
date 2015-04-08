/* Shaun Carter
 * Introduction to Programming
 * Module 2: Assignment 2
 * Prof. Matt Blackmon
 * 
 * Description:  A program that inputs the number of coupons you win 
 * (you can test with 9, 28, 37coupons), and outputs how many candy bars and 
 * gumballs you can get if you spend all of your coupons on candy bars first and
 * any remaining coupons on gumballs.
*/
#include <iostream>
#include <string>
//Constants
#define CANDYBARCOST 10
#define GUMBALLCOST 3
//Functions
void calcCoupons(int);

using namespace std;
int main()
{
    //Input # of coupons
    int coupons = 0;
    cout << "Please enter number of coupons: ";
    cin >> coupons;
    //Calculate prizes
    calcCoupons(coupons);
    return 0;
}

//prints our result of coupon calculation preferring candybars
void calcCoupons(int coupons){
    //how many candy bars
    if(coupons >=10){        
        cout << "\nNumber of Candy bar = " << coupons / CANDYBARCOST << "\n\n";
        //call again with remainder
        calcCoupons(coupons % CANDYBARCOST);
    //how many gumballs
    }else if(coupons >= 3){
        cout << "Number of Gumballs = " << coupons / GUMBALLCOST  << "\n\n";
        //call again with remainder
        calcCoupons(coupons % GUMBALLCOST);
    //leftover coupons
    }else{
        cout << "Remaining coupons = " << coupons <<"\n";
        return;
    }   
}