#include<stdio.h>
#include<math.h>
void input(float *x1 , float *y1 , float *x2 , float *y2 )
{
  printf("Enter the X1 coordinate ;\n");
  scanf("%f",x1);
  printf("Enter the Y1 coordinate ;\n");
  scanf("%f",y1);
  printf("Enter the X2 coordinate ;\n");
  scanf("%f",x2);
  printf("Enter the Y2 coordinate ;\n");
  scanf("%f",y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  float x,y,z;
  x=(x1-x2)*(x1-x2);
  y=(y1-y2)*(y1-y2);
  z=x-y;
  *distance=sqrt(z);
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the distance between the coordinates (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);

}
int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,x2,y1,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}