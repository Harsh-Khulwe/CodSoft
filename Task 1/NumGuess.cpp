#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    long int min, max, num, gen;

    srand(time(0));

    cout<<"\n\t\t\t\t\t<-- NUMBER GUESSING GAME -->\n\n\t-- ENTER THE RANGE OF NUMBERS --\n";
    cout<<"\nEnter the starting point: ";
    cin>>min;
    cout<<"Enter the ending point: ";
    cin>>max;

    gen = min + rand() % (max - min + 1);

    cout<<"\nGuess a number in your range: ";
    cin>>num;

    while(1)
    {
        if(num < gen)
        {
            cout<<"\nYour guess is LOW... Its something higher!\n\tTry to guess again: ";
            cin>>num;   
        }
        else if(num > gen)
        {
            cout<<"\nYour guess is HIGH... Its something lower!\n\tTry to guess again: ";
            cin>>num;
        }
        else
        {
            cout<<"\n\n\tCONGRATS!! You guessed the correct number...\n\n";
            break;
        }
    }
    
    return 0;
}
