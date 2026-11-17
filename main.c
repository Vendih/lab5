#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-9

void task27(){
    int len;
    printf("task 27| enter len arr\n");
    scanf("%d", &len);
    if (len <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    int *arr = (int *)malloc(len * sizeof(int));
    printf("task 27| enter elements\n");
    for(int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }
    // Process the array as needed
    int size_zero = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] == 0){
           size_zero ++;
        }
    }
    if (size_zero == 0){
        printf("not have zero elements\n");
        free(arr);
        return;
    }
    int *arr_zero = (int*)malloc(size_zero * sizeof(int));
    int index_zero = 0;
    for (int i = 0; i < len; i++)
    {
        /* code */

        if (arr[i] == 0)
        {
            /* code */
            arr_zero[index_zero] = i;
             index_zero ++;
        }
       
    }
    printf("index zero : ");
    for (int d = 0; d < size_zero; d++)
    {
        /* code */
        printf("%d ", arr_zero[d]);
    }
    printf("\n");
    free(arr_zero);
    free(arr);
}
void task34(){
    int size = 0;
    int negative = 0;
    int positive = 0;
    int zero = 0;
    printf("task 34| enter size N\n");
    scanf("%d", &size );
    if (size <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    double *arr = (double*)malloc(size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("enter number \n");
        scanf("%lf", &arr[i]);
        if (fabs(arr[i]) < EPS){
            zero++;
        }
        else if (arr[i] < 0){
            negative++;
        }
        else positive++;
    }   
    printf("negative = %d; posivive = %d; zero number = %d;\n", negative, positive, zero);
    
    free(arr);
}
void task53(){
    int size = 0;
    printf("task 53| enter size \n");
    scanf("%d", &size);
    if (size <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    int *arr = (int*)malloc(size * sizeof(int));
    int count_non_paired = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("enter number \n");
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0 ){
            count_non_paired ++;
        }
    }
    double result = ((double)count_non_paired / size) * 100;
    printf("result : %.2lf%%\n", result);
    free(arr);
}
void task90(){
    int size = 0;
    printf("task 90| enter size\n");
    scanf("%d", &size);
    if (size <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    int *arr = (int*)malloc(size * sizeof(int));
    
    printf("enter number\n");
    scanf("%d", &arr[0]);
    if (arr[0] < 0) {
        printf("numbers equality\n");
        free(arr);
        return;
    }
    int first_number = arr[0];
    for (int i = 1; i < size; i++)
    {
        /* code */
        printf("enter number\n");
        scanf("%d", &arr[i]);
        if (arr[i]<0)
        {
            /* code */
            break;
        }
        if (arr[i] != first_number)
        {
            /* code */
            printf("elements not equality\n");
            free(arr);
            return;
        }
       
    }
    printf("numbers equality\n");
    free(arr);
}
void task151();
void task32();
int main(){
    return 0;
}