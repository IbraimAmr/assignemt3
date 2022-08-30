template <typename ElementType>
void quicksort(std::vector<int>& arr) {
    int var;
    int first, last, x;
    if (first < last) {
        split(x, first, last, var);
        quicksort(x, first, var - 1);
        quicksort(x, var + 1, last);
    }
}

void split(ElementType* x, int first, int last, int& var)
{
    // int first, last, x;
    ElementType m = x[first];
    int left = first,
        right = last;
    while (left < right) {
        while (m < x[right])
            right--;
        while (left < right &&
            (x[left] < m || x[left] == m))
            left++;

        if (left < right)
            swap(x[left], x[right]);
    }

    var = right;
    x[first] = x[var];
    x[var] = m;
}