#include <stdio.h>
int main()
{
    int n, *numbers, max=-1000, min=1000;

    scanf("%d", &n);

    numbers = malloc(n * sizeof(int));

    for (int i=0; i<=n-1; ++i) {
        scanf("%d", &numbers[i]);
        if(max < numbers[i])
            max = numbers[i];
        if(min > numbers[i])
            min = numbers[i];
    }

    for (int i=0; i<=n-1; ++i) {
        if(numbers[i] == min)
            numbers[i] = max;
        else if(numbers[i] == max)
            numbers[i] = min;
        printf("%d ", numbers[i]);
    }
    return 0;
}