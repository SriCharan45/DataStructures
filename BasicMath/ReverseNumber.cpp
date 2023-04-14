// Problem Link : https://leetcode.com/problems/reverse-integer/description/

#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
	long long res;
	if(x < 0){
		string str = to_string(x);
		int l = 0 , r = str.size()-1;
		while(l < r){
			swap(str[l++] , str[r--]);
		}
		res =  stoll('-' + str);
	}
	else{
		string str = to_string(x);
		int l = 0 , r = str.size()-1;
		while(l < r){
			swap(str[l++] , str[r--]);
		}
		res = stoll(str);
	}
	return (res > INT_MAX || res < INT_MIN) ? 0 : res;
}

int main(){
	int x;
	cin >> x;
	cout << reverse(x);
	return 0;
}
