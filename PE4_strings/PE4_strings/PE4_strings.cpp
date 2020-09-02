


#include <iostream>
#include <cstring>
using namespace std;


//how many i is there, loop, print result
//strcpy_s means string copy, strlen means length, strcat merges

void printsize(char one[50]);

int main()
{
    char one[50] = "supercalifragilistic"; //21
    cout << one << endl;

    cout << strlen(one) << " characters in length" << endl; //length

    char two[50] = "expialidocious"; //15

    strcat_s(one, two); //two words merged
    cout << one << endl; //output of two words

    string s = one;
    int numI = 0;

    for (int a = 0; a < s.size(); a++) { 
        if (s[a] == 'i')
        {
            numI++;
            cout << numI << endl;
        }

    }       
    cout << "There are " << numI << " i's in the combined words." << endl;
}


