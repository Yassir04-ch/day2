#include <stdio.h>
int main (){
    int Td[8]={480,583,679,767,840,945,1140,1305};
    int Ta[8]={616,712,811,900,968,1075,1280,1378};
    int h , m , i , t; 
    printf("entrez l'heure en l'horloge de 24h:\n");
    scanf("%d:%d",&h,&m);
    t=h*60+m;
    for(i=0;i<8;i++){
        if(t>Td[i] && t<Ta[i]){
            printf("l'heure de départ est à %dh:%d\n",Td[i]/60,Td[i]%60);
            printf("l'heure d'arrivée est à %dh:%d\n",Ta[i]/60,Ta[i]%60);
            break;
        }

    }
    return 0;
}