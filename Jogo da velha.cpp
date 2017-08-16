#include<stdio.h>
#include<stdlib.h>
main(){
	char ve[3][3];
	int x, y, j=1, jw=0, cont;
	
	printf("x: colunas\ny:linhas\n\n");
	for(y=0; y<3; y++){
			for(x=0; x<3; x++){
					ve[y][x]=' ';
			}
	}
	for(cont=0; cont<9; cont++){
			printf(" %c | %c | %c \n - - - - -\n %c | %c | %c \n - - - - -\n %c | %c | %c ", ve[0][0],ve[0][1],ve[0][2],ve[1][0],ve[1][1],ve[1][2],ve[2][0],ve[2][1],ve[2][2]);
			printf("\nJogador %d:\n", j);
			printf("digite x: ");
			scanf("%d", &x);
			printf("digite y: ");
			scanf("%d", &y);
			if(j==1){
					if(ve[y-1][x-1]=='x'||ve[y-1][x-1]=='o'){
							printf("posiçao invalida\n");
							cont--;
					}else{
							ve[y-1][x-1]='x';
							j=2;
					}
			}else{
					if(ve[y-1][x-1]=='x'||ve[y-1][x-1]=='o'){
							printf("posiçao invalida\n");
							cont--;
				  	}else{
							ve[y-1][x-1]='o';
							j=1;
					}
			}
			for(x=0;x<3;x++){
					if(ve[0][x]=='x'&&ve[1][x]=='x'&&ve[2][x]=='x'){
							printf("\njogador 1 ganhou\n\n");
							cont=10;
							jw=1;
					}
					if(ve[x][0]=='x'&&ve[x][1]=='x'&&ve[x][2]=='x'){
							printf("\njogador 1 ganhou\n\n");
							cont=10;
							jw=1;
					}
					if(ve[0][x]=='o'&&ve[1][x]=='o'&&ve[2][x]=='o'){
							printf("\njogador 2 ganhou\n\n");
							cont=10;
							jw=1;
					}
					if(ve[x][0]=='o'&&ve[x][1]=='o'&&ve[x][2]=='o'){
							printf("\njogador 2 ganhou\n\n");
							cont=10;
							jw=1;
					}
			}
			if(ve[0][0]=='x'&&ve[1][1]=='x'&&ve[2][2]=='x'||ve[0][2]=='x'&&ve[1][1]=='x'&&ve[2][0]=='x'){
					printf("\njogador 1 ganhou\n\n");
					cont=10;
					jw=1;
			}
			if(ve[0][0]=='o'&&ve[1][1]=='o'&&ve[2][2]=='o'||ve[0][2]=='o'&&ve[1][1]=='o'&&ve[2][0]=='o'){
					printf("\njogador 2 ganhou\n\n");
					cont=10;
					jw=1;
			}
	}
	printf(" %c | %c | %c \n - - - - -\n %c | %c | %c \n - - - - -\n %c | %c | %c ", ve[0][0],ve[0][1],ve[0][2],ve[1][0],ve[1][1],ve[1][2],ve[2][0],ve[2][1],ve[2][2]);
	if(jw==0){
			printf("\nVelha\n\n");
	}
	system("pause");
}
