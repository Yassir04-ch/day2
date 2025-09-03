#include <stdio.h>
int main (){
int n , a , b;
printf("entrez le nombre en deux chiffres:\n");
scanf("%d", &n);
b = n / 10;
a = n % 10;
n = a * 10 + b;
printf("le nouveau nombre de n est: %d\n", n);

    return 0;
}