int largest(int arr[], int n) {
    // Code Here
    int max_val = arr[0];
    for(int i; i < n ; i++){ //! always initialise i = 0
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    return max_val;
}