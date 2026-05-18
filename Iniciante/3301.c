#include<stdio.h>
int main (){    
  int h ,z,l ,entre,max1,max2,max3;      
  scanf("%d %d %d\n", &h, &z, &l);     
   int a=h,b=z,c=l;
    if(h >= l){          
      entre = h;            
      h = l;            
      l = entre; 
      }          
      if(h >= z){                
        entre = z;        
        z = h;              
        h = entre;   
        }            
        if(z >= l){                
          entre = l;         
          l = z;          
          z = entre;      
          }  
      max1=h,max2=z,max3=l;
    if(max2==a) printf("huguinho\n");
    else if(max2==b) printf("zezinho\n");
    else printf("luisinho\n");
   return 0;
}