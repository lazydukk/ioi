#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    
    int a, b;
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a >> b; //inputs a and b as integers

    for (int i = a; i <= b; i++){
        if (i <= 9){
            cout << numbers[i] << std::endl;
        } else {
            if (i % 2 == 0){
                cout << "even" << std::endl;
            } else {
                cout << "odd" << std::endl;
            }
        }
    }
    return 0;
}