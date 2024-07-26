/*
    Reference program
    Keypoints: 
        Arrays - char, int, string
        Functions - void, int, char
        Loops - while, do-while, for
        Header files - stdio.h, stdlib.h, time.h
        Conditions - if, else-if, else, switch
        Variables - int, char
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#define M 5

void ReadStringCount();
void ReadRandomArray();

int main()
{
    ReadStringCount();
    printf("\n");
    ReadRandomArray();
   
    return 0;
}

void ReadStringCount()
{
    //Read a string and print its length
    char string[N];
    char modstring[N];
    int stringcounter = 0;

    printf("Enter a string: ");
    fgets(string, N, stdin);

    //Increments the counter
    for(int i = 0; string[i] != '\0'; i++)
    {
        //Filters only characters
        if(string[i] != '\n' && string[i] != ' ')
        {
            stringcounter++;
        }
        
        //Fixes the new line issue
        if(string[i] != '\n')
        {
            modstring[i] = string[i];
        }
    }

    printf("%s is %d characters long\n", modstring, stringcounter);
}

void ReadRandomArray()
{
    // Fill an array/list with 5 random numbers from 0 to 99
    //Separately from the filling part, print thoes numbers out
    int list[M];

    srand(time(0));

    printf("[");
    for(int i = 0; i < M; i++)
    {
        list[i] = rand() % 100;
        printf("%d ", list[i]);
    }
    printf("]");

    printf("\n");
}