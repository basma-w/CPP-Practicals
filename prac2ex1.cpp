# include <iostream>
using namespace std;
# include <cmath> 
int point(float x, float y, float cx, float cy, float r){
  float d=sqrt((x-cx)*(x-cx)+(y-cy)*(y-cy));
  if(d<r){
    cout << "point is enclosed inside the circle";
  }
  else{
    cout << "point is not enclosed inside the circle";}
  }

int main(){
  float x, y, cx, cy, r;  
  cout << "enter the x coordinate of the point:";
  cin >> x; 
  cout << "enter the y coordinate of the point:";
  cin >> y; 
  cout << "enter the x coordinate of the center of the circle"; 
  cin >> cx; 
  cout << "enter the y coordinate of the center of the circle"; 
  cin >> cy; 
  cout << "enter the radius of the circle:";
  cin >> r; 
  point(x, y, cx, cy, r);
  return 0;


}