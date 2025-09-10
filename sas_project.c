#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    int ID;
    char nom[50];
    char prenom[50];
    int maillot;
    char poste[30];
    int age ;
    int but ;
}players;
int ajoute(players player[],int nb_joueur){
    int choice=0;

    system("cls");
                printf("<========>Ajouter un joueur<========>\n");
                printf("1. Ajouter un nouveau joueur .\n");
                printf("2. Ajouter plusieur joueur en une seule operation .\n");
                printf("3. Retourner au Menu Principal .\n");
                printf("saisir votre choix : ");
                scanf("%d",&choice);
                switch(choice){
                    case 1:{
                        system("cls");
                        int index = nb_joueur;
                        int pst = 0;
                        player[index].ID = index + 1 ;
                        printf("saisire le nom du joueur : ");
                        scanf("%s",player[index].nom);
                        system("cls");
                        printf("saisir le prenom du joueur : ");
                        scanf("%s",player[index].prenom);
                        system("cls");
                        printf("saisir le nombre de maillot du joueur : ");
                        scanf("%d",&player[index].maillot);
                        system("cls");
                        while(1) {
                                printf("<========>post du joueur<========>\n1. gardien\n2. milieu\n3. attaquant\n4. defenseur\n");
                                printf("Choisir le poste : ");
                                scanf("%d", &pst);
                                if(pst == 1){ 
                                    strcpy(player[index].poste,"gardien"); 
                                    break;
                                }
                                if(pst == 2){ 
                                    strcpy(player[index].poste,"milieu");
                                    break;
                                }
                                if(pst == 3){ 
                                    strcpy(player[index].poste,"attaquant");
                                    break;
                                }
                                if(pst == 4){ 
                                    strcpy(player[index].poste,"defenseur"); 
                                    break;
                                }
                                printf("Erreur de saisie !\n");
                            }
                        
                        printf("saisir age du joueur : ");
                            scanf("%d",&player[index].age);
                            printf("saisir le nombre de but :");
                            scanf("%d",&player[index].but);
                            nb_joueur++;
                        break;
                    } 
                    case 2:{
                        system("cls");
                        int n=0,j=0;
                        int index = nb_joueur;
                        printf("combien de joueur tu veux ajouter : ");
                        scanf("%d",&n);
                        for(j=index;j<index+n;j++){
                             
                            int pst = 0;
                            player[j].ID=j+1;
                            printf("saisire le nom du joueur : ");
                            scanf("%s",player[j].nom);
                            system("cls");
                            printf("saisir le prenom du joueur : ");
                            scanf("%s",player[j].prenom);
                            system("cls");
                            printf("saisir le nombre de maillot du joueur : ");
                            scanf("%d",&player[j].maillot);
                            system("cls");
                            while(1) {
                                printf("Poste du joueur :\n1. gardien\n2. milieu\n3. attaquant\n4. defenseur\n");
                                printf("Choisir le poste : ");
                                scanf("%d", &pst);
                                if(pst == 1){ 
                                    strcpy(player[j].poste,"gardien"); 
                                    break;
                                }
                                if(pst == 2){ 
                                    strcpy(player[j].poste,"milieu");
                                    break;
                                }
                                if(pst == 3){ 
                                    strcpy(player[j].poste,"attaquant");
                                    break;
                                }
                                if(pst == 4){ 
                                    strcpy(player[j].poste,"defenseur"); 
                                    break;
                                }
                                printf("Erreur de saisie !\n");
                            }
                            system("cls");
                            printf("saisir age du joueur : ");
                            scanf("%d",&player[j].age);
                            system("cls");
                            printf("saisir le nombre de but :");
                            scanf("%d",&player[j].but);
                            system("cls");
                         nb_joueur++;   
                        }
                        break;
                    }
                    case 3:{
                        system("cls");
                        break;
                    }
                    default:{
                        printf("!! ERREUR DE SAISIE !!");
                        system("pause");
                        system("cls");
                        break;
                    }      
                }
                return nb_joueur;
            }                    
