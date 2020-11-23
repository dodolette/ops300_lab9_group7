#include <stdio.h>
#include <string.h>


int main(void) {
    //first word
    char word1[80] = "";
    //second word
    char word2[80] = "";
    //arg3 number
    int number;  
    //the first n amount of characters in the first word  
    char rev[32] = "";
    // for the loops
    int i;
    //The pointer was always 1 ahead because the pointer starts at 0
    // I had to make another variable and do a -1 to it
    int number2;

    printf("arg1: ");
    fgets(word1,80,stdin);
    printf("arg2: ");
    fgets(word2,80,stdin);
    printf("arg3: ");
    scanf("%d", &number);

    //This is where I did a -1 the arg3 number
    number2 = number - 1;


    for (i = 0; i < number2; ++i){
        //store word1[i] character in the rev variable
        rev[i] = word1[i];

    }

    //concatinates the new word with the arg2
    strcat(rev,word2);

    printf("altered string: %s", rev);

    return 0;


}