#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect l1, Rect l2){
 l1.w = min(l2.x+l2.w,l1.x+l1.w) - max(l1.x,l2.x);
 l2.h = min(l2.y,l1.y) - max(l2.y-l2.h,l1.y-l1.h);
 if(l1.w > 0 && l2.h > 0){
  return l1.w * l2.h;
 }
 else return 0;
}
