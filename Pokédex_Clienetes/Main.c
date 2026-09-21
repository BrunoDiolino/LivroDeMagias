#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Acervo 20

int main() {

  struct Data {
    int Dia, Mes, Ano;
  };

  struct Empresa {
    char nome[40];
    char info[250];
    char Id[10];
  };

  void struct Navegar() {
    printf("\n");
  };

  struct Add {
    printf("Nome da empresa:\n");
    fgets(Empresa.nome)

        printf("Informações da empresa:\n");
    fgets(Empresa.info)

        printf("Id:\n");
    fgets(Empresa.Id) return 0;
  };

  struct Edit {
    printf("Qual empresa gostaria de editar ?\n");
  };

  struct Encerrar {
    return 0;
  };

  struct CleanBuffer {
    int c;
  while ((c=getchar()) != '\n' && c != EOF {}
  };
  /// Menu
  do {
    printf("  ===Bussyness Maneger===   \n");
    printf("MENU:                      \n");
    printf("1.Navegar\n");
    printf("2.Adicoinar\n");
    printf("3.Editar\n") printf("4.Ordenar por data de adição\n");
    printf("5.Encerrar \n");
    sscanf("%d" & Menu);
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
      fgets(Encerrar);
      break;

    default:
      printf("Valor invalido\n");
    }
  } while (Menu1 != 5)

      return 0
}
