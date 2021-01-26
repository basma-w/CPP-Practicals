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
  cout << "the value of the sum at x is: " << sum << endl;

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
  cout << "the sum of the two polynomials is: ";
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
  
  //question3
 double * poly_mult(double *b1, int g1, double *b2, int g2){
  double * a1 =new double[(g1+1)*(g2+1)];
  double * a2 = new double[(g1+1)*(g2+1)];
  int counter = 0;
  for (int s=0;s<=g1;s++){
    for (int t=0;t<=g2;t++){
       a1[counter] = b1[s]*b2[t];
       a2[counter] = s+t;
       counter +=1;
       
    }
  }
  double * newarray = new double[g1+g2+1];
  for (int s=0;s<=g1+g2;s++){
    newarray[s]=0;
    for (int t=0;t<=(g1+1)*(g2+1)-1;t++){
      if(a2[t] == s){
        newarray[s] += a1[t];
        
      }
    }
    
  }
  cout << newarray[0]<< endl << "the multiplication of the two polynomial is: " << newarray[0];
  if (g1+g2+1 > 1){
    cout << " + ";
    for (int s=1;s<g1+g2;s++){
      cout << newarray[s] << "*x^"<< s << " + ";
    }
    cout << newarray[g1+g2]<< "*x^"<<g1+g2;
  }
  
  
}

  int main(){
    double *p1;
    double *p2;
    double *p3;
    double *p4;
    int g1;
    int g2;
    double x;
    int d1;
    int d2;
    int dr;
  

    p1=read_poly(g1);
    print_poly(p1,g1);
    p2=read_poly(g2);
    calcul_poly(p1, g1, x);
    p3=read_poly(d1);
    p4=read_poly(d2);
    poli_sum(p3, d1, p4, d2, dr);
    poly_mult(p1, g1, p2, g2);

    delete [] p1;
    delete [] p2;
    return 0;

  }