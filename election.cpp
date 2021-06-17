#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a = 0, b = 0;
	for(int i = 0; i < s.size(); ++i) 
	{
		if(s[i] == 'A') 
		{	
			a++;
		}
		else if(s[i] == 'B') 
		{
			b++;
		}
	}
	if(a > b) 
	{
		cout << "A" << "\n";
	}
	else if(b > a) 
	{
		cout << "B" << "\n";
	}
	else 
	{
		cout << "Coalition government" << "\n";
	}
}

