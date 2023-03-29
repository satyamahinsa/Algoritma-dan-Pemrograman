int binary_search(int array[], int low, int high) {
  if(high >= low) {
    int mid = (low + (high - low)) / 2;

    if((mid == high || array[mid + 1] <= array[mid]) && (mid == low || array[mid] >= array[mid + 1])) {
      return array[mid];
    } else if(mid > low && array[mid - 1] > array[mid]) {
      return binary_search(array, low, mid - 1);
    } else {
      return binary_search(array, mid + 1, high);
    }
  }
}