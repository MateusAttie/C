#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    char x;
    printf("Digite uma letra\n\n");
    scanf("%c",&x);
    x=tolower(x);
    if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u' )
    printf("Sua letra eh uma vogal\n\n");
    else
    printf("Sua letra nao eh uma vogal\n\n");
    
    
    system("PAUSE");
    return (0);
}
