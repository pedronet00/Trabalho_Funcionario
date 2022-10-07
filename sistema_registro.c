#include <stdio.h>
#define TF 3


struct funcionario{
	
	int id;
	char nome[100];
	int matricula;
	char ocupacao[100];
	int idade;
	char sexo[1];
	int ativo;
	
};

void ler_arquivo(){
	
	FILE*arq;
	
	char conteudo[200];
	
	
	system("cls");
	
	printf("<<<Ler Arquivo>>>\n\n\n");
	
	arq = fopen("registro_funcionario.bin", "rb");
	
	if(arq == NULL){
		printf("Erro de abertura!");
	} else{
		fscanf(arq, "%s", conteudo);
	}
		
		
	}
void carrega_registros(struct funcionario registro_funcionario[TF]){
	
	
	
	int i;
	
	printf("<<<Registrar Funcionarios>>>\n\n");
	
	for(i = 0; i < TF; i++){
	

			printf("Informe o ID do registro do funcionario: \n");
			scanf("%d", &registro_funcionario[i].id);
			
			printf("Informe o nome do funcionario: \n");
			fflush(stdin);
			gets(registro_funcionario[i].nome);
			
			printf("Informe a idade do funcionario: \n");
			scanf("%d", &registro_funcionario[i].idade);
			
			printf("Informe o sexo do funcionario: \n");
			fflush(stdin);
			gets(registro_funcionario[i].sexo);
			
			printf("Informe a matricula do aluno: \n");
			scanf("%d", &registro_funcionario[i].matricula);
			
			printf("Informe a ocupacao do funcionario: \n");
			fflush(stdin);
			gets(registro_funcionario[i].ocupacao);
			
			printf("Ativo? 0 = NAO, 1 = SIM\n");
			scanf("%d", &registro_funcionario[i].ativo);
			
			printf("\n\n");
}

	
	system("cls");
}

void alterar_registro(struct funcionario registro_funcionario[TF]){
	
	
	FILE *arq;
	
	int i, registro, opcao;
	
	char mudanca[50];
	
	printf("Escolha o registro o qual quer alterar: \n");
	scanf("%i", &registro);
	
	if(registro > TF){
		printf("Registro invalido.");
	} else{
		printf("Registro %d\n", registro);
		
		printf("Nome: %s\n", registro_funcionario[registro].nome);
		
		printf("Idade: %d\n", registro_funcionario[registro].idade);
		
		printf("Sexo: %s\n", registro_funcionario[registro].sexo);
		
		printf("Matricula: %d\n", registro_funcionario[registro].matricula);
		
		printf("Ocupacao: %s\n", registro_funcionario[registro].ocupacao);
		
		printf("Ativo: %i\n", registro_funcionario[registro].ativo);
		
		printf("\n\n");
		
		printf("Eh esse que voce quer alterar? 0 = NAO, 1 = SIM\n");
		scanf("%d", &opcao);
		
		if(opcao == 1){
		
			
			printf("Qual campo voce deseja alterar? \n");
			fflush(stdin);
			gets(&mudanca);
		}
			switch('&mudanca'){
				
				case 'nome':
					printf("Informe o nome do funcionario: \n");
					fflush(stdin);
					gets(registro_funcionario[registro].nome);
				break;
				
				case 'idade':
					printf("Informe a idade do funcionario: \n");
					scanf("%d", &registro_funcionario[registro].idade);
				break;	
					
				case 'sexo':
					printf("Informe o sexo do funcionario: \n");
					fflush(stdin);
					gets(registro_funcionario[registro].sexo);
				break;
				
				case 'matricula':
					printf("Informe a matricula do aluno: \n");
					scanf("%d", &registro_funcionario[registro].matricula);
				break;
				
				case 'ocupacao':
					printf("Informe a ocupacao do funcionario: \n");
					fflush(stdin);
					gets(registro_funcionario[registro].ocupacao);
				break;
				
				case 'ativo':
					printf("Para alterar este campo, voce deve excluir o registro!");
				break;
					
			}
				
				printf("Gravando registros no arquivo...\n\n");
		
			system("cls");
	}
	
	
	
}

void excluir_registro(struct funcionario registro_funcionario[TF]){
	
	int registro, opcao;
	
	printf("Escolha o registro o qual quer excluir: \n");
	scanf("%i", &registro);
	
	printf("Registro %d\n", registro);
	
		printf("Id: %d\n", registro_funcionario[registro].id);
		
		printf("Nome: %s\n", registro_funcionario[registro].nome);
		
		printf("Idade: %d\n", registro_funcionario[registro].idade);
		
		printf("Sexo: %s\n", registro_funcionario[registro].sexo);
		
		printf("Matricula: %d\n", registro_funcionario[registro].matricula);
		
		printf("Ocupacao: %s\n", registro_funcionario[registro].ocupacao);
		
		printf("Ativo: %d\n", registro_funcionario[registro].ativo);
		
		printf("\n\n");
	
	printf("Eh esse que voce quer excluir? 0 = NAO, 1 = SIM\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		registro_funcionario[registro].ativo == 0;
		
	}
}

