# include <iostream>
using namespace std;
# include <cmath>
int position(double xi, double v, double a, double n, double dt) {
  cout << "acceleration: " << a << " Initial speed: " << v << " Initial position: " << xi << " Number of times: " << n << " delta t: " << dt << endl;
double t=0;
double x = xi+(v*t)+(0.5*a*t*t); 
 for(int i=1; i<=n; i++){
   cout << "at time " << t << " the position is " << x; 
   t = t + dt; 
   xi = x;
   x = xi + (v*t) + (0.5*a*t*t);
   cout << endl; }
}
int main(){
  double xi, v, a, n, dt, t=0; 
  cout << "enter the initial position, speed, acceleration:"; 
  cin >> xi >> v >> a;  
  cout << "how many times do you want to update the position of the moving body?:"; 
  cin >> n; 
  cout << "how often (in seconds) you want to update the position of the moving object?: "; 
  cin >> dt; 
  position(xi, v, a, n, dt);
 return 0;
}