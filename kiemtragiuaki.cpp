#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double TBD;
	double LS;
	double KV;
	double nam;
	double a,b;
	
	cout<<"nhap so tien ban  dau:";
	cin>>TBD;
	cout<<"nhap lai suat:";
	cin>>LS;
	cout<<"nhap so tien ky vong:";
	cin>>KV;
	if(TBD<=KV)
	{
    	
    	a = double (KV/TBD);
    	b = double (1+LS);
    	nam = double (log(a)/log(b));
    	cout<<"so nam ban can de dat so tien ky vong:"<<nam;
    	
    }  
   	else
	   cout<<"ban da sai roi:";
	
	return 0;

}