void exibir_excluidos(struct funcionario registro_funcionario[TF]){
	
	int registro;
	
	printf("Escolha o registro o qual voce quer ver: \n");
	scanf("%i", &registro);
	
	
	if(registro_funcionario[registro].ativo == 1){
		
	
			printf("Registro %d\n", registro);
			
			printf("Nome: %s\n", registro_funcionario[registro].nome);
			
			printf("Idade: %d\n", registro_funcionario[registro].idade);
			
			printf("Sexo: %s\n", registro_funcionario[registro].sexo);
			
			printf("Matricula: %d\n", registro_funcionario[registro].matricula);
			
			printf("Ocupacao: %s\n", registro_funcionario[registro].ocupacao);
			
			printf("Ativo: %d\n", registro_funcionario[registro].ativo);
	} else{
		printf("Este registro nao esta excluido!");
	}
}

void exibir_registros(struct funcionario registro_funcionario[TF]){
	
	int i;
	
	printf("<<<Exibir Registros de Funcionarios>>>\n\n");
	
	for(i = 0; i < TF; i++){
		
	//if(registro_funcionario[i].ativo != 0){
	
		
		printf("Registro %d\n", i);
		
		printf("Nome: %s\n", registro_funcionario[i].nome);
		
		printf("Idade: %d\n", registro_funcionario[i].idade);
		
		printf("Sexo: %s\n", registro_funcionario[i].sexo);
		
		printf("Matricula: %d\n", registro_funcionario[i].matricula);
		
		printf("Ocupacao: %s\n", registro_funcionario[i].ocupacao);
		
		printf("Ativo: %d\n", registro_funcionario[i].ativo);
		
//	}
		
		printf("\n\n");
	}
}

void recuperar_registro(struct funcionario registro_funcionario[TF]){
	
	int registro;
	
	printf("Selecione o registro o qual voce quer recuperar: \n");
	scanf("%i", &registro);
	
	printf("Registro %d\n", registro);
		
		printf("Nome: %s\n", registro_funcionario[registro].nome);
		
		printf("Idade: %d\n", registro_funcionario[registro].idade);
		
		printf("Sexo: %s\n", registro_funcionario[registro].sexo);
		
		printf("Matricula: %d\n", registro_funcionario[registro].matricula);
		
		printf("Ocupacao: %s\n", registro_funcionario[registro].ocupacao);
		
		printf("Ativo: %s\n", registro_funcionario[registro].ativo);
	
}

void gravar_arquivo(struct funcionario registro_funcionario[TF]){
	
	
	FILE *arq;
	int i;
	
	system("cls");
	
	printf("Gravando registros no arquivo...\n\n");
	
	arq = fopen("registro_funcionario.bin", "a+");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo!\n");
	} else{
		
		for(i = 0; i < TF-1; i++){
			fwrite(&registro_funcionario[i], sizeof(struct funcionario), 1, arq);
		}
		fclose(arq);
		
		printf("Registros gravados com sucesso!\n");
	}
	
	system("pause");
}

void main(){
	
	
	int escolha, continuar = 1;
	
	struct funcionario registro_funcionario[TF];
	
	ler_arquivo(registro_funcionario);
do{	

	printf("O que voce deseja fazer? \n");
	printf("1) Gravar novo registro\n");
	printf("2) Exibir registros ja criados\n");
	printf("3) Excluir registro\n");
	printf("4) Exibir registros excluidos\n");
	printf("5) Alterar registro\n");
	printf("6) Recuperar registro\n");
	printf("7) Nome do criador\n");
	printf("8) Sair\n");
	scanf("%i", &escolha);
	

	switch(escolha){
			case 1:
				carrega_registros(registro_funcionario);
				gravar_arquivo(registro_funcionario);
			break;
			
			case 2:
				exibir_registros(registro_funcionario);
			break;
			
			case 3:
				excluir_registro(registro_funcionario);
				gravar_arquivo(registro_funcionario);
			break;
			
			case 4:
				exibir_excluidos(registro_funcionario);
			break;
			
			case 5:
				alterar_registro(registro_funcionario);
				gravar_arquivo(registro_funcionario);
			break;
			
			case 6:
				recuperar_registro(registro_funcionario);
			break;
			
			case 7:
				printf("\nPedro Stabile Neto, 4o termo SI\n\n");
			break;
			
			case 8:
				printf("\nAte mais!");
			break;
			
			default:
				printf("\nOpcao invalida!\n\n");
			break;
		}
		

		
		
} while(escolha != 8);
	
}
