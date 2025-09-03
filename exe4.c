#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int note;
    printf("entrez la note numerique: ");
    scanf("%d", &note);


    switch (note /10){
        case 10:
        case 9:
        printf("le note litterale est A");
        break;
        case 8:
        printf("le note litterale est B");
        break;
        case 7:
        printf("le note litterale  est C");
        break;
        case 6:
        printf("le note litterale est D");
        break;
        default: 
        printf("le note litterale  est F");
        break;

    }
    
    
    return 0;
}