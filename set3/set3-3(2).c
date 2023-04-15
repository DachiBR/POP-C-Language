#include <stdio.h>

int main() {
    int n=0;
    int i,k;
    char arr[1000];
    char cipher[26];

    for(i=0; i<26; i++){
        scanf("%c", &cipher[i]);
    }

    for(i=0; i<1000; i++){

    int x = scanf("%c", &arr[i]);

    if(x == -1){
    break;
        }
    n++;
    }


        for(i = 0; i<n ; i++){
            k = arr[i] - 'A';
            if (arr[i] <= 90 && arr[i] >= 65){
            arr[i] = cipher[k];
        }

    }


    int x = 0;

    for(i=0; i<n; i++){
        if (arr[i] == '\n' && x == 0){
            x = 1;
            continue;

        }
        printf("%c", arr[i]);
    }

    return 0;
}