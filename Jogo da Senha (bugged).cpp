#include<stdio.h>
#include<stdlib.h>
main(){
	int senha[4], us[4], vf[4], cont, cont2, cont3, pc, nc;
	
	printf("Digite uma senha de 4 digitos com numeros de 1 a 6:\n");
	for(cont2=0; cont2<4; cont2++){
			scanf("%d", &senha[cont2]);
	}
	for(cont2=0; cont2<50; cont2++){
			printf("\n");
	}
	printf("Tente descobrir a senha em 10 tentativas usando numeros de 1 a 6:\n");
	for(cont=0;cont<10 ;cont++){
			vf[0]=0;
			vf[1]=0;
			vf[2]=0;
			vf[3]=0;
			pc=0;
			nc=0;
			printf("Tentativa %d\n", cont+1);
			for(cont2=0; cont2<4; cont2++){
					scanf("%d",&us[cont2]);
					if(senha[cont2]==us[cont2]){
							pc++;
							vf[cont2]=7;
							us[cont2]=0;
					}
			}
			for(cont2=0; cont2<4; cont2++){
					for(cont3=0; cont3<4; cont3++){
							if(us[cont2]==senha[cont3]&&vf[cont3]==0){
									nc++;
									vf[cont3]=7;
							}
					}
			}
			printf("Digitos corretos: %d\nDigitos deslocados: %d\n", pc, nc);
			if(pc==4){
					cont=10;
					printf("vitoria do jogador desafiado\n");
					cont3=1;
			}		
	}
	if(cont3!=1){
			printf("Vitoria do jogador desafiante\n");
	}
	system("pause");
}
