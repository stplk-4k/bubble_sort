#include <stdio.h>

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        int t = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = t;
      }
    }
  }
}

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter elements of the array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, n);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}