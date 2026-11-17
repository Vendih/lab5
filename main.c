#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-9

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
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
void task151(){
    int size = 0;
    printf("task 151| enter size\n");
    scanf("%d", &size);
    if (size <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    int *arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("enter number");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size / 2; i++)
    {
        /* code */
        swap(&arr[i], &arr[size - 1 - i]);
    }
    printf("swap massive:\n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d  ", arr[i]);
    }
    printf("\n");
    free(arr);
}
void task32(){
    int size = 0;
    printf("task 32| enter size\n");
    scanf("%d", &size);
    if (size <= 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    double *arr = (double*)malloc(size * sizeof(double));
    double z = 0;
    int number_replacement = 0;
    printf("enter Z\n");
    scanf("%lf", &z);
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("enter numbers\n");
        scanf("%lf", &arr[i]);
        if (arr[i] > z){
            arr[i] = z;
            number_replacement++;
        }

    }
    printf("modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]);
    }   
    printf("\nnumber of replacement = %d\n", number_replacement);
    free(arr);
}
int main(){
    int choise = 0;
    printf("====menu====\n");
    printf("1 - task 27\n");
    printf("2 - task 34\n");
    printf("3 - tasl 53\n");
    printf("4 - task 90\n");
    printf("5 - task 151\n");
    printf("6 - task 32\n");
    printf("0 - exit\n");
    scanf("%d", &choise);
    do
    {
        switch(choise){
            case 1: task27(); break;
            case 2: task34(); break;
            case 3: task53(); break;
            case 4: task90(); break;
            case 5: task151(); break;
            case 6: task32(); break;
            case 0: printf("exiting"); break;
            default: printf("unknown task\n");
        }
    }while(choise != 0);

    return 0;
}