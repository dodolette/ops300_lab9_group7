#include <stdio.h>

int main() {
    char name[80];
    int times;
    int i;

    printf("Enter your name: ");
    fgets(name,80,stdin);
    printf("Enter how many times you want to run this code: ");
    scanf("%d", &times);

    for (i = 0; i < times; ++i){
        printf("%s",name);

    }
    
    return 0;
}