/* Shaun Carter
 * Introduction to Programming
 * Module 3: Assignment 2
 * Program #6
 * Prof. Matt Blackmon
 * 
 * Description: Determines a reccomendation based on temperature and day of the 
 *              week. 
 */
 #include <iostream>
 
 using namespace std;
 int main(){
    //variables
    int temp = 0;
    bool isSunday = false;
    int sundayNum = 0;
     
    //prompt for input
    cout<<"\nPlease enter temperature: ";
    cin >> temp;
    
    //make sure user enters 1 or 2.
    bool isCorrectInput = false;
    do{
        cout<<"\nIs it Sunday(Yes=1, No=2)? ";
        cin >> sundayNum;
        isCorrectInput = (sundayNum == 1 || sundayNum ==2);
        if(!isCorrectInput)
            cout << "\nUndefined input. Please enter \'1\' for Yes or \'2\' for No.\n";
    }while(!isCorrectInput);
    isSunday = (sundayNum == 1);
    
    //temperature < -10 and Sunday – Stay home.
    if(temp < -10 && isSunday)
        cout << "\nStay home.";
    //temperature < -10 and not Sunday – Stay home, but call work.
    else if (temp <-10 && !isSunday)
        cout << "\nStay home, but call work.";
    //temperature <= 0 (but >= -10) – Dress warm.
    else if (temp <= 0 && temp >= -10)
        cout << "\nDress warm";
    //temperature > 0 and Sunday – Play hard.
    else if(temp > 0 && isSunday)
        cout<< "\nPlay hard";
    //temperature > 0 and not Sunday – Work hard.
    else if(temp > 0 && !isSunday)
        cout << "Work hard.";
        
    return 0;
 }