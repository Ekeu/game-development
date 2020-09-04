#include <iostream>
int main()
{
    // Print intro message
    std::cout << "You are a secret agent breaking into a secure server room... \n";
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ There code adds up to => " << CodeSum << std::endl;
    std::cout << "+ There code multiply to give => " << CodeProduct << std::endl;

    // Store player's guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << std::endl;

    int GuessSum, GuessProduct;
    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    // Check if player's guess is correct
    if ((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
         std::cout << "You Win! Now Get out of there fast!" << std::endl;
    }
    else
    {
         std::cout << "You've been killed!" << std::endl;
    }
    

    return 0;
}