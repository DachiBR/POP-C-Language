#include <stdio.h>
#include<math.h>
 
int main() {
    int firstInput;
    double secondInput;
    double sum = 0;
    double sump = 0;
 
 
 
    scanf("%d",&firstInput);
    for(int i = 0; i<firstInput; i++){
        scanf("%lf", &secondInput);
            sum=sum+secondInput;
    }
 
    sump = sum / firstInput;
    printf("%.2f", sump);
    return 0;
}