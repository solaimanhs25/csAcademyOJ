#include<bits/stdc++.h>
using namespace std;



int main()
{
    int left[101];
int right[101];
for(int i=0;i<101;i++){left[i]=0;right[i]=0;}
    int n;
    cin>>n;

    while(n--)
    {
        int a;char c;
        cin>>a>>c;

        if(c=='L')left[a]++;
        else right[a]++;
    }
    int sum=0;
    for(int i=1;i<101;i++){
        if((left[i]>0)&&(right[i]>0))
        {
            if(left[i]>=right[i])    sum+=right[i];//sum+=min(left[i],right[i]);
            else                     sum+=left[i];
        }

    }
    cout<<sum<<endl;

}
