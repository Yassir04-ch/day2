#include <stdio.h>

int main() {
int GS1 , IG , CE, NA , CC;
printf("entrez l'ISBN:\n");
scanf("%d-%d-%d-%d-%d", &GS1, &IG, &CE, &NA, &CC);
printf("le prefixe GS1 est: %d\n", GS1);
printf("le identifiant de group est: %d\n", IG);
printf("le code de l'editeur est: %d\n", CE);
printf("le numero d'article est: %d\n", NA);
printf("le chiffre de controle est: %d\n", CC);

    return 0;
}