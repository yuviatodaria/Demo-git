#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a[10],sum=0;
	int i=0,j=0;
	int m=10000000;
	
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	
	for(i=1;i<10;i++)
	{
		sum=a[0]+a[i];
		m=min(sum,m);
	}
	
	cout<<endl<<m<<endl;
	
}
