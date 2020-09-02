

#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    printf("Hello World\n");


    int d = 31;  // december
    int s = 86400;
    int ans; 

    ans = d * s;

    printf("Seconds in December: %i \n", ans); //question
 

    double radius = 6.2;  //area of circle
    double PI = 3.14159;

    double area = PI * (radius * 2);

    printf("The area is: %f \n", area); //question



    //integer division

    int a = 2;
    int b = 12;
    int c = 15;
    int e = 3;
    int solutionOne = b / a;
    int solutionTwo = c / a;
    int solutionThree = c / b;

    printf("Does integer division yield a double, does it round, and does it truncate?\n"); //question

    printf("Example One: 12 / 2 = %i \n", solutionOne);
    printf("Example Two: 15 / 2 = %i \n", solutionTwo);
    printf("Example Three: 15 / 12 = %i \n", solutionThree);
  
    printf("Conclusion: It does not yield a double nor does it round. However, it does truncate. That can be seen in example two where I divided 15 by 2, and instead of 7.5, it gave the answer 7. \n");
    



}



