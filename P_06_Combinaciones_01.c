#include<stdio.h>

void fPortada();

int factorial (int x){
    int resultado = 1, i;
    for(i = 1 ; i <= x ; i++){
        resultado = resultado * i;      		            		
    }
    return resultado;
}


main(){
	int opci;
	fPortada();
	do{
	    int n, m, combinaciones, nf, mf, nmf;
	    printf("Dame un valor n (tamanio del conjunto): ");
	    scanf("%d",&n);
	    printf("Dame un valor para m (numero de conbinamciones): ");
	    scanf("%d",&m);
	    while(n < m){
	    	printf("No es posible intente de nuevo.\n");
	    	printf("Dame un valor para n ");
	        scanf("%d",&n);
	        printf("Dame un valor para m ");
	        scanf("%d",&m);
	    }
	    nf = factorial(n);
	    mf = factorial(m);
	    nmf = factorial(n - m);
	    combinaciones = nf / (mf * nmf);
	    printf("El numero de combinaciones es: %d\n",combinaciones);
	    printf("\n\tDesea otro calculo?\n");
		printf("\tSi=1\tNo=0\t");
		scanf("%d",&opci);
		while(opci!=1&&opci!=0){
			printf("\n\tLa opcion no es valida.");
		  	printf("\n\tIntente de nuevo.");
		  	printf("\n\tDesea otro calculo?\n");
		    printf("\tSi=1\tNo=0\t");
		    scanf("%d",&opci);
		}
		system("cls");
    }while(opci==1);
}      
void fPortada(){
	system("color f1");
	printf("\n\t\t\tPrograma 06 Calculo de combinaciones");
	printf("\n\t\t\t____________________________________");
	printf("\n\tEste programa te ayudara a calcular el numero de m combinaciones");
	printf("\n\tdentro de un conjunto n.\n\n\n");

	system("pause");
	system("cls");
}    
