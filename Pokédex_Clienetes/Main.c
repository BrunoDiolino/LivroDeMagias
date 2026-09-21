#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Acervo 20

int main(){
 
 void struct Data() {
 int Dia,Mes,Ano;
  };
 
 struct Empresa {
   char nome [40];
   char info [250];
   char Id [10];

 };

 void struct Navegar () {
  printf("%s\n"); 
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

 void struct Ordenar(){
 
};

  struct CleanBuffer{
  int c;
  while ((c=getchar()) != '\n' && c != EOF {}
  };

  ///Menu
  do{
    printf("  ===Bussyness Maneger===   \n");
    printf("MENU:                      \n");
    printf("1.Navegar\n");
    printf("2.Adicoinar\n");
    printf("3.Editar\n")
    printf("4.Ordenar por data de adição\n");
    printf("5.Encerrar \n");
    sscanf("%d" &Menu);
    printf("____________/__/___________\n");

    switch (Menu) {
      case 1:
        fgets(Navegar);
       break;
      
      case 2:
        fgets(Add);
       break;
      
      case 3:
        fgets(Edit);
       break;
      
      case 4: 
        fgets(Ordenar);
       break;

      case 5:
        printf("Encerrando o programa...\n");
       break;

      default:
      printf("Valor invalido\n");
    }
    fgets(CleanBuffer);
  }while(Menu1!=5)
  

  return 0
}
