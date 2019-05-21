#include <stdio.h>
int main() {
    int i,j=0,k,l=1;
    scanf("%d",&i);
    while(j<i){
        scanf("%d",&k);
        l*=k;
        j++;
    }
    printf("%d",l);

    return 0;
}