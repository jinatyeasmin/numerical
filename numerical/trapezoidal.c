#include<stdio.h>
#include<math.h>
float f(float x){
    float f;
    f=(1/(1+x));
    return(f);
}
 main(){
    float a,b,h,trap;
    int i,n,k;
    printf("the value of a,b,n:");
    scanf("%f %f %d",&a,&b,&n);
    h=(b-a)/n;
    i=2;
    trap=f(a)+f(b);
    for(k=1;k<=n-1;k++){
        trap=trap+i*f(a+h*k);
    }
    trap=trap*(h/2);
    printf("the result is: %f",trap);

}
