#include <stdio.h>
int main(){
    int m1 , j2 , a1 ;
    int m2 , j1 , a2 ;
    printf("entrez la date 1 (jj/mm/aaaa):\n");
    scanf("%d/%d/%d", &j1, &m1, &a1);
    printf("entrez la date 2 (jj/mm/aaaa):\n");
    scanf("%d/%d/%d", &j2, &m2, &a2);
    if (a1 < a2)
    {
        printf("la date la plus recente est: %d/%d/%d\n", j1, m1, a1);
    }
    else if (a1 == a2 && m1 < m2)
    {
        printf("la date la plus recente est: %d/%d/%d\n", j1, m1, a1);
    }
    else if (a1 == a2 && m1 == m2 && j1 < j2)
    {
        printf("la date la plus recente est: %d/%d/%d\n", j1, m1, a1);
    }
    else
    {
        printf("la date la plus recente est: %d/%d/%d\n", j2, m2, a2);
    }
    
}
