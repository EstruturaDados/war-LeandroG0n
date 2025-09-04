#include <stdio.h>
#include <string.h>

struct Territorio{
char nome[30];
char cor[10];
int tropas;
};

int main(){
printf("Bem vindo ao projeto War, estruturado em dados.\n");

// Recebimentos dos dados de cada território
struct Territorio *territorios;
territorios = (struct Territorio*) calloc(5, sizeof(struct Territorio)); // Criação de ponteiro para territorios

for(int i = 0; i <5; i++){
printf("Cadastro do território:\n", i + 1);

printf("Digite o nome do território:\n");
scanf("%s", territorios[i].nome);

printf("Digite a cor deste território:\n");
scanf("%s", territorios[i].cor);

printf("Digite o número de tropas deste território:\n");
scanf("%d", &territorios[i].tropas);

printf("\n"); //Só pela organização
}

//Exibindo dados recebidos
for(int i=0;i < 5; i++){
printf("Nome: %s \n Cor: %s \n Tropas: %d\n", territorios[i].nome, territorios[i].cor, territorios[i].tropas);
}

return 0;
}

