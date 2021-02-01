#include <iostream>
#include <cmath>
using namespace std;

//Exercise1: Only-digits function
void find_digit(string word){
  int i=0;
  while (i<word.length()){
    if(word.at(i) < '0' || word.at(i) > '9'){
    cout<<"character is not a digit"<<endl;
    i = i + 1;
    }else{
    cout << "digit is found in the string" << endl;
    i = word.length();
    }
    }
  }
  
//Exercise2: find pairs of characters in a string
//determine pair of characters in a given string
int number_pairs(string s, string pair){ 
int nb_pairs=0;
string sum_of_string,str1,str2;
int number;
for(int i=0;i<s.length();i++){
  str1=s[i];
  str2=s[i+1];
  sum_of_string=str1+str2;
  if(pair==sum_of_string){
    nb_pairs=nb_pairs+1;
  }else{
    nb_pairs=nb_pairs;
  }
  }
cout<<" number of pairs of "<< pair <<" is ";
cout<<nb_pairs<<endl;
}
//determine pair of characters in a zero-terminated array

//Exercise3
class Point{
  private:
  double xcoordinate;
  double ycoordinate;
  public:
  Point(){
    xcoordinate=ycoordinate=0;
  }
  Point(double x, double y){
    xcoordinate=x; ycoordinate=y;
  }
  void displayPoint(){
    cout << "point (" << xcoordinate << "," << ycoordinate << ")" << endl;
  }
  double computedistance(){
    double d, w, z;
    cout << "enter w " << endl;
    cin >> w;
    cout << "enter z" << endl;
    cin >> z;
    d = sqrt((xcoordinate-w)*(xcoordinate-w)+(ycoordinate-z)*(ycoordinate-z));
    cout << "distance between the two points is: "<< d<<endl;

  }

};

//Exercise4
class Circle{
  private:
  double radius;
  double xco;
  double yco;
  public:
  Circle(double xc, double yc, double r){
    radius=r;
    xco=xc;
    yco=yc;
  }
  double compute_circum(){
    double circumference;
    circumference=2*3.14*radius;
    cout<<"circumference of the circle is: "<<circumference<<endl;
  }
  double compute_area(){
    double area;
    area=3.14*radius*radius;
    cout<<"are of the circle is: "<<area<<endl;
  }
  int point_circle(){
    double dist;
    double a;
    double b;
    cout <<"enter x coordinate of the point: "<<endl;
    cin>>a;
    cout<<"enter y coordinate of the point:"<<endl;
    cin>>b;
    dist = sqrt((a-xco)*(a-xco)+(b-yco)*(b-yco));
  if(dist<radius){
    cout << "point is enclosed inside the circle";
  }else{
    cout << "point is not enclosed inside the circle";
  }
}
};


int main(){
  string word;
  string s;
  string pair;
  cout << "enter word: "; 
  cin >> word; 
  find_digit(word);
  cout<<"enter a string: ";
  cin>>s;
  cout<<"enter a pair you are looking for :";
  cin>>pair;
  number_pairs(s, pair);
  Point p1=Point();
  Point p2=Point(1,2);
  p2.displayPoint();
  p2.computedistance();
  Circle c1=Circle(1,2,3);
  c1.compute_circum();
  c1.compute_area();
  c1.point_circle();

  return 0;
}
