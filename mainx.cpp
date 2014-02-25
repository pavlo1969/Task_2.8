#include <cstdlib>
#include <iostream>

using namespace std;



int main()
{
 int k=5;
int m=10;

struct A{
int x;
int y;
int z;
}B[k];

for(int n=0;n<k;n++)
{
cout<<"x=";
cin>>B[n].x;

cout<<"y=";
cin>>B[n].y;
cout<<"z=";
cin>>B[n].z;
}
for(int j = 0; j<k; j++)
{
for(int i = 0; i < k - 1; i++)
{
if (B[i+1].z > B[i].z)
{
A tmp;
tmp=B[i];
B[i] = B[i+1];
B[i+1] = tmp;
}
}

}
for(int n=0;n<k;n++)
{

cout<<"Point ";
cout<<B[n].x;
cout<< B[n].y;
cout<<B[n].z;
cout<<endl;
}

system("PAUSE");
return EXIT_SUCCESS;
}
