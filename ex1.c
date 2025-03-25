#include <stdio.h>
#include <stdlib.h>

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

void CHARswap(char *a, char *b)
{
    char aux = *a;
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

void INTafisare(int *v, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ",*(v + i));
    printf("\n");
    return;
}

void CHARafisare(char *v, int n)
{
    for(int i = 0; i < n; i++)
        printf("%c ",*(v + i));
    printf("\n");
    return;
}

void FLOATafisare(float *v, int n)
{
    for(int i = 0; i < n; i++)
        printf("%f ",*(v + i));
    printf("\n");
    return;
}

void CHARBubbleSort(char v[], int n)
{
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n - 1; j++)
        if(v[j] > v[j + 1])
            CHARswap(&v[j],&v[j+1]);
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
        int aux = v[i];
        int k;
        for(k = i - 1; k >= 0 && v[k] > aux; k--)
            v[k + 1] = v[k];
        v[k + 1] = aux;
    }
    return;
}

void CHARInsertionSort(char v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        char aux = v[i];
        int k;
        for(k = i - 1; k >= 0 && v[k] > aux; k--)
            v[k + 1] = v[k];
        v[k + 1] = aux;
    }
    return;
}

void FLOATInsertionSort(float v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        float aux = v[i];
        int k;
        for(k = i - 1; k >= 0 && v[k] > aux; k--)
            v[k + 1] = v[k];
        v[k + 1] = aux;
    }
    return;
}

void INTSelectionSort(int v[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = v[i];
        int poz = i;
        for(int j = i; j < n; j++)
            if(v[j] < min)
            {
                min = v[j];
                poz = j;
            }
        INTswap(&v[i],&v[poz]);
    }
    return;
}

void CHARSelectionSort(char v[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        char min = v[i];
        int poz = i;
        for(int j = i; j < n; j++)
            if(v[j] < min)
            {
                min = v[j];
                poz = j;
            }
        CHARswap(&v[i],&v[poz]);
    }
    return;
}

void FLOATSelectionSort(float v[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        float min = v[i];
        int poz = i;
        for(int j = i; j < n; j++)
            if(v[j] < min)
            {
                min = v[j];
                poz = j;
            }
        FLOATswap(&v[i],&v[poz]);
    }
    return;
}

int * INTmerge(int *l1, int *l2,int n)
{
    int *l3 = (int *) malloc(sizeof(int)*n),k = 0;
    int i = 0,n1 = n/2;
    int j = 0,n2 = n - n/2;
    while(i < n1 && j < n2)
    {
        if(*l1 > *l2)
        {
            *(l3 + k) = *l2;
            l2 = l2 + 1;
            j ++;
            k ++;
        }
        else
        {
            *(l3 + k) = *l1;
            l1 = l1 + 1;
            i ++;
            k ++;
        }
    }

    while(i < n1)
    {
        *(l3 + k) = *l1;
        l1 = l1 + 1;
        i ++;
        k ++;
    }

    while(j < n2)
    {
        *(l3 + k) = *l2;
        l2 = l2 + 1;
        j ++;
        k ++;
    }

    return l3;
}

int * INTMergeSort(int *l, int n)
{
    if(n == 1)
        return l;
    int *l1,*l2;
    l1 = (int *) malloc(sizeof(int) * (n/2));
    l2 = (int *) malloc(sizeof(int) * (n - n/2));
    for(int i = 0; i <= n/2; i ++)
    {
        *(l1 + i) = *(l + i);
        *(l2 + i) = *(l + n/2 + i);
    }
    l1 = INTMergeSort(l1,n/2);
    l2 = INTMergeSort(l2,n - n/2);
    return INTmerge(l1,l2,n);
}

