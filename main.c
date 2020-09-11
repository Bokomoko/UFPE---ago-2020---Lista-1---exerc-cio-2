#include <stdio.h>
#include <string.h>
/*

2. (a) Crie uma estrutura Pessoa, com os campos nome e idade.
(b) Implemente a função void copia(Pessoa* p1, Pessoa* p2) que
copia os dados de p1 em p2. Teste a fun¸c˜ao na main().
(c) Por que as estruturas s˜ao passadas como ponteiros? Pode responder diretamente no c´odigo, como coment´ario.



*/
typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    char nome[30];
    int idade;    // define o campo Idade
} Pessoa;

void copia( Pessoa *p1 , Pessoa *p2 ) {
    p1->idade = p2->idade ;
    strcpy(p1->nome,p2->nome);
}

int main(void) {
  Pessoa umaPessoa, outraPessoa;

  strcpy(umaPessoa.nome, "Murilo");
  umaPessoa.idade = 27;

  strcpy(outraPessoa.nome, "João");
  outraPessoa.idade = 55;

  printf("Uma pessoa nome %s , idade %i \n" , umaPessoa.nome,umaPessoa.idade);

  printf("Outra pessoa nome %s , idade %i \n" , outraPessoa.nome,outraPessoa.idade);

  copia(&umaPessoa,&outraPessoa);

  printf("Uma pessoa nome %s , idade %i \n" , umaPessoa.nome,umaPessoa.idade);

  return 0;
}