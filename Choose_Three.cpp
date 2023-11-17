#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;

for (int i = 0; i < t; i++)
{
   int a,b;
cin>>a>>b;
 
 
int c[a];
for (int j = 0; j < a; j++)
{
    cin>>c[j];
}
int flag=0;
for (int j = 0; j < a; j++)
{
   for (int k = j+1; k < a; k++){
   for (int h = k+1; h < a; h++)
   
    {
    if(c[j]+c[k]+c[h]==b)
    {
flag=1;
break;

    }
    
   }
   }
   
   
}
if(flag==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

    return 0;
}
