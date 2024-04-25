#include "IsKPereodic.h"

bool isKPereodic(string str, int K)
{
	if ((str.size() % K) != 0)
	{
		cout << "String is not multiplay " << K << endl;
		return false;
	}
	string pat = str.substr(0, K);								
	int j = 0;
	for (int i = K; i < str.size(); i++)
	{
		if (pat[j] == str[i])
		{
			j++;
			if (j == K)
				j = 0;
		}
		else
		{
			cout << "String is not multiplay " << K << endl;
			return false;
		}
	}
	cout << "String is multiplay " << K << endl;
	return true;
}