/* Shaun Carter
 * Introduction to Programming
 * Module 3: Assignment 1
 * Program #5
 * Prof. Matt Blackmon
 * 
 * Description: A program that accepts a character, and if the character is ‘m’
 *              then display “Mary”; ‘t’ then “Thomas”; ‘s’ then “Susan”; and 
 *              “Nobody” for any other characters.
 */

#include <iostream>
using namespace std;

int main()
{
    //variables
    char charIn;
    
    //Prompt
    cout << "Please enter a character (m,t,s): ";
    cin >> charIn;
    
    //Output
    switch(charIn){
        case 'm':
            cout << "\nMary\n";
            break;
        case 't':
            cout << "\nThomas\n";
            break;
        case 's':
            cout << "\nSusan\n";
            break;
        default:
            cout << "\nNobody\n";
    }
    return 0;
}