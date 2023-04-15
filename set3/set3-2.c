#include <stdio.h>

int main(){
    
  int b;
  int main[1000];
  int n;
  int l; 
  int u; 
  int a = 0; 
  int arr[1000]; 
  int temp; 
  int m = 0;
  int f=0;
  int c;
  int d;
  
  scanf("%d%d%d", &n, &l, &u);
  
  
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &b); //es kitxulobs elementebs
        main[i] = b;
            if (b >= l && b <= u) {
                a++; 
            }
    }



    for (int i = 0; i < n; i++) {
        if (main[i] >= l && main[i] <= u){
            arr[m] = main[i];
                m++;
        }
    }



        printf("\n");


        d=0;
    for(int i=0;i<n;i++){
        if(main[i]==arr[d]){
            c=arr[a-d-1];
            main[i]=c;
            d++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",main[i]);
    }
return 0;
}