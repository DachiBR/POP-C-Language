#include <stdio.h>
 
int main(void) {
	int c, nl, nw, nc,state;
	#define IN 1
	#define OUT 0
 
   nl = nw = nc = 0;
   while ((c = getchar()) != EOF)
	{
		++nc;
 
		if (c == '\n')
           ++nl;
          if (c ==' ' || c =='\n' || c =='\t'||c == ' ' || c == '.' || c == ',' || 
                           c == '!' || c == '?')
           state = OUT;
          else if (state == OUT) 
          {
          	state=IN;
          	++nw;
          }
	}
	nw++;
	printf ("%d %d %d\n", nl, nw, nc);
	return 0;
}
