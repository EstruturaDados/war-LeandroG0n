#include <stdio.h>
#include <string.h>

struct Territorio{
char nome[30];
char cor[10];
int tropas;
};

int main(){
printf("Bem vindo ao jogo War, estruturado em dados.\n");

// Recebimentos dos dados de cada território
struct Territorio territorios[5];
for(int i = 0; i <5; i++){

printf("Cadastro do território:\n");

printf("Digite o nome do território:\n");
scanf("%s", territorios[i].nome);

printf("Digite a cor deste território:\n");
scanf("%s", territorios[i].cor);

printf("Digite o número de tropas deste território:\n");
scanf("%d", &territorios[i].tropas);
}

//Exibindo dados recebidos
for(int i=0;i < 5; i++){
printf("Nome: %s \n Cor: %s \n Tropas: %d\n", territorios[i].nome, territorios[i].cor, territorios[i].tropas);
}

return 0;
}

