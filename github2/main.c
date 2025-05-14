#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Introduceti primul numar;");
    scanf("%d",&a);
    printf("Introduceti al doilea numar:");
    scanf("%d",&b);
    if(a<b){
        printf("\nAl doilea numar este mai mare");
    }else{
        printf("\nPrimul  numar este mai mare");
         }
    return 0;
}
