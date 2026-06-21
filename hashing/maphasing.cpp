// map is always store in sorted order
#include <map>
#include <iostream>
using namespace std;
// but write like this it give u time complexity is O(n log n)
map<int, int> count;  
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    
    //    map<int ,int> count;
    //    for(int i=0;i<n;i++){
    //     count[arr[i]]++;
    //    }
    
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << count[number] << " ";
    }
}