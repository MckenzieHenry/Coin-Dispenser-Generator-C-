//main.cpp
//Mckenziehenry_assignment1
//Assignment1
//Created by Mckenzie Henry on 1/26/23.
//Generate a coin dispenser

#include <iostream>
using namespace std;

int coins;

double total;
int newtotal;
int newnewtotal;
double newnewnewtotal;
double newnewnewnewtotal;

double quarter;
int dime;
int nickel;
int pennies;
int total_dime;

int main()

{
    // insert code here...
    cout << "Hello, enter your amount in the form of dollors and cents. Input this in the formate of $x.xx: ";//Is the input descriptive of the format that the amount should be type in $xx.xx ?YES , user is askeed to input the
    cin >> total;//  reiterating what was inputted
    coins = total * 100; // for every 100 coin its a dollar

    
    quarter = coins/25; //s the program using int division and the mod operator? Are the coins calculated correctly? YES HERE AND IN LIKE 44
    
    newtotal =  coins - quarter ;
     
     dime = newtotal % 10;
     
     newnewtotal = coins - dime ;
    
    dime = newtotal % 10;
    
    
    coins = coins % 10;
    total_dime = (int) dime;// Is the conversion from double to int used? YES Quarters was changed from double to int
    
    newnewnewtotal = coins - dime ;
    
   nickel = (coins % 10) / 2;
    
   newnewnewnewtotal =newnewnewtotal -nickel;//
    
    
   
    pennies = (coins % 5);
       
       
    pennies = (coins % 5);
        
    cout <<"You entered $"<<total;//s the original amount and the coins given displayed accurately? Yes telling the user what was inputted
    cout <<"\n The conversion of the amount you entered converts to this in coins";
    cout <<"\n The amount of quarter = " <<quarter;
    cout <<"\n the amount of dimes =  " << total_dime;
    cout <<"\nthe amount of nickels = " << nickel;
    cout << "\nthe amount of pennies =  "<< pennies;
    
    cout << "\n this is the exact amount of coins you need to enter" << total;// Is the original amount and the coins given displayed accurately? yessss
    

    return 0;
}
