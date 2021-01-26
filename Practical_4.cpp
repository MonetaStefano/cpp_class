#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

double * read_poly(int &n);
void print_poly(double *c, int n);
double * compute_poly(double *c, int n, double x);
double * poly_sum(double * p1, int d1, double * p2, int d2, int & dr);
double * poly_multi(double * p1, int d1, double * p2, int d2, int &dr);

inline int max(int n1, int n2){ 
  return (n1 > n2) ? n1 : n2;
}

int main() {
  double *p1;
  double *p2;
  double *p1_2;
  double *p1_p2;
  int g1, g2, g1_2, g1_g2;
  double x;
  cout << "At what point do you wish to evaluate the plynomial? " << endl;
  cin >> x;

  p1=read_poly(g1);
  cout << "Poly 1: ";
  print_poly(p1,g1);
  cout << "The value of poly is: ";
  compute_poly(p1,g1,x);
  
  p2=read_poly(g2);
  cout << "Poly 2: ";
  print_poly(p2,g2);
  cout << "The value of poly is: ";
  compute_poly(p1,g1,x);
  
  p1_2=poly_sum(p1, g1, p2, g2, g1_2);
  cout << "The sum is: ";
  print_poly(p1_2,g1_2);
  p1_p2=poly_multi(p1, g1, p2, g2, g1_g2);
  cout << "The product is: ";
  print_poly(p1_p2,g1_g2);

  delete[] p1;
  delete[] p2;
  delete[] p1_2;
  delete[] p1_p2;
}


double * read_poly(int &n){
  cout << "Degree: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "Coefficient of degree " << i << ": ";
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

double * compute_poly(double *c, int n, double x){
  double count=0;
  int i;
  count += c[0];
    for(i=1;i<=n;i++)
      count += c[i] * pow(x, i);
  cout << count << endl;
}

double * poly_sum(double * p1, int d1, double * p2, int d2, int &dr){
  int i;
  dr = max(d1, d2);
  double * c=new double[dr+1];
  for (i=0;i<=dr;i++){
    while (i<=d1 && i<=d2){
      c[i] = p1[i]+p2[i];
      i++;
    }
    if (d1>d2)
      c[i] = p1[i];
    else
      c[i] = p2[i];
  }
  return c;
}


double * poly_multi(double * p1, int d1, double * p2, int d2, int &dr){
  int i, j, x, temp;
  dr = d1+d2;
  double * c=new double[dr+1];
  for (x=0;x<=dr;x++){
    temp = 0;
    for (i=0;i<=d1;i++){
      for (j=0;j<=d2;j++){
        if (i+j==x)
          temp += p1[i]*p2[j];
      }
    c[x] = temp;
    }
  }
  return c;
}