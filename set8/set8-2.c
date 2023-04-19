#include <stdio.h>

int main()
{
        int stack[10];
        int num, value;
        char op;


        num = 0;
        /* read '-' or two lines: '+' with a number after that */
        while(1) /* infinite */
        {
                if (scanf("%c\n",&op)<1) break;
                if (op=='-')
                { /* remove from stack, if possible */
                        if (num>0)
                        {
                                printf("%d\n",stack[num-1]);
                                num--;
                        }
                        else /* empty stack */ printf(":(\n");
                }
                else if (op=='+')
                { /* add to the stack if possible */
                        scanf("%d\n",&value);
                        if (num<10)
                        {
                                stack[num]=value;
                                num++;
                                printf(":)\n");
                        }
                        else /* full stack */ printf(":(\n");
                }
                else printf("we have problem!\n"); /* for us: testing purpose */
        }

        return 0;
} 