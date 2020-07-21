#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Points{
    public: double x,y;
};
class Polygon
{
public:
    Points* points;
    Polygon(int npoints){
            points = new Points[npoints];
    }
};
void  area(Polygon p , int n){

 double farea=0;
    for(int i=1;i<n-1;i++){
        double x1=p.points[i].x-p.points[0].x;
        double y1=p.points[i].y-p.points[0].y;
        double x2=p.points[i+1].x-p.points[0].x;
        double y2=p.points[i+1].y-p.points[0].y;
        // cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        farea+=(x1*y2)-(x2*y1);
    }
    cout << abs(farea/2)<< endl;
}
int main()
{
    // cout << "Enter the number of points for polygon" << endl;
    int n; cin >> n;
    Polygon p(n);
    // cout << "Enter the coordinate for polygon " << endl;
    for(int i=0;i<n;i++){
        cin >> p.points[i].x >> p.points[i].y;

    }
    area(p,n);
    return 0;
}
