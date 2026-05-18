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
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",max1,max2,max3,a,b,c);
   return 0;
}