char * CHARmerge(char *l1, char *l2,int n)
{
    char *l3 = (char *) malloc(sizeof(char)*n);
    int k = 0;
    int i = 0,n1 = n/2;
    int j = 0,n2 = n - n/2;
    while(i < n1 && j < n2)
    {
        if(*l1 > *l2)
        {
            *(l3 + k) = *l2;
            l2 = l2 + 1;
            j ++;
            k ++;
        }
        else
        {
            *(l3 + k) = *l1;
            l1 = l1 + 1;
            i ++;
            k ++;
        }
    }

    while(i < n1)
    {
        *(l3 + k) = *l1;
        l1 = l1 + 1;
        i ++;
        k ++;
    }

    while(j < n2)
    {
        *(l3 + k) = *l2;
        l2 = l2 + 1;
        j ++;
        k ++;
    }

    return l3;
}

char * CHARMergeSort(char *l, int n)
{
    if(n == 1)
        return l;
    char *l1,*l2;
    l1 = (char *) malloc(sizeof(char) * (n/2));
    l2 = (char *) malloc(sizeof(char) * (n - n/2));
    for(int i = 0; i <= n/2; i ++)
    {
        *(l1 + i) = *(l + i);
        *(l2 + i) = *(l + n/2 + i);
    }
    l1 = CHARMergeSort(l1,n/2);
    l2 = CHARMergeSort(l2,n - n/2);
    return CHARmerge(l1,l2,n);
}

float * FLOATmerge(float *l1, float *l2,int n)
{
    float *l3 = (float *) malloc(sizeof(float)*n);
    int k = 0;
    int i = 0,n1 = n/2;
    int j = 0,n2 = n - n/2;
    while(i < n1 && j < n2)
    {
        if(*l1 > *l2)
        {
            *(l3 + k) = *l2;
            l2 = l2 + 1;
            j ++;
            k ++;
        }
        else
        {
            *(l3 + k) = *l1;
            l1 = l1 + 1;
            i ++;
            k ++;
        }
    }

    while(i < n1)
    {
        *(l3 + k) = *l1;
        l1 = l1 + 1;
        i ++;
        k ++;
    }

    while(j < n2)
    {
        *(l3 + k) = *l2;
        l2 = l2 + 1;
        j ++;
        k ++;
    }

    return l3;
}

float * FLOATMergeSort(float *l, int n)
{
    if(n == 1)
        return l;
    float *l1,*l2;
    l1 = (float *) malloc(sizeof(float) * (n/2));
    l2 = (float *) malloc(sizeof(float) * (n - n/2));
    for(int i = 0; i <= n/2; i ++)
    {
        *(l1 + i) = *(l + i);
        *(l2 + i) = *(l + n/2 + i);
    }
    l1 = FLOATMergeSort(l1,n/2);
    l2 = FLOATMergeSort(l2,n - n/2);
    return FLOATmerge(l1,l2,n);
}

void INTQuickSort(int v[], int n)
{

    return;
}

void CHARQuickSort(char v[], int n)
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
    CHARBubbleSort(v2,n);
    FLOATBubbleSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Insertion Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nInsertion Sort:\n");

    INTInsertionSort(v1,n);
    CHARInsertionSort(v2,n);
    FLOATInsertionSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Selection Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nSelection Sort:\n");

    INTSelectionSort(v1,n);
    CHARSelectionSort(v2,n);
    FLOATSelectionSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
//Merge Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nMerge Sort:\n");

    int *p1;
    char *p2;
    float *p3;
    p1 = INTMergeSort(v1,n);
    p2 = CHARMergeSort(v2,n);
    p3 = FLOATMergeSort(v3,n);

    INTafisare(p1,n);
    CHARafisare(p2,n);
    FLOATafisare(p3,n);
//Quick Sort
    reset(v1,v2,v3,V1,V2,V3,n);
    printf("\nQuick Sort:\n");

    INTQuickSort(v1,n);
    CHARQuickSort(v2,n);
    FLOATQuickSort(v3,n);

    INTafisare(v1,n);
    CHARafisare(v2,n);
    FLOATafisare(v3,n);
    return 0;
}