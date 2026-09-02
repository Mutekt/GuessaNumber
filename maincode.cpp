#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    
    bool game=1;  //game is running

    int randomNum = rand()% 100+1; // generates number from 0 to 100

    while (game==true){ // program is running until the game is set to something else then true

        std::cout<<"Guess a number: "; 

        int number=0; //declares the later input

        std::cin>> number; //asks for number

        if (number==randomNum){ //checks if the number is equal to the generated one

            std::cout<<"You found the number!\n";

            game=0; //if its equal it turns game to false that ends the loop

        };
        
    };
    return 0;
}