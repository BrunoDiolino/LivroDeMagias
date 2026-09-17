#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Acervo[20]

int main(){
 
 struct Data {
 int Dia,Mes,Ano;
};
 
 struct Empresa {
   char nome [40];
   char info [250];
   char Id [10];

 };

 struct Navegar {
  printf("%); 
 };

 struct Add {
  printf("Nome da empresa:\n");
  fgets (Empresa.nome)
  
  printf("Informações da empresa:\n");
  fgets (Empresa.info)

  printf("Id:\n");
  fgets(Empresa.Id)
    return 0;
 };

 struct Edit {
  printf("Qual empresa gostaria de editar ?\n");
  
 };

 struct Encerrar {
  return 0;
 };

  struct CleanBuffer{
  int c;
  while ((c=getchar()) != '\n' && c != EOF {}
};

  printf("  ===Bussyness Maneger===   \n");
  printf("MENU:                      \n");
  printf("1.Navegar\n");
  printf("2.Adicoinar\n");
  printf("3.Editar\n")
  printf("4.Limpar Buffer\n");
  printf("5.Encerrar \n");
  sscanf("%d" &Menu);
  printf("____________/__/___________\n");

  switch (Menu) {
    case 1:

      break;
    
    case 2:
    fgets(Add)
      break;
   
    case 3:
      fgets(Edit);
      break;

    case 4: 
      fgets(CleanBuffer);
      break;

    case 5:
      fgets(Encerrar);
      break;

      default:
      printf("Valor invalido\n");
  }

  return 0
}
