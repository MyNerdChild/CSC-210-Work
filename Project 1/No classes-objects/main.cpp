//Krysta Parker CSC 210
//Project 1(OOP): Number Guessing Game
//

//This is a basic verison that only consist of function and no classes (classes are required in real project)
#include <iostream>
#include <cstdlib>
#include "time.h"
using namespace std;

int dChoice;
int ranNum;
int cpu = 0;
int user = 0;

void menu();
void difficultyMenu();

void gamePlay();
void Scoreboard();

void userGuess();
void cpuGuess();

void randomNumber();
void diff1();
void diff2();
void diff3();

int main()
{
    menu();

    return 0;
}

/**************************************************************/

void menu()
{

    int choice;

    cout << "******WELCOME TO CSC GAMES!******" << endl
         << "Start Game.......press 1" << endl
         << "Scoreboard.......press 2" << endl
         << "Quit.............press 3" << endl;
    cin >> choice;

    switch(choice)
    {
    case 1:
        gamePlay();
    case 2:
        Scoreboard();
    case 3:
        exit(0);
    default:
        cout << "ERROR! Invalid Option. Try Again." << endl;
        menu();
    }
}

void difficultyMenu()
{
    cout << "************DIFFICULTY************" << endl
         << "Rookie Here (5 Guesses)..........press 1" << endl
         << "I'm Competitive (10 Guesses).....press 2" << endl
         << "Bring it on!! (20 Guesses).......press 3" << endl;
    cin >> dChoice;
}

/**************************************************************/

void gamePlay()
{
    //cout << "gamePlay" << endl;
    randomNumber();
    difficultyMenu();
    cout << "***************************************************" << endl;
    //function for user guess
    userGuess();
    menu();
}

void Scoreboard()
{
    cout << "************Scoreboard************" << endl
         << "Your Score: " << user << "pts" << endl
         << "CPU Score: " << cpu << "pts" << endl;
    menu();
}

/**************************************************************/

void userGuess()
{
    int guessNum;

    //cout << "userGuess" << endl;
    cout << "Pick a number between 1-100: ";
    cin >> guessNum;

    if (guessNum > ranNum)
    {
        cout << "Too High" << endl;
        cpuGuess();
    }
    else if(guessNum < ranNum)
    {
        cout << "Too Low" << endl;
        cpuGuess();
    }
    else
    {
        cout << "Correct" << endl
             << "***************************************************" << endl;
             user++;
        //add point to user using class?
        menu();
    }
}

void cpuGuess()
{

    switch(dChoice)
    {
    case 1: diff1();
    case 2: diff2();
    case 3: diff3();


    //cout << "cpuGuess" << endl;


    }
    //function? correct or Incorrect -- may put with in guess functions

}

/****************************************************************************/
//All function below needs to be converted to class objects later
void diff1()
{
    srand(time(0));
    int cpuG;

    for(int i = 0; i < 5; i++)
    {
        cpuG = (rand() % (100-1) + 1);

        if (cpuG == ranNum)
        {
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpu++;
            //class add 1pt to CPU score
            menu();
        }
        else
        {
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;
        }
    }

    userGuess();
}
void diff2()
{
    srand(time(0));
        int cpuG;


        for(int i = 0; i < 10; i++)
    {
        cpuG = (rand() % (100-1) + 1);

        if (cpuG == ranNum)
        {
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpu++;
            //class add 1pt to CPU score
            menu();
        }
        else
        {
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;
        }
    }
    userGuess();

}
void diff3()
{
    srand(time(0));
        int cpuG;


        for(int i = 0; i < 20; i++)
    {
        cpuG = (rand() % (100-1) + 1);

        if (cpuG == ranNum)
        {
            cout << "CPU guess: " << cpuG << ".....Correct" << endl
                 << "***************************************************" << endl;
                 cpu++;
            //class add 1pt to CPU score
            menu();
        }
        else
        {
            cout << "CPU guess: " << cpuG << ".....Incorrect" << endl;
        }
    }
    userGuess();

}

void randomNumber()
{
    srand(time(0));

    ranNum = (rand() % (100-1) + 1);
}
