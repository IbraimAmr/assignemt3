template <typename ElementType>
void mergesort(std::vector<int>& arr) {
    int middle;
    int low, high, a, b;
    if (low < high) {
        middle = (low + high) / 2;
        mergesort(a, b, low, middle);
        mergesort(a, b, middle + 1, high);
        merge(a, b, low, middle, high);
    }
}
void merge(int* m, int* n, int low, int  middle, int high) {
    int h, i, j, k;
    h = low;
    i = low;
    j = middle + 1;

    while ((h <= middle) && (j <= high)) {
        if (m[h] <= m[j]) {
            n[i] = m[h];
            h++;
        }
        else {
            n[i] = m[j];
            j++;
        }
        i++;
    }
    if (h > middle) {
        for (k = j; k <= high; k++) {
            n[i] = m[k];
            i++;
        }
    }
    else {
        for (k = h; k <= middle; k++) {
            n[i] = m[k];
            i++;
        }
    }
    for (k = low; k <= high; k++)
        m[k] = n[k];
}