// TripleX.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include<ctime>
using namespace std;

void PrintIntro(int Difficulty) 
{

    cout << "           Hello Traveller, I see you stumbled upon this ancient ruin! \n";
    cout << "|----------------------------------------------------------------------------------------------------|\n";
    cout << "|But,Alas! In order to traverse further in to the labyrinth number "<<Difficulty<<" you need to enter a passcode.. | \n\n";
    cout << "|The passcode consists of three numbers, you'll get a hint on the sum and product of those numbers...|\n\n";
    cout << "|Guess the numbers correctly and you reach the next stage in the labyrinth, traveller!               |\n\n";
    cout << "|----------------------------------------------------------------------------------------------------|\n";
}
bool PlayGame(int Difficulty)
{
    const int a = rand() % (4 * Difficulty)+1;
    const int b = rand() % (4 * Difficulty)+1;
    const int c = rand() % (4 * Difficulty)+1;

    const int sum = a + b + c, product = a * b * c;


    int guessA, guessB, guessC;

    PrintIntro(Difficulty);

    cout << "The Sum of the numbers are:" << sum << endl;
    cout << "The product of the numbers are:" << product << endl;
    cout << "\nGuess the numbers one by one\n";

    cin >> guessA >> guessB >> guessC;

    cout << "Guess numbers are:" << guessA << guessB << guessC << endl;

    int guessProd = guessA * guessB * guessC;
    int guessSum = guessA + guessB + guessC;

    if (guessProd == product && guessSum == sum)
    {
        cout << "\n\nWelcome to the Labyrinth traveller, Your Next Adventure Awaits You!\n\n\n\n";
        return true;

    }
    else
    {
        cout << "\n\Try again crybaby, YOU LOSE!\n";
       
        return false;
    }
    
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    bool flag = true;
    while (LevelDifficulty<=MaxDifficulty)
    {
       flag=PlayGame(LevelDifficulty);
       cin.clear();
       cin.ignore();
       if (flag)
       {
           ++LevelDifficulty;
       }
    }

    cout << "\nCongrats Traveller, YOU HAVE GAINED THE GREAT KNOWLEDGE OF THE ELDERS, Now bugger off!\n";
    
    return 0;


}

