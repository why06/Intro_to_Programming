/* Shaun Carter
 * Introduction to Programming
 * Module 5: Assignment 1
 * Program #9
 * Prof. Matt Blackmon
 * 
 * Description: A program that computes a factorial of a number between 2 and 15
 *              using a do-while loop and does input validation
 */
 
 #include<iostream>
 #include<string>
 #include<cctype>
 
 using namespace std;
 
 bool validatePosInt(string str);

 int main(){
     int num;
     unsigned long long factorial = 1;
     
     // Validation Loop
     string str;
     do{
         // Prompt for input:
         cout<< "\nEnter a number between 2 and 15: ";
         cin >> str;
     }while(!validatePosInt(str));
     
     //Calculate factorial
     num = atoi(&str[0]); //addy of 1st char == char* 
     while(num)
         factorial *= num--; 
     
     //Print the answer
     cout<<"\nFactorial of "<<num<< " is "<<factorial<<endl;
 }
 
 //function to validate input
 bool validatePosInt(string str){
     for(int i = 0; i < str.size(); i++){
         if(!isdigit(str[i])){
             cout<<"\nIncorrect entry. Please enter a whole number between 2 and 15."
                << " Examples: (4,5,6,etc.)"<<endl;
             return false;
         }
     }
     int num = atoi(&str[0]);
     if(num > 1 && num <16)
        return true;
     else{
          cout<<"\nIncorrect entry. Number must be positive integer"
              <<"(whole number) between 2 and 15"<<endl;
         return false;
     }
 }