#include <stdio.h>
int main() {
    int i,j=0,k,l=0;
    scanf("%d",&i);
    while(j<i){
        scanf("%d",&k);
        if( k<0){
        l+=1;
        }
        j++;
    }
    printf("%d",l);

    return 0;
}