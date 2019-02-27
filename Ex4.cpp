//Exercicio Bonus

#include <stdio.h>

int main() 
{
	int AD, SUB, MULT, DIV, A, B, C, O;

	printf("Para a funcoes, digite o numero correspondente: \n 1.Adicao\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n\n");
	
	scanf("%i",&O);
	
	printf("De o valor do seu primeiro numero:\n ");
	
	scanf("%i", &A);
	
	printf("De o valor do segundo numero:\n ");

	scanf("%i", &B);
	
	if (O==1)
	{
		AD = (A + B);
		printf("O resultado eh: %d\n", AD);
		
	}
	else
	{
		if (O==2)
		{
			SUB = (A - B);
			printf("O resultado eh: %d\n", SUB);
		 } 
		 
		else
		 {
		 
		 	if (O==3)
		 	{
		 		MULT = (A * B);
		 		printf("O resultado eh: %d\n", MULT);
			 }
			 
			 else
			 {
			 	DIV = A / B;
			 	printf("O resultado eh: %d\n", DIV);
			 }
	    }
		}
		
		
	
	


	
	return 1;
}	