void afficher (players player [],int nb_joueur){
    int choi=0,i,j;
    players c ;
    printf("<========>Menu Affichage<========>\n");
    printf("1. Trier les joueurs par ordre alphabetique (Nom) .\n");
    printf("2. Trier les joueurs par age .\n");
    printf("3. Afficher les joueurs par poste.\n");
    printf("4. Retourner au Menu Principal .\n");
                printf("saisir votre choix : ");
                scanf("%d",&choi);
                switch(choi){
                    case 1:{
                        for(i=0;i<nb_joueur-1;i++){
                            for(j=0;j<nb_joueur-i-1;j++){
                                if(strcmp(player[j].nom,player[j+1].nom)>0){
                                    c=player[j];
                                    player[j]=player[j+1];
                                    player[j+1]=c;
                                }
                            }
                        }
                        system("cls");
                        for(i=0;i<nb_joueur;i++){
                             printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                        }
                        system("pause");
                        break;
                    }
                    case 2:{
                        for(i=0;i<nb_joueur-1;i++){
                            for(j=0;j<nb_joueur-i-1;j++){
                                if(player[j].age >player[j+1].age){
                                    c=player[j];
                                    player[j]=player[j+1];
                                    player[j+1]=c;
                                }
                            }
                        }
                        system("cls");
                        for(i=0;i<nb_joueur;i++){
                             printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                        }
                        system("pause");
                        break;
                    }
                    case 3:{
                        int psts;
                        while(1) {
                                printf("Poste du joueur :\n1. gardien\n2. milieu\n3. attaquant\n4. defenseur\n");
                                printf("Choisir le poste : ");
                                scanf("%d", &psts);
                                if(psts == 1){ 
                                    for(i=0;i<nb_joueur;i++){
                                        if(strcmp(player[i].poste,"gardien")==0){
                                            printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                                        }
                                    }
                                    system("pause");
                                    break;
                                }
                                if(psts == 2){ 
                                    for(i=0;i<nb_joueur;i++){
                                        if(strcmp(player[i].poste,"milieu")==0){
                                            printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                                        }
                                    }
                                    system("pause");
                                    break;
                                }
                                if(psts == 3){ 
                                    for(i=0;i<nb_joueur;i++){
                                        if(strcmp(player[i].poste,"attaquant")==0){
                                            printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                                        }
                                    }
                                    system("pause");
                                    break;
                                }
                                if(psts == 4){ 
                                    for(i=0;i<nb_joueur;i++){
                                        if(strcmp(player[i].poste,"defenseur")==0){
                                            printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                                        }
                                    }
                                    system("pause"); 
                                    break;
                                }
                                if(psts==5){
                                    break;
                                }
                                printf("Erreur de saisie !\n");
                            }
                        break;
                    }
                    case 4:{
                        break;
                    }
                    default:{
                        system("cls");
                        printf("!!!!  erreur de saisie  !!!!");
                        system("pause");
                        system("cls");
                    }
                }
}      
void modifier (players player [],int nb_joueur){
    int i,ind,x=0;
    printf("saisir l'ID du joueur : ");
    scanf("%d",&ind);
    for(i=0;i<nb_joueur;i++){
        if(player[i].ID==ind){
            x=1;
            int choix = 0;
            printf("<========>Menu de Modification<========>\n");
            printf("1. Modifier le poste d'un joueur .\n");
            printf("2. Modifier l'age d'un joueur .\n");
            printf("3. Modifier le nombre de buts marques par un joueur .\n");
            printf("4. Retourner au Menu Principal .\n");
            printf("valider votre choix : ");
            scanf("%d",&choix);
            switch(choix){
                case 1:{
                    printf("choisir le nouveau post :");
                    while(1) {
                        int pst;
                                printf("Nouveau Poste du joueur :\n1. gardien\n2. milieu\n3. attaquant\n4. defenseur\n");
                                printf("Choisir le poste : ");
                                scanf("%d", &pst);
                                if(pst == 1){ 
                                    strcpy(player[i].poste,"gardien"); 
                                    break;
                                }
                                if(pst == 2){ 
                                    strcpy(player[i].poste,"milieu");
                                    break;
                                }
                                if(pst == 3){ 
                                    strcpy(player[i].poste,"attaquant");
                                    break;
                                }
                                if(pst == 4){ 
                                    strcpy(player[i].poste,"defenseur"); 
                                    break;
                                }
                                printf("Erreur de saisie !\n");
                            }
                    system("pause");
                    system("cls");
                    break;
                }
                case 2:{
                    int new_age;
                    printf("saisir le nouveau age :");
                    scanf("%d",&new_age);
                    player[i].age=new_age;
                    system("pause");
                    system("cls");
                    break;
                }
                case 3:{
                    int new;
                    printf("saisir le nouveau nombre de buts :");
                    scanf("%d",&new);
                    player[i].but=new;
                    system("pause");
                    system("cls");
                    break;
                }
                case 4:{
                    system("cls");
                    break;
                }   
                default:{
                    printf("!!!!erreur de saisie!!!!");
                    break;
                }
            }
        }
    }
    if(x==0){
        system("cls");
        printf("joueur non trouver !");
        system("pause");
        system("cls");
    }
}          
int suprimer (players player [],int nb_joueur){
int i,ind,x=0,j;
    printf("saisir l'ID du joueur : ");
    scanf("%d",&ind);
    for(i=0;i<nb_joueur;i++){
        if(player[i].ID==ind){
            x=1;
            for(j=i;i<nb_joueur;j++){
                player[j]=player[j+1];
            }
            nb_joueur--;
            printf("joueur suprimer :) ");
            system("pause");
            break;
        }
    }
    if(x==0){
        system("cls");
        printf("\n joueur non trouver !\n");
        system("pause");
        system("cls");
    }
    return nb_joueur;
}
void recherche (players player [],int nb_joueur ){
    int choix,i;
    printf("<========>Menu Recherche<========>\n");
    printf("1. Recherche par idantifiant(ID) du joueur  .\n");
    printf("2. Recherche par le nom du joueur .\n");
    printf("3. Retourner au menu principal .\n");
    printf("valider votre choix :");
    scanf("%d",&choix);
    switch(choix){
        case 1:{
            int n=0,x=0;
            printf("saisir identifiant (ID) du joueur: ");
            scanf("%d",&n);
            for(i=0;i<nb_joueur;i++){
                if(player[i].ID==n){
                    x=1;
                    printf("joueur trouver :\n");
                    printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                }
            }
            if(x==0){
                system("cls");
                printf("\n joueur non trouver !\n");
                system("pause");
                system("cls");
            }
            system("pause");
            break;
        }
        case 2:{
            int x=0;
            char n[40];
            printf("saisir le nom du joueur: ");
            scanf("%s",n);
            for(i=0;i<nb_joueur;i++){
                if(strcmp(player[i].nom,n)==0){
                    x=1;
                    printf("joueur trouver :\n");
                    printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
                }
            }
            if(x==0){
                system("cls");
                printf("\n joueur non trouver !\n");
                system("pause");
                system("cls");
            }
            system("pause");
            break;
        }
        case 3:{
            break;
        }
        default:{
            system("cls");
            printf("!!!!  erreur de saisie  !!!!");
            system("pause");
            system("cls");
        }
    }
}
void statistique(players player [],int nb_joueur){
    int choix=0;
    printf("<========>Menu Statistiques<========>\n");
    printf("1. Afficher le nombre total de joueurs dans l'equipe .");
    printf("2. Afficher l'age moyen des joueurs .");
    printf("3. Afficher les joueur ayant marque plus de X but");
    printf("4. Afficher le meilleur buteur .");
    printf("5. Afficher le joueur le plus jeune et le plus age .");
    printf("6. Retourner au menu principal .");
    printf("choisir votre choix : ");
    scanf("%d",&choix);

}
int main(){
    players player[100]={
        {1,"lionel","messi",10,"attaquant",38,734},
        {2,"cristiano","ronaldo",7,"milieu",40,790},
        {3,"iker","casillas",1,"gardien",44,0},
        {4,"sergio","ramos",4,"defenseur",39,117}
    };
    int choix=0;
    int nb_joueur=4;

    while(1){
        system("cls");
        printf("<========>MENU PRINCIPAL<========>\n");
        printf("1. Ajouter un joueur .\n");
        printf("2. Afficher la liste de tous les joueurs .\n");
        printf("3. modifier un joueur .\n");
        printf("4. Supprimer un joueur .\n");
        printf("5. Recherche un joueur .\n");
        printf("6. statistiques .\n");
        printf("7. QUITTER .\n");
        printf("saisir votre choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1:{
                nb_joueur = ajoute(player, nb_joueur);
                system("pause");
                system("cls");
                break;
            }
            case 2:{
                system("cls");
                afficher(player,nb_joueur);
                system("pause");
                system("cls");
                break;
            }
            case 3:{
                modifier(player,nb_joueur);
                system("pause");
                system("cls");
                break;
            }
            case 4:{
                nb_joueur=suprimer(player,nb_joueur);
                system("pause");
                system("cls");
                break;
            }
            case 5:{
                recherche(player,nb_joueur);
                system("pause");
                system("cls");
                break;
            }
            case 6:{
                
                system("pause");
                system("cls");
                break;
            }
            case 7:{
                
                system("pause");
                system("cls");
                break;
            }
            default:{
                printf("!!!!!!!!ERROR DE SAISIE!!!!!!!!");
                system("pause");
                system("cls");
            }
        }
    }
    return 0;
}

//int i;
   // for(i=0;i<nb_joueur;i++){
    //    printf("ID : %d  | nom : %s | prenom : %s | numero maillot : %d | post : %s | age : %d | nombre de buts : %d\n",player[i].ID,player[i].nom,player[i].prenom,player[i].maillot,player[i].poste,player[i].age,player[i].but);
   // }