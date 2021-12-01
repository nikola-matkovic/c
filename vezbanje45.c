/* Izracunati faktorijal nekog broja,ako je broj neparan izarcunati taj broj na kubni
ako je paran izarcunati taj broj na kvadrat*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,i,s=1,t;
printf("Uneti broj koji izarcunava faktorial=");
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=s*i;
   }
   printf("Faktorijal od %d je %d\n",n,s);
if(n%2==1){
    t=pow(s,3);
    printf("Ako je broj neparan jednak je=%d\n",t);
}
else if(n%2==0){
    t=pow(s,2);
    printf("Ako je broj paran jednak je=%d\n",t);
}

return 0;

}
