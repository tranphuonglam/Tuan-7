#include <iostream>
#include <cmath>
using namespace std;
int search(int *a, int n, int max, int min)
{
  int i;//, max,min;
  int count = (max+min)/2;
	if(n==a[count]) 
	{
	return count+1;
    }
	if(n>a[count])
	{
	return search(a,count,n,max);
	}
	if(n<a[count])
	{
	return search(a,count,n,min);
}
}
 
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *p, n;
    cin>>n;
	p = a;
	int s = search(p,9,0,n);
	cout<<"vi tri so can tim:"<<n;
	return 0;
}
 
