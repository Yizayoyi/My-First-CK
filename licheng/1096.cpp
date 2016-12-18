#include<iostream>
using namespace std;

int main()
{
	long n, i, a[100][100], j, s[100] = {0}, m;
	while(cin >> n)
    {
        for (j = 0; j < n; j++)
        {
            cin >> m;
            if (m != 0)
            {
                for (i = 0; i < m; i++)
                {
                    cin >> a[j][i];
                }
                for (i = 0; i < m; i++)
                {
                    s[j] += a[j][i];
                }
            }
        }
        for (j = 0; j < n; j++)
        {
            cout << s[j] << endl;
            if (j < n - 1)
                cout << endl;
        }
        for (j = 0; j < n; j++)
        {
            s[j] = 0;
        }
    }
	return 0;
}
