//Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka

#include <stdio.h>
#include <string.h>
int main() 
{
char strings[50];                      //Declare the string
printf("Enter a String: ");
 scanf("%s",strings);                     //read the string from user
printf("the input  string is %s",strings);         //Print the string
return 0;
}
