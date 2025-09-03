#include <stdio.h>
int main(){
    int n , i ;
    printf("entrez un nombre entier positif:\n");
    scanf("%d", &n);
    for ( i = 2; i*i <= n; i+=2)
    {
        printf(" les carres de n est: %d\n", i*i);
    }
    
    return 0 ;
}