#include<stdio.h>
 
void main(){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  c = a*b;
  if(c%2 == 0){
    printf("Even\n");
  }else{
    printf("Odd\n");
  }
}