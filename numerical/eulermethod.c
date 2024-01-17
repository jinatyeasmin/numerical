#include<stdio.h>
#include<math.h>
float f(float x,float y){
    return(x-y);
}
main(){
    int i,n;
    float x,y,x0,y0,h;
    printf("enter the values of x0,y0,h,x:");
    scanf("%f %f %f %f",&x0,&y0,&h,&x);
    n=(x-x0)/h;
    x=x0;
    y=y0;
    for(i=0;i<=n;i++){
        y=y+h*f(x,y);
        x=x+h;
    }
    printf("the result is:",y)
}