#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    map<int, int> keeper;
    vector<int> numbers;
    numbers.push_back(INT_MIN);
    for(int i = 1; i <= n; i++){
    	int e;
    	scanf("%d", &e);
    	numbers.push_back(e);
    	keeper.insert(make_pair(e+m, i));
    }
    
    for(int i = 1; i <= n; i++){
    	if(keeper[numbers[i]] > 0){
    		printf("%d  %d\n", i - 1, keeper[numbers[i]] - 1);
    	}
    }
    return 0;


}