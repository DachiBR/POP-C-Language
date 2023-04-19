#include <stdio.h>
#include <string.h>

struct WORD {
        char word[1000];
};

int main()
{
        char temp[1000];
        struct WORD A[1000];
        int num, mf, tf, j, i = 0;

        while (1)
        {
                if (scanf("%s",temp) < 1) break;
                if (strlen(temp)%2 == 0)
                {
                        strcpy(A[i].word,temp);
                        i++;

                }
        }
        num = i;

        /* sort them */
        for(i=0;i<num;i++)
        for(j=i+1;j<num;j++)
        if (strcmp(A[i].word,A[j].word)>0)
        {
                strcpy(temp,A[i].word);
                strcpy(A[i].word,A[j].word);
                strcpy(A[j].word,temp);
        }

/*      for(i=0;i<num;i++) printf("%s\n",A[i].word); */


        /* most-frequent */
        if (num== 0) mf = 0;
        tf = 1; /* candidate for mf */
        for(i = 0; i < num; i++)
        {
                if (strcmp(A[i].word,A[i+1].word)==0) tf++;
                else
                {
                        if (tf > mf) mf = tf;
                        tf = 1;
                }
        }

        printf("%d\n",mf);

        return 0;
}