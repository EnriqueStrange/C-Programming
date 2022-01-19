/*To compare two numbers*/
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d is greater", a);
    }
    else if(a<b){
        printf("%d is greater", b);
    }
    else{
        printf("%d and %d are equal", a, b);
    }
    return 0;
}
