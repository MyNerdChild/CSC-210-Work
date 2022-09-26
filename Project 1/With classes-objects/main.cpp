//Krysta Parker CSC 210
//Project 1(OOP): Number Guessing Game
//

#include <iostream> //allows usage of cout & cin
#include <cstdlib> //allows usage of srand
#include "time.h" //allows usage of time(0)
#include "setUp.h" //created class header

using namespace std;

//Global variables
int dChoice; //difficulty user input
int user; //user score variable
int cpu; //cpu score variable
setUp info; //setUp class object

//Menu functions
void menu(); //function prompts main menu and user chooses from the 3 options
void difficultyMenu(); //function prompts difficulty menu and user chooses from the 3 game play options

//Game play functions
void gamePlay(); //function call functions to set up and start game
void Scoreboard(); //function prints user and cpu current scores

//User/computer guess function
void userGuess(); //function prompts message and user input their guessed number
void cpuGuess(); //function prompts message and program  prints out cpu's guessed numbers

void userPts(); //gives user correct amount of points depending on game difficulty
void cpuPts(); //gives cpu correct amount of points depending on game difficulty
void diff1(); //function allows cpu to guess random number 5x
void diff2(); //function allows cpu to guess random number 10x
void diff3(); //function allows cpu to guess random number 20x

int main()
{
    //calling main menu function
    menu();

    return 0;
}

/**************************************************************/

void menu()
{

    char choice; //user menu variable

lup: //created loop
    //prompt main menu message
    cout << "******WELCOME TO CSC GAMES!******" << endl
         << "Start Game.......press 1" << endl
         << "Scoreboard.......press 2" << endl
         << "Quit.............press 3" << endl;
    cin >> choice; //user input

    switch(choice)
    {
    case '1':
        gamePlay(); //Start Game function
    case '2':
        Scoreboard();   //Scoreboard function
    case '3':
        exit(0);    //exit program function
    default:    //if the input is not available prompt message and print main menu again
        cout << "ERROR! Invalid Option. Try Again." << endl;
        goto lup; //go to created loop "lup"
    }
}

void difficultyMenu()
{
    //prompt difficulty menu
    cout << "************DIFFICULTY************" << endl
         << "Beginner (5 Guesses - 1pt).............press 1" << endl
         << "Expert (10 Guesses - 2pts).............press 2" << endl
         << "Intermediate (20 Guesses - 3pts).......press 3" << endl;
    cin >> dChoice; //user input
}

/**************************************************************/

void gamePlay()
{
    info.randomNumber(); //call class function to get a random number for the current started game
    difficultyMenu(); //call function where user chooses the difficulty of the current started game
    cout << "***************************************************" << endl;
    userGuess(); //call function starting the game starting with the user
}

void Scoreboard()
{
    //prompt Scoreboard with up to date scores of the user and cpu
    cout << "************Scoreboard************" << endl;
    cout << "Your Score: " << user << "pts" << endl;
    cout << "CPU Score: " << cpu << "pts" << endl;
    menu(); //call menu function
}

/**************************************************************/

void userGuess()
{
    int guessNum;

    //prompt message starting the game starting with user's guess
    cout << "Pick a number between 1-100: ";
    cin >> guessNum;


    if (guessNum > info.getNumber())
    {
        //if the user guess is greater than the random number
        cout << "Too High" << endl; //prompt message
        cpuGuess(); //call function where the cpu will guess the number
    }
    else if(guessNum < info.getNumber())
    {
        //if the user guess is less than the random number
        cout << "Too Low" << endl; //prompt message
        cpuGuess(); //call function where the cpu will guess the number
    }
    else
    {
        //else prompt message
        cout << "Correct" << endl
             << "***************************************************" << endl;
             userPts(); //add  1 point to user's score
        menu(); //call menu function
    }
}

void cpuGuess()
{
    //uses the users choice from the difficultyMenu and call chosen function
    switch(dChoice)
    {
    case 1: diff1(); //call function where cpu guesses 5x
    case 2: diff2(); //call function where cpu guesses 10x
    case 3: diff3(); //call function where cpu guesses 20x
    }
}

/****************************************************************************/
void userPts()
{
    switch(dChoice)
    {
    case 1:
        user+=1; //add 1 point to user score
        break;
    case 2:
        user+=2; //add 2 points to user score
        break;
    case 3:
        user+=3; //add 3 points to user score
        break;
    }
}
void cpuPts()
{
    switch(dChoice)
    {
    case 1:
        cpu+=1; //add 1 point to cpu score
        break;
    case 2:
        cpu+=2; //add 2 point to cpu score
        break;
    case 3:
        cpu+=3; //add 3 point to cpu score
        break;
    }
}
void diff1()
{
    srand(time(0)); //allows program to print a different number each time
    int cpuG;

    //for loop for 5 cpu guess
    for(int i = 0; i < 5; i++)
    {
        cpuG = (rand() % (100-1) + 1); //store number within variable

        if (cpuG == info.getNumber())
        {
            //if the cpu guess is correct then print message
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpuPts(); //add points to cpu's score
            menu(); //call menu function
        }
        else
        {
            //if the cpu guess is incorrect, print message with the cpu's guessed number
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;

            //it will continue to guess until cpu guess correctly or if turn runs out(5x)
        }
    }

    userGuess(); //call user guess function
}
void diff2()
{
    srand(time(0)); //allows program to print a different number each time
    int cpuG;

    //for loop for 10 cpu guess
    for(int i = 0; i < 10; i++)
    {
        cpuG = (rand() % (100-1) + 1); //store number within variable

        if (cpuG == info.getNumber())
        {
            //if the cpu guess is correct then print message
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpuPts(); //add points to cpu's score
            menu(); //call menu function
        }
        else
        {
            //if the cpu guess is incorrect, print message with the cpu's guessed number
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;

            //it will continue to guess until cpu guess correctly or if turn runs out(10x)
        }
    }
    userGuess(); //call user guess function

}
void diff3()
{
    srand(time(0)); //allows program to print a different number each time
    int cpuG;

    //for loop for 10 cpu guess
    for(int i = 0; i < 20; i++)
    {
        cpuG = (rand() % (100-1) + 1); //store number within variable

        if (cpuG == info.getNumber())
        {
            //if the cpu guess is correct then print message
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpuPts(); //add points to cpu's score
            menu(); //call menu function
        }
        else
        {
            //if the cpu guess is incorrect, print message with the cpu's guessed number
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;

            //it will continue to guess until cpu guess correctly or if turn runs out(20x)
        }
    }
    userGuess(); //call user guess function
}


