#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int opcao,opcao1,opcao2,opcao3,opcao4,i,quant;
	
	struct referencia{
		
		char nome0[100],nome1[100],nome2[100],nome3[100],nome4[100];
	}
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
		 char nome5[100];
		 
		 system("cls");
		 printf("Nome do Atendente: ");
		 fflush(stdin);
		 scanf("%[^\n]s", &nome5);
		 printf("Senha da Loja: ");
		 scanf("%d", &opcao3);
		 
		 switch(opcao3){
		 	case 123456:
		 	
			 while(opcao!=6){
			 	while(opcao2!=2||opcao2!=1){
			 		system("color F4");
			 		system("cls");
			 		
			 		printf("-----------------------------------------------------------------------------------------------------------------------\n");
			 		printf("\t\t\t\t\t\t    Loja UpkeepCell\n");
			 		printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
			 		printf("\tSeja Bem Vindo, Atendente %s\n\n\n", &nome5);
			 		printf("_______________________________________________________________________________________________________________________\n ");
			 		printf("1-Cadastrar\n ");
			 		printf("2-Exibir Dados\n ");
			 		printf("3-Alterar\n ");
			 		printf("4-Excluir\n ");
			 		printf("5-Informacoes do Sistema\n ");
			 		printf("6-Sair\n ");
			 		printf("----------------------------------------------------------------------------------------------------------------------\n\n");
			 		printf("\nQual opcao voce deseja acessar? ");
			 		scanf("%d", &opcao);
			 		
			 		switch(opcao){
			 			case 1:
			 				system("cls");
			 				printf("\n\n Quantos Cadastros Voce Deseja Realizar? ");
			 				scanf("%d", &quant);
			 				
			 				for(i=1; i<=quant; i++){
			 					system("cls");
			 					printf("\n\n\t\t\t      Iniciando Cadastro %d\n", i);
			 					printf("\t\t\t     ----------------------\n\n");
			 					printf("\n Nome do Comprador: ");
			 					fflush(stdin);
			 					scanf("%[^\n]s", CA [i].nome0);
			 					printf("\n Telefone do Comprador: ");
			 					fflush(stdin);
			 					scanf("%[^\n]s", CA [i].nome1);
			 					printf("\n Marca do Produto: ");
			 					fflush(stdin);
			 					scanf("%[^\n]s", CA [i].nome2);
			 					printf("\n Codigo do Produto: ");
			 					fflush(stdin);
			 					scanf("%[^\n]s", CA [i].nome3);
			 					printf("\n Preco do Produto: ");
			 					fflush(stdin);
			 					scanf("%[^\n]s", CA [i].nome4);
			 					printf("\n\n\t\t");
			 					system("pause");
			 					system("cls");
							 }
							 break;
							 
							 case 2:
							 	system("cls");
							 	
							 	for(i=1; i<=quant; i++){
							 		system("cls");
							 		printf("\n\n\t\t\t     Exibindo Cadastro %d\n", i);
							 		printf("\t\t\t      ----------------\n\n");
							 		printf(" Nome do Comprador : %s\n", CA [i].nome0);
							 		printf("\n Telefone do Comprador : %s\n", CA [i].nome1);
							 		printf("\n Marca do Produto : %s\n", CA [i].nome2);
							 		printf("\n Codigo do Produto : %s\n", CA [i].nome3);
							 		printf("\n Preco do Produto : %s\n\n\n", CA [i].nome4);
							 		system("pause");
							 }
							 break;
								 
							 case 3:
								system("cls");
								 	
								for(i=1; i<=quant; i++){
								 	printf("\n\n\t\t\t      Alterar Cadastro\n");
								 	printf("\t\t\t     ------------------\n\n");
								 	printf(" 1- Nome do Comprador");
								 	printf("\n 2- Telefone do Comprados");
								 	printf("\n 3- Marca do Produto");
								 	printf("\n 4- Codigo do Produto");
								 	printf("\n 5- Preco do Produto");
								 	printf("\nQual Opcao Voce Deseja Acessar? \n");
								 	scanf("%d", &opcao1);
								 	
				switch(opcao1){
					case 1:
						
						for(i=1; i<=quant; i++){
							system("cls");
							printf("\n\n Cadastro %d", i);
							printf("\n Alterar Nome do Comprador: ");
							fflush(stdin);
							scanf("%[^\n]s", &CA [i].nome0);
							printf("\n Novo Nome do Comprador: %s\n\n\t\t");
							system("pause");
						}
						break;
						
						case 2:
						
						for(i=1; i<=quant; i++){
							system("cls");
							printf("\n\n Cadastro %d", i);
							printf("\n Alterar Telefone do Comprador: ");
							fflush(stdin);
							scanf("%[^\n]s", &CA [i].nome1);
							printf("\n Novo Numero de Telefone: %s\n\n\t\t");
							system("pause");
						}
						break;
						
						case 3:
						
						for(i=1; i<=quant; i++){
							system("cls");
							printf("\n\n Cadastro %d", i);
							printf("\n Alterar Marca do Produto: ");
							fflush(stdin);
							scanf("%[^\n]s", &CA [i].nome2);
							printf("\n Nova Marca do Produto: %s\n\n\t\t");
							system("pause");
						}
						break;
						
						case 4:
						
						for(i=1; i<=quant; i++){
							system("cls");
							printf("\n\n Cadastro %d", i);
							printf("\n Alterar Codigo do Produto: ");
							fflush(stdin);
							scanf("%[^\n]s", &CA [i].nome3);
							printf("\n Novo Codigo do Produto: %s\n\n\t\t");
							system("pause");
						}
						break;
						
						case 5:
						
						for(i=1; i<=quant; i++){
							system("cls");
							printf("\n\n Cadastro %d", i);
							printf("\n Alterar Preco do Produto: ");
							fflush(stdin);
							scanf("%[^\n]s", &CA [i].nome4);
							printf("\n Novo Preco do Produto: %s\n\n\t\t");
							system("pause");
						}
						break;
				}				 	
							 }
							 break;
							 
						case 4:
							system("cls");
						
						    for(i=1; i<=quant; i++){
							   printf("\n\n\t\t\t     Excluir Cadastro\n");
							   printf("\t\t\t     ------------------\n\n");
							   printf(" 1- Nome do Comprador");
							   printf("\n 2- Telefone do Comprados");
							   printf("\n 3- Marca do Produto");
							   printf("\n 4- Codigo do Produto");
							   printf("\n 5- Preco do Produto");
							   printf("\n 6- Excluir todos os dados\n\n");
							   printf("Qual Opcao Voce Deseja Acessar? \n");
							   scanf("%d", &opcao4);
							   
				switch(opcao4){
					case 1:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA [i].nome0,0,sizeof(CA [i].nome0));
							printf("Nome do Comprador Excluido!\n\n");
							system("pause");
						}
						break;
						
					case 2:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA[i].nome1,0,sizeof(CA[i].nome1));
							printf("Telefone do Comprador Excluido!\n\n");
							system("pause");
						}
						break;
						
					case 3:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA[i].nome2,0,sizeof(CA[i].nome2));
							printf("Marca do Produto Excluido!\n\n");
							system("pause");
						}
						break;
						
					case 4:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA[i].nome3,0,sizeof(CA[i].nome3));
							printf("Codigo do Produto Excluido!\n\n");
							system("pause");
						}
						break;
						
					case 5:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA[i].nome4,0,sizeof(CA[i].nome4));
							printf("Preco do Produto Excluido!\n\n");
							system("pause");
						}
						break;
						
					case 6:
						for(i=1; i<=quant; i++){
							system("cls");
							memset(&CA[i].nome0,0,sizeof(CA[i].nome0));
							memset(&CA[i].nome1,0,sizeof(CA[i].nome1));
							memset(&CA[i].nome2,0,sizeof(CA[i].nome2));
							memset(&CA[i].nome3,0,sizeof(CA[i].nome3));
							memset(&CA[i].nome4,0,sizeof(CA[i].nome4));
							printf("Todos os dados Excluidos!\n\n");
							system("pause");
						}
						break;					
				}			   
							   
							
						}
						break;
						
					case 5:
						system("cls");
						printf("Componentes: \n\n");
						printf("Beatriz Soares N: 02\n");
						printf("Isabelle Cruz N: 09\n");
						printf("Jose Wesley N: 15\n");
						printf("Jose Wellington N: 16\n");
						printf("Lucas Evangelista N: 25\n");
						printf("Copyringht@2015\n\n");
						system("pause");
						break;
						
					case 6:
						system("cls");
						printf("\n Voce Realmente Deseja Sair do Sistema da Loja?\n\n");
						printf(" 1- Sim\n 2- Nao");
						printf("\n\n ");
						scanf("%d", &opcao2);
						
				switch(opcao2){
					case 1:
						system("cls");
						printf("\n\n Volte Sempre a Loja ! \n\n\n\t\t");
						system("pause");
						return 0;
						break; 
						
				}		
										
							
					 }
				 }
				 break;
			 }	
		 }
	system("pause");
	return 0;	 
}
