#include <stdio.h>
#include <string.h>

struct PERSON {
	char name[26];
	int age;
};

int Read(struct PERSON* tab)
{
	int i;
	for(i=0; scanf("%s %d", tab[i].name,&tab[i].age)==2;i++);
	return i;
}

void Print(struct PERSON* tab, int size, int freq)
{
	int i,j;
	double avg=0;
	char cname[26];
	strcpy(cname,tab[0].name);
	for(i=0,j=0;i<size;)
	{
		while (strcmp(cname,tab[i].name)==0 && (i<size))
		{
			avg+=tab[i].age;
			i++; j++;
		}
		avg/=j;
		if (j==freq) printf("%s %.2f\n",cname,avg);
		j=0; avg=0;
		if (i<size) strcpy(cname,tab[i].name);
	}
}

void Sort(struct PERSON* tab, int size)
{
        int i, temp, ub;
	char tc[26];

        for(ub=size-1;ub>=1;ub--) 	/* Sorting algorithm */
        	for(i=1;i<=ub;i++)
		{
        		if (strcmp(tab[i-1].name,tab[i].name)>0)
			{ /* swap tab[i-1] and tab[i] */
				temp=tab[i].age;
				strcpy(tc,tab[i].name);

				tab[i].age=tab[i-1].age;
				strcpy(tab[i].name,tab[i-1].name);

				tab[i-1].age=temp;
				strcpy(tab[i-1].name,tc);
			}
		}

}

int MostFreq(struct PERSON* tab, int size)
{ 
	int max=1, i, j, count=1;
	char cname[26];
	strcpy(cname,tab[0].name);

	for (i=1; i<size; i++) {
	    if (strcmp (cname, tab[i].name)==0) {
	      count++;
	    }
	    else {
	      if (count>max) {
	        max=count;
	      }
	      count=1;
	      strcpy(cname, tab[i].name);
	    }
	}
	if (count>max) {
	  max=count;   
	}
	return max;
}


int main()
{
	int i,size,freq;

	struct PERSON P[1000];

	size=Read(P); /* number of records */

	Sort(P,size); /* sorted by names */

	 /* the number of the occurences of the most frequent name */
	freq=MostFreq(P,size);

	Print(P,size,freq);

	return 0;
}