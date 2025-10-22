#define N 100010
#define K 100010
#include<cstdio>
#include<iostream>

using namespace std;

void rotate(int* nums, int numsSize, int k){
    // 此处完善函数

}

int main() {

    int n, k, nums[N];

    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    rotate(nums, n, k);

    for(int i = 0; i < n - 1; i++)
        cout << nums[i] << ' ';
    
    cout << nums[n - 1] << endl;

    // 时间复杂度：
    // 空间复杂度：

    return 0;
}