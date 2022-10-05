#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto n = int{};
	cin >> n;

	auto mx = int{ 0 };
	while (0 < (n--)) {
		auto p = int{ 0 };
		for (auto i = 0; i < 3; ++i) {
			int x, y, z;
			cin >> x >> y >> z;

			p += a * x + b * y + c * z;
		}

		if (mx < p) {
			mx = p;
		}
	}

	cout << mx;

	return 0;
}