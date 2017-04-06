#include <stdio.h>
#include <stdlib.h>
void point(int *a)
{
    int *x;
    x = (int *)malloc(sizeof(int));
    a = x;  //并不会改变a指针的地址

}
void pointtopoint(int **a)
{
    int *x;
    x = (int *)malloc(sizeof(int));
    *a = x; //会改变a的地址
}

int main()
{
    int b = 0;
    int *a = &b;
    printf("initaial a's address\n");
    printf("%p\n", a);

    printf("after func point``````");
    point(a);
    printf("%p\n", a);

    printf("after func pointtopoint`````````");
    pointtopoint(&a);
    printf("%p\n", a);
    return 0;



}
