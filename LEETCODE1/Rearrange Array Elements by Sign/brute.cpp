void RearrangeBySign(int arr[], int n){
    int pos[n/2]; // To store all +ve numbers
    int posI = 0;
    int neg[n/2]; // To store all -ve numbers
    int negI = 0;

    // Step 1: Split into +ve and -ve arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[posI++] = arr[i];
        } else {
            neg[negI++] = arr[i];
        }
    }

    // Step 2: Merge them back alternately
    posI = 0;
    negI = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = pos[posI++];  // Even index → +ve
        } else {
            arr[i] = neg[negI++];  // Odd index → -ve
        }
    }
}
