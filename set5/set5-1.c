#include <string.h>
#define MAX     1000

/* define the new type = struct PERSON and name it PP */
typedef struct PERSON {
        char name[30];
        int age;
} PP;

int Read(PP* X)
{
        int i;
        char name[30];
        int age;
        for(i=0; scanf("%s %d",name,&age)==2; i++)
        {
                X[i].age = age;
                strcpy(X[i].name,name);
        }
        return i;
}

/* 1 if first is greater, 0 if first is smaller or equal */
int Greater(PP* A, PP* B)
{
        if (A->age > B->age) return 1; /* A->age = (*A).age */
        else if (A->age==B->age)
        {
                if (strcmp(A->name,B->name) > 0) return 1;
                else return 0;
        }
        return 0;
}

void Swap(PP* A, PP* B)
{
        PP T;

        T.age = A->age;
 strcpy(T.name,A->name);

        A->age = B->age;
        strcpy(A->name,B->name);

        B->age = T.age;
        strcpy(B->name,T.name);
}

void Sort(PP* X, int n)
{
        int i,j;

        for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
                if (Greater(&X[i],&X[j]))
                        Swap(&X[i],&X[j]);
}
void Print(PP* X, int n)
{
        printf("%s %d\n",X[n].name,X[n].age);
}

int main()
{
        int n;
        PP P[MAX]; /* type of P is a POINTER TO (struct PERSON) */

        /* P is created, just only read; return the number of records (lines) */
        n = Read(P);

        Sort(P,n);

        if (n%2 == 0) /* even */
        {
                Print(P,n/2-1);
                Print(P,n/2);
}
        else /* odd */
                Print(P,(n-1)/2);

        return 0;
}