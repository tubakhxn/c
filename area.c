#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
int choice;
printf("enter\n1 to find the area of parallelogram\n2to find area of trapazoid\n3 to find the area of rhombus\n4 to find the area of sphere\n5 to find area of elipse\n");
scanf("%d",&choice);
switch(choice){
   case 1:{
      int b,h;
	  float area;
	  printf("enter base and height of the parallelogram\n");
	  scanf("%d%d",&b,&h);
	  area=(float)(b*h);
	  printf("area of the parallelogram is %f\n",area);
	  break;
	}
    case 2:{
      float height, longbase, shortbase,area;
	  printf("enter height, shortbase, longbase of trapezoid\n");
	  scanf("%f%f%f",&height,&shortbase,&longbase);
	  area=(float)(longbase+shortbase)*height/2;
	  printf("area of trapezoid is %f\n",area);
	  break;
	}
	case 3:{
	  float side, height,area;
	  printf("enter the side and height of the rhombus\n");
	  scanf("%f%f",&side,&height);
	  area=(float)(side*height)/2;
	  printf("area of the rhombus is %f\n",area);
	  break;
	}
	case 4:{
	  float radius, area;
	  printf("enter the radius of the sphere\n");
	  scanf("%f",&radius);
	  area=(float)(4*pi*radius*radius);
	  printf("area of the sphere is %f\n",area);
	  break;
	}
	case 5:{
		float majoraxis, minoraxis, area;
		printf("enter the majoraxis and minoraxis of the ellipse\n");
	  scanf("%f%f",&majoraxis,&minoraxis);
	  area=(float)(pi*majoraxis*minoraxis);
	  printf("area of the ellipse is %f\n",area);
	  break;
	}
	default:{
	  printf("invalid choice\n");
	  break;
	}
  }
}