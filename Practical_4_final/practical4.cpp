#include <iostream>
#include <array>
#include<cmath>
#include<math.h>
using namespace std;

double * read_poly(int &n){
  cout << "degree: ";
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
  cout << endl;
}


double value_poly(double *c, int n){

  double sum = 0, x;
  cout << "enter x to calculate value of the polinomial ";
  cin >> x;
  for (int i=0;i<=n;i++){
    sum += c[i] * pow(x,i);
  }
  cout << "value of the polynomial is" << sum << endl;

}
  
//sum of two polynomials (returns a polynomial),
double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr){

    dr=max(d1, d2);

    double * p3=new double[dr+1];
    double *p1k= new double[dr+1];
    double *p2k= new double[dr+1];

    for(int i=0;i<=dr;i++){
        if(i<=d1){
            p1k[i]=p1k[i];
        }
        else{
            p1k[i]=0;
        }
        if(i<=d2){
            p2k[i]=p2k[i];
        }
        else{
            p2k[i]=0;
        }
        p3[i]=p1k[i]+p2k[i];
    }
    delete[] p1k;
    delete[] p2k;
    return p3;
}

//product of two polynomials (returns one polynomial),
double * poli_mult(double * p1, int d1, double * p2, int d2, int & dr){

    dr=d1+d2;

    double * p4=new double[d1+d2+1];

    for(int h=0;h<=d1+d2;h++){
        p4[h]=0;
    }
    for(int i=0;i<=d1;i++){
        for (int j=0; j<=d2; j++){
            p4[i+j]+=p1[i]*p2[j];
        }
    }

    return p4;
}

int main()
{
    double *p1;
    double *p2;
    double *p3;
    double *p4;
    int g1;
    int d1;
    int d2;
    int dr;

    p1=read_poly(g1);
    print_poly(p1,g1);


    cout << "to perform the sum of two polynomials" << endl;
    cout << "enter polynomial 1:" << endl;
    p1=read_poly(d1);
    print_poly(p1,d1);
    cout << "enter polynomial 2:"<< endl;
    p2=read_poly(d2);
    print_poly(p2,d2);
    p3=poli_sum(p1, d1, p2, d2, dr);
    cout<< "The sum is:" << endl;
    print_poly(p3, dr);
    cout << "To perform the product of two polynomials" << endl;
    p4=poli_mult(p1, d1, p2, d2, dr);
    cout<< "The product is: " << endl;
    print_poly(p4, dr);

    delete[] p1;
    delete[] p2;
    delete[] p3;
    delete[] p4;

    return 0;
}
