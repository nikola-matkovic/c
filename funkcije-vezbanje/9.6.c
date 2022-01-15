/*9.6. Саставити програм за израчунавање површине троугла ако су задате координате његовог
темена. Површину троугла рачунати помоћу следећих формула: 

a=sqrt(pow(x2-x3,2)-pow(y2-y3,2)), b=sqrt(pow(x3-x1,2)-pow(y3-y1,2)), 
c=sqrt(pow(x1-x2,2)-pow(y1-y2,2)),

S=a+b+c/2, P=sqrt(s*(s-a)*(s-b)*(s-c)) */
#include<stdio.h>
#include<math.h>

float stranica(float x2,float x1,float y2,float y1){
    return(sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
   
}
float S(float a,float b,float c){
    float s,x2,x3,y2,y3,x1,y1;
    s=(stranica(x2,x3,y2,y3)+stranica(x3,x1,y3,y1)+stranica(x1,x2,y1,y2))/2;
    return s;
}
float povrsina(float s,float a,float b,float c){
    float p;
    s=S(a,b,c);
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    return p;
    }
int main(){
    float p,x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,s;
    printf("Unesi prvo teme:");
    scanf("%f %f",&x1,&y2);
    printf("Unesi drugo teme: \n");
    scanf("%f %f",&x2,&y2);
     printf("Unesi trece teme: \n");
    scanf("%f %f",&x3,&y3);
    a=stranica(x2,x3,y2,y3);
    b=stranica(x3,x1,y3,y1);
    c=stranica(x1,x2,y1,y2);
    s=S(a,b,c);
    p=povrsina(a,b,c,s);
    printf("Stranica a=%.2f \n",a);
    printf("Stranica b=%.2f \n",b);
    printf("Stranica c=%.2f \n",c);
    printf("s=%.2f \n",s);
    printf("Povrsina trougla je=%.2f \n",p);
    return 0;
}


