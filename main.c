#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//creation de la structure Ennemies
typedef struct {
    char name[100];
    int life;
    int attackPowerMin;
    int attackPowerMax;
    int defence;

}Enemie;

typedef struct{
    int nbEnemies;
}Enemies;

int main(){
//seed random pour generez un nombre aléatoire
srand(time(0));
//generer un nombre aléatoire entre 1 et 3 (pour le nombre d'ennemies)
Enemies nbEnemies={(rand() % 3)+1};
//generer le statistique pour l'ennemie
Enemie enemie={"",(rand() % 5000)+1,(rand() % 1)+1,(rand() % 250)+1,(rand() % 10)+1};

printf("%d",enemie.life);

    return 0;
}