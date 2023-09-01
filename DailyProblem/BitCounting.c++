// 1-sep 
#include <bits/stdc++.h>
using namespace std;


/* There is a function to return the number of the 
1's in the bit form of the no.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

Constraints:

0 <= n <= 105*/


void print(vector <int> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout <<"  " << *(arr.data() + i);
    }
    cout << endl;
}

// biltin method 
vector<int> countBits(int n) {
    vector <int> ans ;
    for (int i = 0 ; i <= n ; i++){
        ans.push_back(__builtin_popcount(i));
    }
    return ans;
}


// 1. Brute Force 

// This is function  Dec to Binary is not the complete 
// Function Which Consider Each And every Test Cases 
vector <int> Dec_To_Bin(int n ){
    vector <int> ans;
    // base case 
    if (n == 0 ){
        ans.push_back(0);
    }


    while(n){
        if(n%2 == 0){
            ans.push_back(0);
        }
        else{
            ans.push_back(1);
        }
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> CountBits(int n ){
    vector<int> ans; 
    vector<int> Vec_Bin;
    
    for(int i = 0 ; i<=n ; i++){
        Vec_Bin = Dec_To_Bin(i);
        int cnt = 0;
        for(int i = 0 ; i<Vec_Bin.size() ; i++){
            if(Vec_Bin.at(i) == 1) cnt++;
        }
        ans.push_back(cnt);
    }
    return ans;
}

int main()
{

    vector<int>  res = countBits(5);
    print(res);
    cout << "Brute Force " << endl;


    vector <int> vec = CountBits(5);
    print(vec);

    return 0;
}