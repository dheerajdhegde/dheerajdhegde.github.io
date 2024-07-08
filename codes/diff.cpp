#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string a[] = { "HTML", "Devops", "Java", "React" };
	string b[] = { "Python","Java"};
	int n = sizeof(a) / sizeof(a[0]);

	vector<string> v(10);
	vector<string>::iterator it, st;

	sort(a, a + n);
	sort(b, b + n);

	it = set_difference(a, a + n, b, b + n, v.begin());

	cout << "Students attending first class only are :\n";
	for (st = v.begin(); st != it; ++st)
		cout << ' ' << *st;
	cout << '\n';

	return 0;
}
