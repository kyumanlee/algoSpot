//============================================================================
// Name        : 1158.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
using namespace std;

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	queue<int> q;

	for ( int i = 1; i <= n; i++ )
		q.push( i );


	printf("<");
	for ( int i = 0 ; i < n-1; i++ ) {
		for ( int j = 0; j < m - 1; j++ ) {
			q.push( q.front() );
			q.pop();
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>", q.front());


	return 0;


}
