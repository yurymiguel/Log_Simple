#include <iostream>



int main() {
	int logado,ativado,desativado;
	char opcao;
	
	printf("Deseja logar na sua conta?  \n");
	scanf("%c",&opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("Conta logada com sucesso\n");
		
	}
      printf("\nDeseja ativar sua conta?  \n");
      scanf("%c",&opcao);
      
     if(opcao == 'S'){
      	ativado = 1;
      printf("Conta ativada com sucesso\n");
	  } 
    
     printf("\nDeseja desativar sua conta?  \n");
      scanf("%c",&opcao);
      
      if(opcao == 'S'){
      	desativado = 1;
      printf("Conta desativada com sucesso\n");
	  } 
	  else{
	  	printf("Progama finalizado\n"); 	
	  }
	  
	  if(logado == 1 && desativado == 1) {
	  	printf("Seja bem vindo\n");
	  	
	  }else {
	  	("Conta desativada,é necessario logar novamente");
	  }
}

































































