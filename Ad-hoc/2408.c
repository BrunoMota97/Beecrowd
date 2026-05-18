#include <stdio.h>

int main() {
int a,b,c,meio,entre;
scanf("%d %d %d\n",&a,&b,&c);
  if(a > c){          
      entre = a;            
      a = c;            
      c = entre; 
      }          
  if(a >= b){                
        entre = b;        
        b = a;              
        a = entre;   
      }            
  if(b >= c){                
          entre = c;         
          c = b;          
          b = entre;      
        }
          meio=b;
printf("%d\n",meio);
    return 0;
}