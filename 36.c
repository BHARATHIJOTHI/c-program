#include <stdio.h>

void main()
{
    char ab;
    printf("Enter a character: ");
    scanf("%c", &ab);
    if((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'))
    {
        printf("'%c' is alphabet.", ab);
    }
    else if(ab >= '0' && ab <= '9')
    {
        printf("'%c' is digit.", ab);
    }
    else 
    {
        printf("'%c' is special character.", ab);
    }
}
