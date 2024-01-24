#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,s,y;
	cout << "Enter the number :";
	cin >> n;

	for (i = n; i >= n; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (k = i-1;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}

	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (s = n - 1;s >= i;s--)
			cout << "  ";
		for (y = i;y < n - 1;y++)
			cout << "  ";
		for (k = i;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}

	for (i = 1;i <= n-1;i++)
	{
		for (j = 0;j <= i;j++)
			cout << " " << j;
		for (s = n;s > i;s--)
			cout << "  ";
		for (y = i;y <= n-2;y++)
			cout << "  ";
		for (k = i;k >= 0;k--)
			cout << " " << k;
		cout<<endl;
	}

	for (i = n; i >= n; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (k = i - 1;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}
	return 0;
}

