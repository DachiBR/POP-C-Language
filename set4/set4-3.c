#include <stdio.h>
#include <string.h>


int main()
{

        char word[1000];
        int tab[255];
        int i, j, max, n;




        /* fill with zeros */
        for(i = 0; i < 255; i++) tab[i] = 0;

        while (1)
        {
                /* clear word first */
                word[0] = '\0';
                scanf("%s",word);
//              printf("word=%s\n",word);

                /* how to check if word is empty ? */
                n = strlen(word);
                if (n == 0) break;

                /* go though word (cahracter by character) */
                if (n % 2 == 0) /* even */
                {
                        for(j = 0; j < n; j++)
                                if (word[j] >= 'a' && word[j] <= 'z') tab[word[j]]++;
                }

 else /* odd length */
                {
                        for(j = 0; j < n; j++)
                                if (word[j] >= 'A' && word[j] <= 'Z') tab[word[j]]++;
                }

//              for(i='a'; i <= 'z'; i++) printf("%c:%d\n",i,tab[i]);
//              for(i='A'; i <= 'Z'; i++) printf("%c:%d\n",i,tab[i]);

        }

        /* find max in tab */
        max = tab['a'];
        for(i = 'a'; i <= 'z'; i++) if (max < tab[i]) max = tab[i];
        printf("%d\n",max);

        max = tab['A'];
        for(i = 'A'; i <= 'Z'; i++) if (max < tab[i]) max = tab[i];
        printf("%d\n",max);

        return 0;
}