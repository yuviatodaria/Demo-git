#include <bits/stdc++.h>
using namespace std;

int a[5005],b[5005];
int ans[1002][1002];
int res,i,n,m,t,j;   // variable decleration
int main()
{
cout<<"number of test cases:  ";
cin>>t;         // reading test casses
while (t--)
{
cout<<"Enter number of container and queries:  ";
cin>>m>>n;       //reading  number of test cases and number of queries respectively    
for (i=1;i<=n;i++)
scanf("%d%d",&a[i],&b[i]);   //reading  distance to be travelled by robots  
for (i=0;i<=n;i++)
for (j=0;j<=n;j++)
ans[i][j]=1000000000;     // creating a array which represents placement of containers
ans[0][1]=abs(b[1]-a[1]); 
for (i=1;i<=n;i++)
for (j=0;j<i;j++)
{
ans[j][i+1]=min(ans[j][i+1],ans[j][i]+abs(b[i]-a[i+1])+abs(a[i+1]-b[i+1]));
ans[i][i+1]=min(ans[i][i+1],ans[j][i]+((j!=0)*abs(b[j]-a[i+1]))+abs(a[i+1]-b[i+1])); //finding  distance to be travelled
}
res=1000000000;
for (i=0;i<=n;i++)
res=min(res,ans[i][n]);    //Assigning minimum distance
cout<<"Minimum Distance Travelled  is "<<res<<endl;  // printing minimum distance
cout<<endl;
}
}
