//Write a c program to use function to the insert a substring in to given main string from a given position 
#include<stdio.h>
#include<string.h>
void insertSubstring(char mainstring[], char subString[], int position);{
    int mainLength = strlen(mainLength);
    int subLength = strlen(subString);
    if (position<0||position>mainLength)
    {
        printf("Invalid position\n");
        return;
    }
    int i, j;
    for ( i = mainLength-1; i >= position; i--)
    {
        mainString[i+subLength] = mainString[i];
    }
    for ( i = position, j= 0; j < subLength; i++, j++)
    {
        mainString[i]= subString[j];
    }
    
    
    
}