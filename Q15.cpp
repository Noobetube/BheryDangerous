#include <iostream>
#include <math.h>
using namespace std;

struct polynomial{
int coeff;
int expo;
};
int readPoly ( struct polynomial poly[]){
int t1,i;

cout<<"\n Enter the total number of terms in the polynomial: ";
cin>>t1;
cout<<"\n Enter the COEFFICIENT and EXPONENT "<<endl;
for(i=0;i<t1;i++)
{
	cout<<"  Enter the Coefficient("<<i+1<<"):";
	cin>>poly[i].coeff;
	cout<<"     Enter the Exponent("<<i+1<<"):";
	cin>>poly[i].expo;
}
return(t1);
}

void displayPoly(struct polynomial poly[10],int term)
{
 int k;

 for(k=0;k<term-1;k++)
	cout<<poly[k].coeff<<"(x^"<<poly[k].expo<<")+";
 cout<<poly[k].coeff<<"(x^"<<poly[k].expo<<")";
}


int eval(int n1,struct polynomial poly[])
{
 int i,sum,x;
 cout<<"\n\n Enter the value of x for evaluation: ";
 cin>>x;
 sum=0;
 for(i=0;i<n1;i++)
 sum=sum + poly[i].coeff*pow(x,poly[i].expo);
 return(sum);
}


int main(){
int num;
int value;
struct polynomial p1 [20];
 cout<<"\n Enter the polynomial details:";
 num=readPoly(p1);
cout<<"\n  The polynomial is: ";
 displayPoly(p1,num);
 value=eval(num,p1);
 cout<<"\n The Resultant value of the polynomial is:"<<value<<endl;

return 0;
}
