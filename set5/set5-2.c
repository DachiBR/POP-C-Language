#include <stdio.h>
#include <string.h>
#define WS 100 

int main(void)
{

  int j, k;

  char string[WS], temp; 
  
    while(scanf("%s", string) == 1)

    {
    if(strlen(string) % 2 == 0)
        {
         printf("%s\n", string);
        }
    }

  rewind(stdin);

    while(scanf("%s", string) == 1)
    {
        if(strlen(string) % 2 == 1){
            for (j = 0, k = strlen(string) - 1; j < k; j++, k--)
            {
                temp = string[j];
                string[j] = string[k];
                string[k] = temp;
            }
        printf("%s\n", string);
        }
    }

    return 0;
}