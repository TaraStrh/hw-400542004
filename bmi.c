#include <stdio.h>
int main( void )
{

  int weightInKilograms;
  int heightInMeters;
  int BMI;
  
  printf("enter weightInKilograms");
  scanf( "%d" , &weightInKilograms);
  
  printf("enter heightInMeters");
  scanf( "%d" , &heightInMeters);
  
  BMI = weightInKilograms/heightInMeters*heightInMeters ;
  
  printf("BMI is %d/n" , BMI);
  
  if ( BMI <= 18.5 ) {
  	printf("Underweight");
  }
  if ( 18.5 <= BMI <= 24.9 ) {
  	printf("Normal");
  }
  if ( 25 <= BMI <= 29.9) {
  	printf("Overweight");
  }
  if (BMI >= 30) {
  	printf("Obese");
  }
  return 0;
}
