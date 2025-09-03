#include <stdio.h>
int main (){
    int numerateur, denominateur;
    int r , a , b;
    printf("entrez le numerateur et le denominateur:\n");
    scanf("%d/%d", &numerateur, &denominateur);
    a = numerateur;
    b = denominateur;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    numerateur = numerateur / a ;
    denominateur = denominateur / a;

    printf("La fraction simplifiee est: %d/%d\n", numerateur, denominateur);
    return 0;
}
