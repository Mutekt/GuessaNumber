#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    
    bool game=1;  //game is running

    int randomNum = rand()% 100+1; // generates number from 1 to 100

    int attempts=0; // declares the attempts

    while (game==true){ // program is running until the game is set to something else then true

        std::cout<<"Guess a number: "; 

        int number=0; //declares the later input

        std::cin>> number; //asks for number
        if (std::cin.fail()){
            std::cout<<"input must be a number!\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        else if (number>randomNum){ 
            std::cout<<"Too high!\n"; //informs that the input is too high
            attempts++; // adds one to attempts
        }
        
        else if (number<randomNum){ 

            std::cout<<"Too low!\n"; //informs that the input is too low
            attempts++; //adds one to attempts
        }
        else {
            attempts++; // adds one to attempts
            std::cout<<"You found the number, it took you " <<attempts<<" attempts\n"; //shows how many attempts it took
            game=0; //if its equal it turns game to false that ends the loop
        }

        
    };
    return 0;
}