#ifndef SETUP_H
#define SETUP_H


class setUp
{
   public:
        void randomNumber(); //Gives a random number for the game
        int getNumber(); //return random number
        setUp();
        //Constructor
        //Set CPU and User score to zero
    private:
        int cpuScore;
        int userScore;
        int gameNumber;
};

#endif // SETUP_H
