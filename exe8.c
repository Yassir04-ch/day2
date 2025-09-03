#include <stdio.h>
int main(){
    char tele[100];
    int i , size ;
    printf("Entrez votre numero de telephone: ");
    scanf("%s",&tele);
    size = sizeof(tele)/sizeof(tele[0]);
    for ( i = 0; i <= size; i++)
    {
        switch (tele[i])
        {
        case 'A': case 'B': case 'C':
            tele[i] = '2';
            break;
        case 'D': case 'E': case 'F':
            tele[i] = '3';
            break;
        case 'G': case 'H': case 'I':
            tele[i] = '4';
            break;
        case 'J': case 'K': case 'L':
            tele[i] = '5';
            break;
        case 'M': case 'N': case 'O':
            tele[i] = '6';
            break;
        case 'P': case 'R': case 'S':
            tele[i] = '7';
            break;
        case 'T': case 'U': case 'V':
            tele[i] = '8';
            break;
        case 'W': case 'X': case 'Y':
            tele[i] = '9';
            break;
        }
        printf("%c", tele[i]);
    }
    

    return 0;
} 