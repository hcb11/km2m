/* KM2M is an Open Source app. It Converts the
Metric Unit "Kilometer" to the Imperial unit
"Mile"
 My Instagram: https://www.instagram.com/hcbose_techguy/
 My Facebook: https://www.facebook.com/harshad.c.bose/
 My Discord: xx_Patrickroll_xx#1405
 My Twitter: https://twitter.com/TechieUltraz

 Made by Harshad Chandrabose on Oct. 13 2021*/
 #include <stdio.h>
 #define Mile 1.609344 //Defines 1 Mile in kilometers
 #define km 0.6213712 //Defines 1 Kilometer in miles
 int main(void){//Defines Main
  double result, input;//Result is the resuly post-conversion, input is the user input in kilometers
  char stub[] = "hello";
  printf("KM2M Converter Utility \n This Converts kilometer to Mile\n\n Enter kilometers: ");//Displays Text to the user
  scanf("%lf", &input);//Gets input from the user
  result = input / Mile;
  printf("\n\n%lf", input);
  printf(" Kilometers is %lf", result);
  printf(" Miles");
  scanf("%str", &stub);
 }
