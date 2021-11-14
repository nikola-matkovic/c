/*2.24 zdtk*/

#include<stdio.h>

int main(){
    float ar,ai,br,bi;
    scanf("%f %f %f %f",&ar,&ai,&br,&bi);
    printf("Unesite ar=%f\n",ar);
    printf("Unesite ai=%f\n",ai);
    printf("Unesite br=%f\n",br);
    printf("Unesite bi=%f\n",bi);
    float z1,z2;
    scanf("%f %f",&z1,&z2);
    z1=ar+bi;
    printf("Ispisati ta dva broja u obliku z1=ar+bi to je zapravo jednako \n%f %f %f",z1,ar,bi);
    z2=ai+br;
      printf("Ispisati ta dva broja u obliku z2=ai+br to je zapravo jednako \n%f %f %f",z2,ai,br);
      printf("Zatim izracunati zbir i razliku z1 i z2");
      float zbir;
      scanf("%f",&zbir);
      zbir=z1+z2;
      printf("Ispisati zbir brojeva z1 i z2:%f",zbir);
      float razlika;
      scanf("%f",razlika);
      razlika=z1-z2;
      printf("Ispsiati razliku brojeva z1 i z2:%f",razlika);
      return 0;

    



   
    
}
