#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
main(){
char ph1[30];
char ph2[30];int n;int coupsv=0;int coupsf=0;
char c; int faute; int i;int niveau;
puts("             Bienvenue au jeu du pendu          ");
puts("          ========MENU========\n          1:Commencer le jeu\n          2:Instructions du jeu\n          ====================     ");
scanf("%d",&n);
if(n==2){puts("          Le jeu de pendu est une jeu dont un joueur donne un mot secret\n          l autre essaye de le deviner en donnant des lettres a chaque fois, mais il a droit de 15 fautes seulement ");}
if(n==1){
puts("          Veuillez choisir le niveau du jeu :          ");
puts("          1:Debutant\n          2:Intermediare\n          3:Expert     ");
scanf("%d",&niveau);
system("pause");
system("cls");
if(niveau==1){puts("Vous avez choisis le niveau facile : ");
	puts("          Maintenant le mot secret peus contenir  que des minuscules\n          Veuiller l entrer(5 lettres):  ");
    scanf("%s",&ph1);system("pause");
system("cls");
    for(i=0;ph1[i]!='\0';i++){
	ph2[i]='*';
}
	}
if(niveau==2){
	puts("         vous avez choisis le niveau moyen ");
	puts("         Maintenant le mot secret peut contenir des majuscules et des minuscules aussi\n          Veuillez l entrer(5 lettres) ");
	scanf("%s",&ph1);system("pause");
system("cls");
	for(i=0;ph1[i]!='\0';i++){
	ph2[i]='*';
}
	}
if(niveau==3){
	puts("          Vous avez choisis le niveau difficile ");
puts("          Maintenant le mot secret peus contenir plus que 5 lettres\n          Veuillez l entrer (Attention max=30)");
scanf("%s",&ph1);system("pause");
system("cls");
for(i=0;ph1[i]!='\0';i++){
	ph2[i]='*';
}
}
puts("          Essayez de deviner le mot ! Ecrivez une lettre :  ");
    c=getch();
do{
coupsv=0;
for(i=0;ph1[i]!='\0';i++){
	if(c==ph1[i]){
		ph2[i]=c;
		coupsv++;
	}
	}
	if(coupsv==0){
		coupsf++;
	}
	puts(ph2);
		if(coupsf==1){
		printf("|");
	}
	if(coupsf==2){
		printf("\n|\n|");
	}
	if(coupsf==3){
		printf("\n|\n|\n|");
	}
	if(coupsf==4){
		printf("\n|\n|\n|\n|");
	}
	if(coupsf==5){
		printf("\n|\n|\n|\n|\n|");
	}
	if(coupsf==6){
		printf("\n|\n|\n|\n|\n|\n|");
	}
	if(coupsf==7){
		printf("\n|\n|\n|\n|\n|\n|\n-");
	}
	if(coupsf==8){
		printf("\n|\n|\n|\n|\n|\n|\n_\n_");
	}
	if(coupsf==9){
		printf("\n|   |\n|\n|\n|\n|\n|\n_\n_");
	}if(coupsf==10){
		printf("\n|   |\n|   O\n|\n|\n|\n|\n_\n_");
	}
	if(coupsf==11){
		printf("\n|   |\n|   O\n|   |\n|\n|\n|\n_\n_");
	}
	if(coupsf==12){
		printf("\n|   |\n|   O\n|   |\n|   -\n|\n|\n_\n_");
	}
	if(coupsf==13){
		printf("\n|   |\n|   O\n|   |\n|   -\n|   |\n|\n   _\n   _");
	}
		if(coupsf==14){
		printf("\n|   |\n|   O\n|   |\n|   -\n|   |\n|   -\n   _\n   _");
		}
	if(coupsf==15){
		printf("\n|   |\n|   O\n|   |\n|   -\n|   |\n|   -\n   _\n   _\n   _\n          TU ES PENDU ! FIN ! ");
		}
	c=getch();
}while(strcmp(ph1,ph2)!=0 && coupsf<=15);
if(strcmp(ph1,ph2)==0){
	puts("          Felicitations ! Vous avez pu trouver le mot secret :D ");
}
}
getch();	
}

