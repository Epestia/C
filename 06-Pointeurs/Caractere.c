#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a,b,*pa,*pb;
    char tmp;
    pa = &a;
    pb = &b;
    printf("Entrez le premier charactere (a): ");
    scanf("%c",pa);
    getchar();
    printf("Entrez le deuxieme charactere (b): ");
    scanf("%c",pb);
    printf("a = %c et b = %c.\n",a,b);
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    printf("a = %c et b = %c.\n",a,b);
    system("pause");
    return 0;
}