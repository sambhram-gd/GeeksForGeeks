int missingNum(int *arr, int size) {
    int i, j, temp;

    // Bubble sort
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // After sorting, check which number is missing
    for (i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1;  // Found missing number
        }
    }

    // If all numbers till n-1 are present, missing is n
    return size + 1;
}
