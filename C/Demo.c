#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    int a;
    scanf("%d",&a); //&a address of a, entered value will be stored in address of a
    printf("%d\n",a);

    int *p;
    p=&a;
    printf("%lld\n",p);
    printf("%lld\n",&a);
    printf("%d\n",*p);
    printf("%d\n",sizeof(*p));

    //Array with dynamic memory allocation
    int* arr;
    int size; 
    printf("Enter Size");
    scanf("%d",&size);
    printf("%d\n",sizeof(arr));
    arr=(int*)malloc(size*(sizeof(arr)));
    //Same for calloc initialize all field with 0 unlike malloc does not initialize 
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr+i));
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
        //Contiguous Allocation in memory
        printf("%d\n",(arr+i));
    }

    // arr=(int*)realloc(arr,size2)

    free(arr);
    arr=NULL;
    return 0;
}
