#include <stdio.h>

int main() {
  
  int n;  
  scanf("%d", &n);

    int array[n];

    int sum = 0;
  
    double average = 0;

    for (int i = 0; i < n; i++) {

      scanf("%d", &array[i]);

      sum = sum + array[i];
    }
    
    //printf("%d",sum);
    
    average = (double)sum / n;

   // printf("%.2f", average);
     
    int random=2288;  /*it's a random number, it must be higher than usual like 10000 or 5000
    						(it matters which test case will be , but we can not make it to 0 or 1 
    					because our numbers are much higher*/
  
    for(int i=0; i<n; i++){
        if(array[i]<random && array[i]>average){
        	random=array[i];         /* here i compare random number to our array,
                                          its for a little time ,just to change values*/
        }                    
      }
      
    for(int i=0; i<n; i++){
       if(random==array[i]){
       		printf("%d ",i+1);/*because our index counting starts from zero we need to 
       		                    add i+1 just to make it usual counting from1 , not from 0.*/
       }   
    }
  return 0;
}