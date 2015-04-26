/* Shaun Carter
 * Introduction to Programming
 * Module 4: Assignment 2
 * Program #7
 * Prof. Matt Blackmon
 * 
 * Description: A program that computes a diving score based on the seven judges
 *              scores, and the difficulty level.
 */
 
 #include<iostream>
 using namespace std;
 
 int main(){
     
     //vars
     double difficulty = 0;
     double jScore[7] = {};
     
     //Prompt for difficulty level
     cout<<"\nPlease enter the difficulty level(1.2 - 3.8): ";
     cin >> difficulty;
     
     //vars for loop
     double highest, lowest;
     double total = 0;
     
     for(int i = 0; i < 7; i++){
         double temp;
         //Prompt for jusge scores
         cout<<"\nEnter the score of judge " << i+1 << ": ";
         cin >> temp;
         jScore[i] = temp;
         //sum
         total += jScore[i];
         
             //FIRST ITERATION ONLY
             if(!i) highest = temp, lowest = temp;
         //Calc highest & lowest
         if(highest < temp)highest = temp;
         if(lowest > temp)lowest = temp;
     }
     //Print scores
     cout<<"\nScores = { ";
        for(double score : jScore)cout<<score<<" ";
        cout<<"}";
     //Print difficulty level
     cout<<"\nDifficulty level = "<<difficulty;
     // Throw out highest and lowest scores & sum remaining
     // The sum multiplied by difficulty The total is then multiplied 
     // by 0.6 to determine the diver’s score.
     cout<<"\nTotal score = "<< (total-highest-lowest)*difficulty*0.6;
     return 0;
 }