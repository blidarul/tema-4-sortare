#include <stdio.h>

void reset(int v1[],char v2[],float v3[],int V1[],char V2[],float V3[],int n)
{
    for(int i = 0; i < n; i++)
    {
        v1[i] = V1[i];
        v2[i] = V2[i];
        v3[i] = V3[i];
    }
    return;
}

void INTswap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
    return;
}

void FLOATswap(float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
    return;
}

void INTafisare(int v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ",v[i]);
    printf("\n");
    return;
}

void CHARafisare(char v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%c ",v[i]);
    printf("\n");
    return;
}

void FLOATafisare(float v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%f ",v[i]);
    printf("\n");
    return;
}

void INTBubbleSort(int v[], int n)
{
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n - 1; j++)
        if(v[j] > v[j + 1])
            INTswap(&v[j],&v[j+1]);
    return;
}

void FLOATBubbleSort(float v[], int n)
{
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n - 1; j++)
        if(v[j] > v[j + 1])
            FLOATswap(&v[j],&v[j+1]);
    return;
}

void INTInsertionSort(int v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j < i && v[j] <= v[i])
            j++;
        
        int aux = v[i];

        for(int k = i; k > j; k--)
            v[k] = v[k - 1];
        v[j] = aux;
    }
    return;
}

void FLOATInsertionSort(float v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j < i && v[j] <= v[i])
            j++;
        
        float aux = v[i];

        for(int k = i; k > j; k--)
            v[k] = v[k - 1];
        v[j] = aux;
    }
    return;
}

void INTSelectionSort(int v[], int n)
{

    return;
}

void FLOATSelectionSort(float v[], int n)
{

    return;
}

void INTMergeSort(int v[], int n)
{

    return;
}

void FLOATMergeSort(float v[], int n)
{

    return;
}

void INTQuickSort(int v[], int n)
{

    return;
}

void FLOATQuickSort(float v[], int n)
{

    return;
}

int main()
{
    int n = 10;
    int v1[10],V1[] = {-47,46,-91,-64,100,92,-20,83,-12,10};
    char v2[10],V2[] = {'C', 'Y', 'E', 'B', 'D', 'W', 'a', 'O', 's', 'Y'};
    float v3[10],V3[] = {90.675, -60.980, 86.10, 4.99, 30.2682854, -29.178584028, -86.58683, -51.1535, -76.40793, 32.169};

//Bubble Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("Bubble Sort:\n");

    INTBubbleSort(v1,n);
    INTBubbleSort(v2,n);
    FLOATBubbleSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Insertion Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nInsertion Sort:\n");

    INTInsertionSort(v1,n);
    INTInsertionSort(v2,n);
    FLOATInsertionSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Selection Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nSelection Sort:\n");

    INTSelectionSort(v1,n);
    INTSelectionSort(v2,n);
    FLOATSelectionSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);

//Merge Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nMerge Sort:\n");

    INTMergeSort(v1,n);
    INTMergeSort(v2,n);
    FLOATMergeSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Quick Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nQuick Sort:\n");

    INTQuickSort(v1,n);
    INTQuickSort(v2,n);
    FLOATQuickSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
    return 0;
}