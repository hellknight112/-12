#include<stdio.h>
#include<stdlib.h>

int main() {
    
	int s,e,x;
    int a=5;

    for(s=a;s>=1;s--){
        for(e=a;e>s;e--){
            printf(" ");
        }
        for(x=1;x<=s;x++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
	system("PAUSE");
    return 0;
}
