#include <cstdio>
#include <map>
#include <string>
#include <iostream>
using namespace std;

//1525
int main(){
	int i, pair, key, value;
	map<int, int> m;
	cin>>pair;
	for(i = 0; i < pair; i++){
		cin>>key>>value;
		m[key] = value;
	}

	map<int, int>::iterator ite;
	for(ite = m.begin(); ite != m.end(); ite++)
		cout<<ite->first<<' '<<ite->second<<'\n';

    return 0;
}

