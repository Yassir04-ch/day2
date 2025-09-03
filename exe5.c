 #include <stdio.h>
 int main (){
    int m , n , r;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &m, &n);
    while(n !=0){
        r = m % n;
        m = n;
        n = r;
    }
    printf("Le GCD est: %d\n", m);
    return 0;
 }