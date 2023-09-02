/*Product of the Array Except itself element  */
#include <bits/stdc++.h>
using namespace std;

/*Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

void print(vector<int> arr){
    for(int i=0 ; i<arr.size() ; i++){
        cout << "   " << *(arr.data() + i);
    }
    cout<<endl;
}


/*Brute Approach */
int productOfVector(vector<int> arr){
    int ans = 1;
    for(int i = 0 ; i <= arr.size()-1  ; i++){
        if(arr[i] != 0 ){
            ans *= arr[i];
        }
        else{
            continue;
        }
    }
    return ans;
}

vector<int> productExceptSelf(vector<int>& nums) {
    vector <int> res(nums.size());
    int ans = productOfVector(nums);
    for(auto i = 0 ; i<= nums.size()-1 ; i++){
        try{
            if(nums[i] != 0){
                res[i] = ans/ nums[i];
            }
            else{
                res[i] = ans;
            }
            
        }
        catch(const exception& e){
            throw e;
            e.what();
        }
    }
    return res;
}

/* 2 Approach to solve */
vector<int> productExceptionOfItSelf(vector<int> nums ){
    vector <int> res(nums.size() , 1);
    for(int i=0 ; i<nums.size() ; i++){
        for(int j=0 ; j<nums.size() ; j++){
            if( i != j ){
                res[i] *= nums[j];
            }
            else{
                continue;
            }
        }
    }
    return res;
}

/*3. Most Optimal Approach */

int main()
{   
    vector<int> nums = {1,-9,2,3,0,9};
    print(nums);
    int ans = productOfVector(nums);
    cout << " ans = " << ans << endl;

    vector<int> res = productExceptionOfItSelf(nums);
    print(res);
    
    return 0;
}