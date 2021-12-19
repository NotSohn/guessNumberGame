#include <iostream>
#include <string>
using namespace std;

int main()
{
    int randFunction(int result);
    int guessNum(int result);
    
    int result = randFunction(result);
    cout << guessNum(result) << endl;
        
}

int randFunction(int result)
{
    int min;
    int max;
    cout << "Please enter the lowest and highest possible number" << endl;
    scanf("%d%d", &min, &max);
    result = (rand() % (max - min + 1)) + min;
    return result; 
}

int guessNum(int result)
{
    int guess = 0;
    while(true)
    {
        guess+=1;
        int userinput;
        cout << "Please enter a guess: ";
        cin >> userinput;
        
        if(userinput < result)
        {
            cout << "Your number was lower than the result" << endl;
        }
        else if(userinput > result)
        {
            cout << "Your number was greater than the result" << endl;
        }
        else
        {
            cout << "Congradulations! You found the number!... The number was " << result << endl;
            cout << "You have guessed " << guess << " Time(s)!" << endl;
            return 0;
        }
    }
}
