# ECE_264
PROJECT
#include <stdio.h>
#include <stdlib.h>

    /// Program 2.10 Round tables again but shorter
    float circumference(float Argfirst,float Second,float Diam);
float area(Argfirst,Second,Diam);
int main()
{
  float diameter = 2.1f;                  /// The diameter of a table
  float radius = 2.0f;                    /// The radius of a table
  const float Pi = 3.14159f;              /// Defines the value of Pi as fixed
float Cir;


   Cir = circumference(Pi,radius,diameter);

  printf("\nThe circumference is %.2f.",Cir);
 // printf("\nThe area is %.2f.\n", Pi*radius*radius);
  return 0;
}
float circumference(float Diam,float Argfirst,float Second)
{
    float Circonf;
    Second = Diam/2.0f;
    Circonf = 2.0f*Argfirst*Second;
    return  Circonf;
}
