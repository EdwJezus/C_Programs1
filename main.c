#include <stdio.h>

int main(void) {

  printf("Atividade 1 \n");
  printf("Hello World!\n\n");

////////////////////////////////
  
  int num_atv2;
  
  printf("Atividade 2\n");
  printf("Digite um número: \n");
  scanf("%d", &num_atv2);
  printf("Resultado: %d\n\n", num_atv2 * 2);

////////////////////////////////
  
  printf("Atividade 3\n");
  int count = 0;
  while (count < 10){
    count++;
    printf("%d\n", count);
  }
  printf("\n");

/////////////////////////////////

  int contagem = 0;
  
  printf("Atividade 4\n");

  for (contagem = 1; contagem <= 10; contagem++){
    printf("%d\n", contagem);
  }
  printf("\n");
  
/////////////////////////////////

  printf("Atividade 5\n");

  int array[5];
  int i;

  for (i = 1; i <= 5; i++){
    printf("Digite um número para a posição %d: \n", i);
    scanf("%i", &array[i]);
  }

  printf("\nA soma do array é igual a: %i\n", array[1] + array[2] + array[3] + array[4] + array[5]);
  
//////////////////////////////////

  printf("\nAtividade 6\n");

  int numeros_media[5];
  int l;

  for (l = 1; l <= 5; l++){
    printf("Digite um número para a posição %d: \n", l);
    scanf("%i", &numeros_media[l]);
  }

  printf("\n A média dos números é: %i\n", (numeros_media[1] + numeros_media[2] + numeros_media[3] + numeros_media[4] + numeros_media[5]) / 5);

////////////////////////////////////

  printf("\nAtividade 7\n");

  int par_impar;
  
  printf("Digite um número: \n");
  scanf("%d", &par_impar);

  if (par_impar % 2 == 0){
    printf("O número é par.\n");
  }
  else{
    printf("O número é impar.\n");
  }

  
  return 0;
}
