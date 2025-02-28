#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int findFirstGreater(int a[], int n, int k) {
    int l = 0, h = n - 1;
    int result = -1;

    while (l <= h) {
        int mid = l + (h - l) / 2;
        
        if (a[mid] > k) {
            result = a[mid];
            h = mid - 1; 
        } else {
            l = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubbleSort(a, n);
    
    int num = findFirstGreater(a, n, k);

    if (num != -1)
        cout << num;
    else
        cout << "There is no number greater than " << k;

    return 0;
}
