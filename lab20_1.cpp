#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double x,y;
	x = min(r1.x+r1.w, r2.x+r2.w) - max(r1.x, r2.x);
	y = min(r1.y, r2.y) - max(r1.y-r1.h, r2.y-r2.h);
	if(x>0 && y>0) return x*y;
	else return 0;


}

int main(){
	Rect r1,r2;
	cin >> r1.x >> r1.y >> r1.w >> r1.h;
	cin >> r2.x >> r2.y >> r2.w >> r2.h;
	cout << overlap(r1,r2) << endl;
	return 0;
}
