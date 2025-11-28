#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i + 1, j + 1);
                return;
            }
        }
    }
}

int main(){
    int size = 4;
    int arr[4]={2,7,11,15};
    int target = 22;

    two_sum(arr,size,target);
}
