#include <stdio.h> 

void soma (float valor1, float valor2){
	float resultado;
	resultado = valor1+valor2;
	printf("Resultado da soma: %.2f\n",resultado);
}

void subtracao (float valor1, float valor2){
	float resultado;
	resultado = valor1-valor2;
	printf("Resultado da subtracao: %.2f\n",resultado);
}

void multiplicacao (float valor1, float valor2)
{
	float resultado;
	resultado = valor1*valor2;
	printf("Resultado da multiplicacao: %.2f\n",resultado);
}

void divisao (float valor1, float valor2){
	float resultado;
	resultado = valor1/valor2;
	printf("Resultado da divisao: %.2f\n",resultado);
}


int main () { 

  

  char operacao; 

  float valor1, valor2, resultado; 

  int continuar; 

  continuar = 1; 

   

  while(continuar){ 

       

   

printf ("Escolha a operação (+, -, *, /) :"); 

scanf (" %c", &operacao); 

  

printf ("Digite o primeiro numero: "); 

scanf ("%f", &valor1); 

  

printf ("Digite o segundo numero: "); 

scanf ("%f", &valor2); 

  

switch (operacao) { 

  

  case '+':

soma(valor1, valor2);

break; 

  case 'p':
subtracao(valor1, valor2);
break;

  case '-':

subtracao(valor1, valor2);
break; 

  

  case '*': 

multiplicacao(valor1, valor2);
break; 

  case '/': 

if (valor1 != 0 && valor2 != 0) { 

       divisao(valor1, valor2);	

} else { 

  printf ("Erro:não e possivel divisao por zero\n"); 
} 

break; 

  default: 

printf ("erro");  

}
                     
  printf ("\ndeseja continuar? Caso queira continuar digite 1, do contratrio digite 0. "); 

  scanf ("%d",&continuar); 

  }
}

 
