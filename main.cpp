#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	string s;
	getline(cin, s);

	while (0 < (n--)) {
		getline(cin, s);

		auto iss = istringstream{ s };
		string s2;
		while (iss.good() && !iss.eof()) {
			iss >> s2;

			reverse(s2.begin(), s2.end());

			cout << s2 << ' ';
		}

		cout << '\n';
	}

	return 0;
}