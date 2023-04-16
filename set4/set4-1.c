#include <stdio.h>
int main(){
    
    int a;
    int n;
    int number[100];
    int b;
    int c;
    
    
        scanf("%d", &b);
        scanf("%d", &c);
        n=b+c;
        for (int i = 0; i < n; ++i){
            scanf("%d", &number[i]); //scans the numbers
        }
        
        for (int i = 0; i < n; ++i){
 
            for (int j = i + 1; j < n; ++j){
                if (number[i] > number[j]){
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
 
        }
        for (int i = 0; i < n; ++i){
            printf("%d ", number[i]); //prints our numbers
        }
    return 0;
}