#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct 
    {
        char name[30];
        int age;
        float noa;
        float avg;
    }farmer;
    int n=15;
    farmer f[n];
    int compare(const void *pa, const void *pb){
        farmer *p1 = (farmer *)pa;
        farmer *p2 = (farmer *)pb;
        return (p1->avg - p2->avg);
    }

    
    for (int x = 0; x <= n - 1; x++)
    {
        printf("Enter name of farmer %d :", (x + 1));
        scanf("%s", (f[x].name));
        printf("Enter age of farmer %d :", (x + 1));
        scanf("%d", &(f[x].age));
        printf("Enter number of acres of farmer %d :", (x + 1));
        scanf("%f", &(f[x].noa));
        printf("Enter average crop produced in each acre of farmer %d :", (x + 1));
        scanf("%f", &(f[x].avg));
    }
    qsort(f, n, sizeof(farmer), compare);  
    for (int x = 0; x <= n - 1; x++)
    {
        printf("%s  %d  %f  %f \n", f[x].name, f[x].age, f[x].noa, f[x].avg);
    }
}