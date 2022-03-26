#include <stdio.h>

typedef  struct {
  char rua[100];
  int number;
} address;

typedef  struct {
  char name[100];
  int age;

  address endereco;
} person;

int main(void) {

  person person1;

  printf("==========================================\n");

  printf("Digite seu nome: ");
  fflush(stdin);
  fgets(person1.name, 100, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &person1.age);

  printf("Digite o numero do seu endereço: ");
  scanf("%d", &person1.endereco.number);

  getchar();

  printf("Digite o seu endereço: ");
  fflush(stdin);
  fgets(person1.endereco.rua, 100, stdin);

  printf("==========================================\n");
  
  printf("Seu nome é: %s  \n", person1.name);
  printf("Sua idade é %d \n", person1.age);
  printf("o numero do seu endereço é:  %d \n", person1.endereco.number);
  printf("A sua rua e: %s \n", person1.endereco.rua);
  
  
  return 0;
}