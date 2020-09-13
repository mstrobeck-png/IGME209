
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void generateRandom(int numberOfRandoms);
char* reverseString(char inputString[]);

int main()
{
    int numberOfRandoms = 20;
    generateRandom(numberOfRandoms);

    cout << " " << endl;
    cout << "Input a number to be randomized: " << endl; //ask input


    char inputString[99];
    cin.getline(inputString, 99);  //input
    reverseString(inputString);   //calls method
}

void generateRandom(int numberOfRandoms) 
{
    srand(time(0)); //srand means seed random

    for (int i = 1; i < 21; i++)
    {
        numberOfRandoms += rand();
        cout << "The " << i << " random number is " << numberOfRandoms << endl;
    }
}

char* reverseString(char inputString[]) //attempts to reserve string; returns character pointer
{
    char newString[256] = "";
    int length = strlen(inputString);
    for (int i = 0; i < length; i++)
    {
        char c = inputString[i];
        newString[length - i] = c;
    }
    strcpy_s(inputString, 128, newString);
    return inputString;

    //The error surrounding this is because it is a corrupted variable. The program tries to pass what is called a pointer to a local variable, and the problem occurs when the function ends so does the variable's existence in the code.
}



