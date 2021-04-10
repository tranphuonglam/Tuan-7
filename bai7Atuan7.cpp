#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	char a[1000], b[1000];
	cout<<"nhap a:";
	cin.getline(a,1000);
	cout<<"nhap b:";
	cin.getline(b,1000);
	int count = 0;
	for(int i=0;i<strlen(b);i++)
	{
		char s[1000] = " ";
		s[0] = b[i];
		int k=1;
		for(int j=i+1;j<i+strlen(a);j++)
		{
		s[k] = b[j];
		k++;
		}
		if(strcmp(a,s)==0)
		{ 
		count++;
	}
	}
	cout << count;
	return 0;
}
