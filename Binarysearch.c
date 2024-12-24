#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Array must be sorted
    int n = 5, key, low = 0, high = n - 1, mid;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2 ;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found.\n");
    return 0;
}

//output
Enter the element to search: 40
Element found at index 3
