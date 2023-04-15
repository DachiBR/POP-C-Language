#include <stdio.h>

int main() {
    int n;
    int u;
    int l;
    int firstInput;
    int sumP = 0;
    int sumN = 0;
    
    scanf("%d",&firstInput);
    scanf("%d",&u);
    scanf("%d",&l);
    
    for(int i=0; i<firstInput; i++){
        scanf("%d",&n);
        if(n>0 && n<u){
           sumP = sumP + n;
        }else if(n<0 && n>l){
            sumN = sumN + n;
        }
    }
    printf("%d%s%d",sumP, " ", sumN);
    
    
    return 0;
}