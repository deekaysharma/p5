#include <iostream>

using namespace std;

inline float triangle_area(float base, float height)

{

float area;
area = (0.5 * base * height);
return area;
}
int main(void)
{

float b, h, a;
cout<<"Enter the value of b";
cin>>b;
cout<<"Enter the value of h";
cin>>h;
a = triangle_area(b, h);
cout<<"\nArea = "<<a<<endl;
    return 0;
}
