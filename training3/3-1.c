#include <stdio.h>
 
int main(void)
{    
    int x;
    int y;
    int z;
    int max;
 
    printf("3개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &x, &y, &z);
 
    max = x > y ? (x > z ? x : z) : (y > z ? y : z);
 
    printf("최대값 : %d", max);
 
    return 0;
}
