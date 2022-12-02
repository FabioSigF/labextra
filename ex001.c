#include <stdio.h>
#include <string.h>

/*Faça um programa em C que, dada uma string de entrada, gere uma string de saída com todos ‘r’ e ‘rr’ trocados por ‘l’, exceto para os casos que o ‘r’ está no final das palavras*/

void main()
{
  char str[100], strLen, v;

  printf("Digite uma frase: ");
  gets(str); //fgets(str, 100, stdin) => não conta \0.

  strLen = strlen(str);

  for (int i = 0; i < strLen; i++)
  {
    v = str[i];
    switch (v)
    {
    case 'r':
    case 'R':
      if((str[i+1] != ' ') && (str[i+1] != '\0'))
      {
        str[i] = 'l';
        if(str[i+1] == 'r')
        {
          for(int j = i; j < strLen; j++)
          {
            str[j+1] = str[j+2];
          }
        }
      } 
      break;
    
    default:
      break;
    }
  }
  
  printf("%s", str);
}