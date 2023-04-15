#include <stdio.h>
#include<math.h>

int main() {
    int n;
    double last = 0;
    double sum = 0;
    double average = 0;
    double averagef = 0;
    double lastf= 0;
    double sumf = 0;
    
    scanf("%d", &n);
    double array[n];
    for(int i=0; i<n; i++){
        scanf("%lf", &array[i]);
        average = average + array[i];
    }
    averagef = average /n;
    
    for(int i=0; i<n; i++){
        sumf = sumf +pow(array[i]-averagef,2);
    }
    last = sumf/n;
    printf("%.2f", last);
    
    
    return 0;
}