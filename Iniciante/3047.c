 #include <stdio.h>
int main() {
int m,a,b,c;
scanf("%d\n%d\n%d\n",&m,&a,&b);
c=m-a-b;
if(a>b){
  if(a>c) printf("%d\n",a);
  else printf("%d\n",c);
}else{
  if(b>c) printf("%d\n",b);
  else printf("%d\n",c);
}
    return 0;
}
