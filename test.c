#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef union
{
    char c;
    int d;
    double e;
} Test;

int get(int *c){
    

    return sizeof(c);
}
int main()
{
    int c[3] = {1,2,3};
    printf("%d",sizeof(c));
    return get(c);
}