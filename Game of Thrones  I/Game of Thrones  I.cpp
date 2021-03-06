﻿// Game of Thrones  I.cpp : Defines the entry point for the console application.
//

// Game of Thrones  I.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int hasPallindromicAnagram(string &s) {
	vector<int> freq(26);
	int odd;
	for (int i = 0; i < s.size(); i++) {
		freq[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		if (freq[i] % 2) odd++;
	if (odd > 1) return 0;
	else return 1;

}

int main() {
		string s;
		cin >> s;
		int flag = 0;
		flag = hasPallindromicAnagram(s);
		if (flag == 0)
			cout << "NO";
		else
			cout << "YES";
		return 0;
}



