#include <stdio.h>
#define TF 2


struct funcionario{
	
	char nome[100];
	int matricula;
	char ocupacao[100];
	int idade;
	char sexo[1];
	int ativo;
	
};

void carrega_registros(struct funcionario registro_funcionario[TF]){
	
	
	
	int i;
	
	printf("<<<Registrar Funcionarios>>>\n\n");
	
	
	
		for(i = 0; i < TF; i++){
			printf("Registro[%d]: \n", i);
			
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
	
	printf("Escolha o registro o qual quer alterar: \n");
	scanf("%i", &registro);
	
	if(registro_funcionario[registro].nome == 0){
		printf("Registro invalido. Tente novamente");
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
			
			printf("Gravando registros no arquivo...\n\n");
	
		}
	}
	
	
	
}

void excluir_registro(struct funcionario registro_funcionario[TF]){
	
	int registro, opcao;
	
	printf("Escolha o registro o qual quer excluir: \n");
	scanf("%i", &registro);
	
	printf("Registro %d\n", registro);
		
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
	
	
	if(registro_funcionario[registro].ativo == 0){
		
	
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
		
	if(registro_funcionario[i].ativo != 0){
	
		
		printf("Registro %d\n", i);
		
		printf("Nome: %s\n", registro_funcionario[i].nome);
		
		printf("Idade: %d\n", registro_funcionario[i].idade);
		
		printf("Sexo: %s\n", registro_funcionario[i].sexo);
		
		printf("Matricula: %d\n", registro_funcionario[i].matricula);
		
		printf("Ocupacao: %s\n", registro_funcionario[i].ocupacao);
		
		printf("Ativo: %d\n", registro_funcionario[i].ativo);
		
	}
		
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
	
	arq = fopen("funcionario.txt", "a");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo!\n");
	} else{
		
		for(i = 0; i < TF; i++){
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
