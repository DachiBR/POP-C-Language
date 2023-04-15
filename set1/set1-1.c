#include <stdio.h>

int main() {
    int firstInput;
    int secondInput;
    
    int sumN = 0;  //Negative
    int sumP = 0;  //Positive
    
    scanf("%d", &firstInput);
    
    for(int i=0; i < firstInput; i++){
        scanf("%d", &secondInput);
    if(secondInput < 0){
       sumN = sumN + secondInput;
    }else if(secondInput > 0){
        sumP = sumP + secondInput;
    }
    }
    printf("%d%s%d", sumP, " ", sumN);
    return 0;
    
}