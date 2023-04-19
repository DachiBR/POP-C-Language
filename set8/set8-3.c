#include <stdio.h>

int main()
{
        int stack[10];
        int num, value, first, last;
        char op;


        num = 0;
        /* read '-' or two lines: '+' with a number after that */
        while(1) /* infinite */
        {
                if (scanf("%c\n",&op)<1) break;
                if (op=='-')
                { /* remove from FIFO, if possible */
                        if (num>0)
                        {
                                printf("%d\n",stack[first]);
                                first++;
                                if (first==10) first = 0;
                                num--;
                        }
                        else /* empty FIFO: num = 0 */ printf(":(\n");
                }
                else if (op=='+')
                { /* add to the FIFO if possible */
                        scanf("%d\n",&value);
                        if (num<10)
                        {
                                printf(":)\n");
                                if (num==0) /* start! */
                                {
                                        stack[0]=value;
                                        first = 0;
                                        last = 0;
                                        num = 1;
                                }
                                else /* num > 0 */
                                {
                                        last++;
                                        if (last == 10) last = 0;
                                        stack[last] = value;
                                        num++;
                                }
                        }
                        else /* full FIFO: num = 10 */ printf(":(\n");
                }
                else printf("we have problem!\n"); /* for us: testing purpose > */       }

        return 0;
}