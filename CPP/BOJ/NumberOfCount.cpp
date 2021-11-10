#include <iostream>
using namespace std;

int NumberOfCount() {


  //배열 초기화 방법 검색 참조
  int count[10] = {};
	int a, b, c;
 
	cin >> a >> b >> c;
 
	int res = a * b * c;
 
 
	while(res != 0) {
    int num = res % 10;
		count[num]++;	
		res /= 10;		
	}
 
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}