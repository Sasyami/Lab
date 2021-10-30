#include <stdio.h>
#include <math.h>
int main(){
    int n,i,ost;
    float x,s;
    printf("Put n:");
    scanf("%d",&n);
    printf("Put x:");
    scanf("%f",&x);
    ost = n%2;

    s = 0;
    for (i = n; i>0;i=i-2){
        float c = i;

        s=s+1/c*pow(-1.0,ost+1);


        s=s*pow(x,2);

    }
    s = s/pow(x,ost);
    printf("%f",s);
    return 0;
}
