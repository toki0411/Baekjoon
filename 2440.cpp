#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
	cout << '\n';
	while (n--) {
		for (int i = 0; i < n; i++) {
			cout << '*';
		}	
		cout << '\n';
	}
}