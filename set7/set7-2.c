#include <stdio.h>

struct data{
  int R;
  int P;
};

void sort(int* array,int size){
  int temp,i,j;
    
  for(i=0;i<size;i++) {
    for(j=0;j<size-1;j++) {
      if(array[j]>array[j+1]) {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
}

int main(void) {
  struct data in[1000];
  char line[10000];
  int t;
    
  fgets(line,sizeof line,stdin);
  sscanf(line,"%d",&t);
    
  for(int n=0;n<t;n++){
    int i,j,m,k,size,served=0,endh=0;
    fgets(line,sizeof line,stdin);
    sscanf(line,"%d%d",&m,&k);
        
    int services[m];
        
    for (i=0;i<m;i++) services[i]=-1;
    i=0;
        
    while ((fgets(line, sizeof line, stdin) != NULL) && (line[0] != '\n')) {
            
      if (sscanf(line, "%d%d", &in[i].R, &in[i].P) == 2) {   
        i++;
        size=i;
      }
    }
        
    for(i=0;i<size;i++) {
      if((in[i].R+in[i].P)<=k) {
        if(services[0]==-1) {
          services[0]=in[i].R+in[i].P;
          if(services[0]>endh) endh=services[0];
            sort(services,m);
            served++;
          }
          else if(in[i].R>=services[0]) {
            services[0]=in[i].R+in[i].P;
            if(services[0]>endh) endh=services[0];
              sort(services,m);
              served++;
            }
        else if(in[i].R<services[0] && (services[0]+in[i].P)<=k) {
          services[0]=services[0]+in[i].P;
          if(services[0]>endh) endh=services[0]; {
            sort(services,m);
            served++;
          }
        }
      }
    }
        
  printf("%d %d\n",served,endh);
  }
    
  return 0;
}

/*
the code is not working
*/