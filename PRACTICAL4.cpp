#include <iostream>
#include <cmath>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}
//question 1
double calcul_poly(double *c, int n, double x){
  double sum; 
  cout << "enter a value of x: ";
  cin >> x;
  sum = c[0];
  for (int i=1;i<=n;i++){ 
    sum = sum+(c[i]*pow(x,i)); 

  }
  cout << sum << endl;

}

//question 2
double * poli_sum(double *p1, int d1, double *p2, int d2, int &dr){
  cout << "the degree of d1 is: "; 
  cin >> d1; 
  cout << "the degree of d2 is: "; 
  cin >> d2; 
  double * e=new double[d1+1];
  double * f= new double [d2 +1];
  for(int g=0;g<=d1;g++){
    cout << "coefficient of degree " << g << ": ";
    cin >> e[g];
  }
  for(int h=0;h<=d2;h++){
    cout << "coefficient of degree " << h << ": ";
    cin >> f[h];
  }

  int min;

  if(d1<=d2){
    dr=d2;
    cout << "the polynomial has degree: " << dr << endl;
    min = d1;

  } else {
    //d1=d2;
    //d2=dr;
    dr=d1;
    cout << "the polynomial has degree: " << dr;
    min=d2;
  }

  int g;
  cout << e[0] + f[0];
  if (min>0){
    cout << " + ";
  }
  for(g=1;g<min;g++){
    cout << e[g] + f[g] << "*x^" << g << " + ";
  }
  if(min>0){
    cout << e[min] + f[min] << "*x^" << g;
  }
  if(d1<=d2){
    int j ;
    for(j=min+1; j<dr; j++){
      cout << f[j] << "*x^" << j << "+";
    }
    if (dr>0){
      cout << f[dr] << "*x^" << j;
      cout << endl;
    }
  }
   else{
    int j ;
    for(j=min+1; j<dr; j++){
      cout << e[j] << "*x^" << j << "+";
    }
    if (dr>0){
      cout << e[dr] << "*x^" << j;
      cout << endl;
    }
  }


    
}
//question 3
double * poli_mult(double *p3, int d3, double *p4, int d4){
  cout << "the degree of d3 is: "; 
  cin >> d3; 
  cout << "the degree of d4 is: "; 
  cin >> d4; 
  double * y=new double[d3+1];
  double * z= new double[d4+1];
  for(int s=0;s<=d3;s++){
    cout << "coefficient of degree " << s << ": ";
    cin >> y[s];}
  for(int t=0;t<=d4;t++){
    cout << "coefficient of degree " << t << ": ";
    cin >> z[t];
  } 
  cout << y[0]*z[0];
  int c;
  c = d3 + d4;
  if(c>0){
    cout <<"+";
  }
  for(int s=1;s<=d3;s++){
    for (int t=1;t<=d4;t++){
      cout << y[s]*z[t] << "*x^" << s+t << "+";
    } 
    }
  if(c>0){
    cout << y[d3]*z[d4] << "*x^"<< d3+d4;}

  }
  int main(){
    double *p1;
    double *p2;
    double *p3;
    double *p4;
    int g1;
    double x;
    int d1;
    int d2;
    int dr;
    int d3;
    int d4;

    p1=read_poly(g1);
    print_poly(p1,g1);
    p1=read_poly(d1);
    p2=read_poly(d2);
    calcul_poly(p1, g1, x);
    poli_sum(p1, d1, p2, d2, dr);
    p3=read_poly(d3);
    p4=read_poly(d4);
    poli_mult(p3, d4, p4, d4);

    delete [] p1;
    delete [] p2;
    delete [] p3;
    delete [] p4;
    return 0;

  }