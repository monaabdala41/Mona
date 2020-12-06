//abstract claas shape class
#include<iostream>
using namespace std;
class shape
{
protected:
float width,height,side,no,radio,willful,peri,a,b,c;
public:
void set_values(float w,float h)
{
width=w;
height=h;
}
void set_side(float s)
{
side=s;
}
void set_no(float n)
{
no=n;
}
void set_radio(float r)
{
radio=r;
}
void set_willful(float f,float p)
{
willful=f;
peri=p;
}
void set_a(float x,float y)
{
a=x;
b=y;
}
void set_c(float z)
{
c=z;
}
virtual float area(void)=0;
 virtual float perimeter(void)=0;
};
class polygon:public shape
{
public:
float area(void)
{
return(willful*peri/2);
}
float perimeter(void)
{
return(side*no);
}
};
class ellipse:public shape
{
public:
float area(void)
{
return(a*b*3,14);
}
float perimeter(void)
{
return(3/4*(3.14*a*b*c));
}
};
class triangle:public polygon
{
public:
float area(void)
{
return(width*height/2);
}
float perimeter(void)
{
return(height*width*side);
}
};
class rectangle:public polygon
{
public:
float area(void)
{
return(width*height);
}
float perimeter(void)
{
return((width*height)/2);
}
};
class square:public polygon
{
public:
float area(void)
{
return(side*side);
}
float perimeter(void)
{
return(4*side);
}
};
class circle:public ellipse
{
public:
float area(void)
{
return(radio*radio*3,14);
}
float perimeter(void)
{
return(2*radio*3,14);
}
};
int main()
{
float width=0,height=0,side=0,no=0,radio=0,willful=0,peri=0,a=0,b=0,c=0;
polygon poly;
ellipse elp;
triangle trgl;
rectangle rect;
square squr;
circle cir;
shape *p1=&poly;
shape *p2=&elp;
polygon *p3=&trgl;
polygon *p4=&rect;
polygon *p5=&squr;
ellipse *p6=&cir;
cout<<"enter the total side of polygon:\n";
cin>>side;
p1->set_side(side);
cout<<"enter tota side of polygon\n";
cin>>no;
p1->set_no(no);
cout<<"the total of side: is\n";
cout<<no<<endl;
cout<<"enter the lenght of dent and cirumference lenght of polygon\n";
cin>>willful>>peri;
p2->set_willful(willful,peri);
cout<<"enter the larges of radio and smaller radios of ellipse\n";
cin>>a>>b>>c;
p2->set_a(a,b);
p2->set_c(c);
cout<<"enter the lenght of the base and height of traingle\n";
cin>>width>>height;
p3->set_values(width,height);
cout<<"enter the lenght of the tree side of triangle\n";
cin>>height>>width>>c;
p3->set_values(width,height);
p3->set_c(c);
cout<<"enter the width and height of rectangle\n";
cin>>width>>height;
p4->set_values(width,height);
cout<<"enter the side of square\n";
cin>>side;
p5->set_side(side);
cout<<"enter the radio of the circle \n";
cin>>radio;
p6->set_radio(radio);
cout<<"the area of polygon: is\n";
cout<<p1->area()<<endl;
cout<<"the permieterof polygonis: is\n";
cout<<p1->perimeter()<<endl;
cout<<"the area of ellipse: is\n";
cout<<p2->area()<<endl;
cout<<"the perimeter of ellipse: is\n";
cout<<p2->perimeter()<<endl;
cout<<"the area of triangle: is\n";
cout<<p3->area()<<endl;
cout<<"the perimeter of triangle: is\n";
cout<<p3->perimeter()<<endl;
cout<<"the area of rectangle: is\n";
cout<<p4->area()<<endl;
cout<<"the perimeter of polygon: is\n";
cout<<p4->perimeter()<<endl;
cout<<"the area of square: is\n";
cout<<p5->area()<<endl;
cout<<"the perimeter of square: is\n";
cout<<p5->perimeter()<<endl;
cout<<"the area of circle: is\n";
cout<<p6->area()<<endl;
cout<<"the perimeter of circle: is\n";
cout<<p6->perimeter()<<endl;
return 0;
}