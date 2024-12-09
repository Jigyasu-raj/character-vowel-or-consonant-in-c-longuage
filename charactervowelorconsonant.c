#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character  ");
    scanf("%c",&ch);
    if(ch=="a" ||ch=="A"||ch=="e"||ch=="E"||ch=="i"||ch=="I"||ch=="o"||ch=="O"||ch=="u"||ch=="U")
    {
        printf("Character is vowel ");
    }
    else{
        printf("Character is consonant ");
    }
    return 0;
}