#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main() {
	vector<int> vec;
	for(int size = 0 ; cin>> size ; )
	{
		map<int,int> Set;
		int flag = 1;
		for(int i = 0,j = 0;j < size;j++)
		{
			cin >> i ;
			vec.push_back(i);
		}
		for(int i = 0 ; i < size-1;i++)
			Set[abs(vec[i+1]-vec[i])] = 1;
		for(int i = 1 ; i < size;)
			flag &= Set[i++];
		cout << (flag?"Jolly\n":"Not jolly\n");
		vec.clear();
	}
	return 0;
}
