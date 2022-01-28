//Array parameters are always passed as pointers, even when we use square brackets.
#include <stdio.h>
 
int fun(int arr[])
{
    int x = 10;
 
    // size of a pointer is printed
    printf("sizeof(ptr) = %d\n", (int)sizeof(*arr));
 
    // This allowed because ptr is a pointer, not array
    arr = &x;
 
    printf("*ptr = %d ", *arr);
 
    return 0;
}
 
// Driver code
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
     
    // size of a array is printed
    printf("sizeof(arr) = %d\n", (int)sizeof(arr));
    fun(arr);
    return 0;
}
