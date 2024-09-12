//WAP to check if number is prime or not.

#include<stdio.h>
int main(){
int n;
printf("ENTER NUMBER : ");
scanf("%d",&n);
int a = 0;
for(int i=2;i<=n-1;i++){
    if(n%i==0){
      a = 1;
      break;
    } 
}
if(a==0){
    printf("PRIME NUMBER\n");
}
else{
    printf("COMPOSTITE NUMBER\n");
}
return 0;
}