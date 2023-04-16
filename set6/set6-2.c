#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 10000

char num[MAX_LEN];
char result[MAX_LEN];

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        scanf("%s", num);
        int r, s;
        scanf("%d %d", &r, &s);
        int len = strlen(num);
        int dec_num = 0;
        for (int i = 0; i < len; i++) {
            int digit;
            if (num[i] >= '0' && num[i] <= '9') {
                digit = num[i] - '0';
            } else {
                digit = num[i] - 'A' + 10;
            }
            dec_num += digit * pow(r, len - i - 1);
        }
        int index = 0;
        while (dec_num > 0) {
            int digit = dec_num % s;
            if (digit < 10) {
                result[index] = digit + '0';
            } else {
                result[index] = digit - 10 + 'A';
            }
            index++;
            dec_num /= s;
        }
        for (int i = index - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }
        printf("\n");
    }
    return 0;
}