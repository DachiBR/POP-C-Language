int main() {
   int integer1, integer2, sum; 
   int diff;
   int mult;
 
   scanf("%d", &integer1);            
   scanf("%d", &integer2);            
 
   sum = integer1 + integer2; 
   diff = integer1 - integer2;
   mult = integer1 * integer2;
 
   printf("%d \n", sum);
   printf("%d \n", diff);
   printf("%d \n", mult);
 
   return 0;
}