#include<stdio.h>
#include<ctype.h>
int main(){
    char mot[50];
int valeurS=0,i;
    char capitalL;
    printf("entrez un mot");
    scanf(" %s",mot);
    i=0;
    while(mot[i]!='\0'){
        capitalL=toupper(mot[i]);
    if(capitalL=='A'||capitalL=='E'||capitalL=='I'||capitalL=='L'||capitalL=='N'||capitalL=='O'||capitalL=='R'||capitalL=='S'||capitalL=='T'||capitalL=='U')    
    valeurS+=1;
    else if (capitalL=='D'||capitalL=='G')
        valeurS+=2;
            else if (capitalL=='B'||capitalL=='C'||capitalL=='M'||capitalL=='P')
        valeurS+=3;
            else if (capitalL=='F'||capitalL=='H'||capitalL=='V'||capitalL=='W'||capitalL=='Y')
        valeurS+=4;
        else if (capitalL=='k')
        valeurS+=5;
        else if (capitalL=='J'||capitalL=='X')
            valeurS+=8;
        else if (capitalL=='Q'||capitalL=='Z')
            valeurS+=10;
            i++;    
    }
    printf("la Valeur Scrabble :%d",valeurS);
    return 0;
}