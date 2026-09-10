#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
 int Valor, Dd,Mm,Yy,Menu ;

 struct Empresa {
   char nome [40];
   char info [250];
   char Id [10];

 };

 struct Add {
  printf("Nome da empresa\n");
  fgets (Empresa.nome[40])
 };

 struct Edit {

 };

 struct Encerrar {
  return 0;
 };

  struct CleanBuffer{
  int c;
  while ((c=getchar()) != '\n' && c != EOF {}
};

  printf("  ===Busyness Maneger===   \n");
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
    
      break;
   
    case 3:

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
