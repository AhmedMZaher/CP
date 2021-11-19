// By TheConfessor,
#include <iostream>
#include <limits>
using namespace std;
#include <cstdlib>
int main()
{
	string s;
	cin >> s;
	int ans = 0;
	char cur = 'a';
	for (int i = 0; i < s.size(); i++){
		int add = min(abs(cur - s[i]), 26 - abs(cur - s[i]));
		ans += add;
		cur = s[i];
	}
	cout << ans;
	return 0;
}
