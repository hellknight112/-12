#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,med,min; 

    printf("�п�J�n�����3�Ӽƭ�\n"); 
    printf("�ƭ�x="); scanf("%d",&x); 
    printf("�ƭ�y="); scanf("%d",&y); 
    printf("�ƭ�z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (med = max, max = z) : 
    z > min ? med = z : (med = min, min = z); 

    printf("min:%d med:%d max:%d\n", min, med, max); 

    system("PAUSE"); 
    return 0; 
}
