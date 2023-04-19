#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char* inptwrd = (char*) malloc(sizeof(char) * 10000);
    int* lttrcnt = (int*) calloc(26, sizeof(int));

    while(scanf("%s", inptwrd) > 0) {
        int frstlttr = tolower(inptwrd[0]);
        if(isalpha(frstlttr)) {
            lttrcnt[frstlttr - 97]++;
        }
    }

    for( i = 0; i < 26; i++) {
        if(lttrcnt[i] > 0) {
            printf("%c %d\n", 97 + i, lttrcnt[i]);
        }
    }

    free(inptwrd);
    free(lttrcnt);

    return 0;
}