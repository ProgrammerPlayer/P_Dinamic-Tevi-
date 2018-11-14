#include <iostream>
#include<fstream>
#define nmax 1000
using namespace std;
fstream f("date.in",ios::in);
int n,L,T[nmax],a[nmax],maxi;
void read()
{
    f>>n>>L;
    for(int i=1;i<=n;i++)
        f>>a[i];
        T[0]=-1;
        maxi=0;
}
void p_dinamic()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=maxi;j>=0;j--)

if(T[j]!=0&&j+a[i]<=L){
    T[j+a[i]]=a[i];
}
    ((maxi+a[i]<L) ? maxi+=a[i]:maxi=L);

    }

}

void afisare()
{
    if(T[L]==0)
    {
        cout<<"Nu se poate";
    }
    else
        for(int i=L;i>0;i-=T[i])
    {
        cout<<"Bucata de "<<T[i]<<" metri"<<endl;

    }
}
int main()
{
    read();
    p_dinamic();
    afisare();

    return 0;
}
