// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct adress{
    char *rue;
    char *ville;
    int code_postal;
};

struct personne{
    char *nom;
    int age;
    struct adress ad;
    
};

struct adress creer_adress(char *ville, char *rue, int code_postal)
{
    struct adress ad;
    
    ad.ville = ville;
    ad.rue = rue;
    ad.code_postal = code_postal;
    
    return ad;
}

struct personne creer_personne(char *nom, int age, struct adress ad)
{ 
    struct personne p;
     
    p.nom= nom;
    p.age=age;
    p.ad= ad;
     
    return p;
}

int main() {
    
    int age, code_postal;
    char nom[31];
    char ville[31];
    char rue[51];

    printf("Entrez le nom du personne: ");
    scanf("%s", nom);
    printf("Entrez l'age du personne: ");
    scanf("%d", &age);
    printf("Entrez le nom de la ville du personne: ");
    scanf("%s", ville);
    printf("Entrez le nom de la rue du personne: ");
    scanf("%s", rue);
    printf("Entrez le code postal du personne: ");
    scanf("%d", &code_postal);
    
    struct adress ad1;
    struct personne p1;

    ad1 = creer_adress(ville, rue, code_postal);

    p1 = creer_personne(nom, age , ad1);
    
    // printf("nom: %s\n", p1.nom);
    // printf("age: %d\n",p1.age);
    // printf("ville: %s\n",p1.ad.ville);
    // printf("rue: %s\n",p1.ad.rue);
    // printf("code postal: %d\n",p1.ad.code_postal);


    return 0;
}