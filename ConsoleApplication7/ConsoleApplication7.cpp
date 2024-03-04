#include <iostream>
using namespace std;
int	main() {
	int so, tongle = 0;
	cout << "Nhap so";
	cin >> so;
	for (i=0,i<=so;i++) {
		if (1%2!=0)
		{
			cout << i << " ";
			tongle = tongle + i;

		}

	}
	cout << "\nTong cac so le tu 0 den " << so << "la" << tongle;
	return 0;
}