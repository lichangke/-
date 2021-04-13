#include <iostream>

int main() {

    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*p)[10] = &a;
    printf("address: a = %p\n",a);
    printf("address: a + 1 = %p\n",a + 1);
    printf("data: *(a + 1) = %d  a[1] = %d\n",*(a + 1),a[1]);

    printf("address: p = %p\n",p);
    printf("address: p + 1 = %p\n",p + 1);
    printf("address: a + 10 = %p\n",a + 10);

    printf("data: *(int *)p  = %d  a[0] = %d\n",*(int *)p ,a[0]);
    return 0;
}
