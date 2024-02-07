#include <iostream>
#include <cstdlib>
#include <ctime>



unsigned int number;        //number is the variable that holds the user's guess 
unsigned int randomNumber;  //randomNumber is the variable that contains the randomNumber



static void guessNumber(){
    
    std::cout << "Please make your number guess (1-9)" << std::endl;
    std::cin >> number;

    
    if (number > 9){
        std::cout << "Number is over 9, please try again" << std::endl;
        guessNumber();
    }
    else if (number < 1){
        std::cout << "Number is under 9, please try again" << std::endl;
        guessNumber();
    }
    else {
        return;
    }
}


static void initializeRand(){
    //Sets the seed of the random number generator to the time
    srand(time(NULL));

    int i = 0;
    //Creates a loop that only ends if 'i' is between 1 to 10
    while (i > 9 || i < 1){
        //Createsthe random number
        randomNumber = rand() % 9 + 1;
        i = randomNumber;
    }
    std::cout << "Computers number is:" << randomNumber << std::endl;
}

static void logic(){
    if (number == randomNumber){
        std::cout << "You win!" << std::endl;
    }
    else if (number != randomNumber){
        std::cout << "You Lost!" << std::endl;
    }

    //says if you press a key 
    char nextGame;

    std::cout << "(e)xit or (c)ontinue:";
    std::cin >> nextGame;
    std::cout << "" << std::endl;

    if (nextGame == 'e'){
        exit(1);
    }
    else if (nextGame == 'c'){
        #ifdef _WIN64
	system("cls");
	#else
	system("clear");
	#endif
    }
    else {

    }
}

void mainLoop(){
    int i = 0;
    while (i == 0){
        guessNumber();
        initializeRand();
        logic();
    }
}

int main(){
    system("clear");
    mainLoop();
}
