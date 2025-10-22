#define N 100010
#include<cstdio>
#include<iostream>


int mySortAndCount()(int* arr, int arrSize){
    // 此处完善函数，返回不同数字个数k
    // 你可以通过添加新的函数来完成该任务

}


int main() {

    int n, arr[N], k;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    k = mySort(arr, n);

    for(int i = 0; i < n - 1; i++)
        cout << arr[i] << ' ';
    cout << arr[n - 1] << endl;

    cout << "k = " << k << endl;

    // 时间复杂度：
    // 空间复杂度：

    return 0;
}