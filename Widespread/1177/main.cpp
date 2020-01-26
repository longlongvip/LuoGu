#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

struct Range {
    int start, end;
    Range(int s = 0, int e = 0) {
        start = s, end = e;
    }
};
template <typename T>
// 整数或浮点数皆可使用,若要使用物件(class)时必须设定"小于"(<)、"大于"(>)、"不小于"(>=)的运算子功能
void quick_sort(T arr[], const int len) {
    if (len <= 0)
        return; // 避免len等于负值时宣告堆叠阵列当机
    // r[]模拟堆叠,p为数量,r[p++]为push,r[--p]为pop且取得元素
    Range r[len];
    int p = 0;
    r[p++] = Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        T mid = arr[range.end];
        int left = range.start, right = range.end - 1;
        while (left < right) {
            while (arr[left] < mid && left < right) left++;
            while (arr[right] >= mid && left < right) right--;
            std::swap(arr[left], arr[right]);
        }
        if (arr[left] >= arr[range.end])
            std::swap(arr[left], arr[range.end]);
        else
            left++;
        r[p++] = Range(range.start, left - 1);
        r[p++] = Range(left + 1, range.end);
    }
}

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
    } 
    quick_sort(arr, N);
    for(int i = 0; i < N; i++)
    {
        if(i != N - 1)
            cout << arr[i] << ' ';
        else
            cout << arr[i] << '\n';
        
    } 
    system("pause");
    return 0;   
}
