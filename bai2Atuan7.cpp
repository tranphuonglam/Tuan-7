#include <iostream>
using namespace std;
int pointer(int *a)
{
	int n = sizeof(a);
	cout << n <<endl;
}
int main()
{
	int *p;
	p = new int[100];
	cout<<"ham:";
	pointer(p);
    cout<<"main:" <<sizeof(p)<<endl;
	
}
