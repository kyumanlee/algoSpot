#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> a(1001);
	int c, n;
	int i, j;
	int index;
	double avg, sum;

	scanf("%d", &c);

	for ( i = 0 ;  i < c; i++ ) {

	index = 0 ;
	sum = 0.0 ;
	avg = 0.0;

		cin >> n;

		for ( j = 0 ; j < n ; j++ ) {

			cin >> a[j];

			sum += a[j];
		}
		avg = sum / n;

		for ( j = 0; j < n ;j++ ) {
			if ( a[j] > avg )
				index++;
		}
		avg = (double)index / n * 100;
		printf("%2.3lf%%\n",avg);

	}



	return 0;
}
