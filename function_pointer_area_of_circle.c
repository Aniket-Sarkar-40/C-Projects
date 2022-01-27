#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float Edistance(int x1,int y1,int x2,int y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

float Area_of_circle(int x1,int y1,int x2,int y2 , float (*fptr) (int,int,int,int))
{
    float r = fptr(x1,y1,x2,y2);

    return 3.14 * r *r;
}

int main(){
    int x1,y1,x2,y2;
    float (*fptr) (int,int,int,int);
    fptr = Edistance;

    printf("Enter the 1st point \n");
    scanf("%d %d",&x1,&y1);  
    printf("Enter the 2nd point \n");
    scanf("%d %d",&x2,&y2);  
    float area = Area_of_circle(x1,y1,x2,y2,fptr);

    printf("Area of circle is %f\n",area);
    return 0;
}