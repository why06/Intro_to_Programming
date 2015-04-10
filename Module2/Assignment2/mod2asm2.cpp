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
void calcCoupons(int, int*, int*, int*);

using namespace std;
int main()
{
    //variables
    int coupons = 0;
    int candybars, gumballs, leftover = 0;
    
    //Input # of coupons
    cout << "Please enter number of coupons: ";
    cin >> coupons;
    
    if(coupons < 0){
        cout<<"\nSorry. This program positive integer values. (Ex. 1,2,3....)\n";
        return 0;
    }

    
    //Calculate prizes
    calcCoupons(coupons, &candybars, &gumballs, &leftover);
    
    //print prizes
    cout << "\nNumber of Candybars = " << candybars << "\n\n";
    cout << "Number of Gumballs = " <<  gumballs << "\n\n";
    cout << "Remaining coupons = " << leftover <<"\n";
    return 0;
}

//prints our result of coupon calculation preferring candybars
void calcCoupons(int coupons, int* candybars, int* gumballs, int* leftover){
    //candy bars
    *candybars = coupons / CANDYBARCOST;
    coupons = coupons % CANDYBARCOST;
    //gumballs
    *gumballs = coupons / GUMBALLCOST;
    coupons = coupons % GUMBALLCOST;
    //leftover coupons
    *leftover = coupons;
    return;
}

//NOTE: One day I will find a good situation to use recursion.