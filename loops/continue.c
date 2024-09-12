//we can do odd even buy continue state ment by this method.
#include<stdio.h>
int main(){
    for(int i =1; i<=100; i++){
        if (i%2==0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}