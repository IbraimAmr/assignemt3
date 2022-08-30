template <typename ElementType>
void radixSort(std::vector<int>& arr) {
    list<ElementType>* var = new list<ElementType>[base];
    int basePower = 1;
    ElementType val;
    for (int p = 1; p <= num; p++) {
        while (!x.empty()) {
            val = x.front();
            x.pop_front();
            int digit = val % (base * basePower) / basePower;
            var[digit].push_back(val);
        }
        for (int i = 0; i < base; i++)
            while (!var[i].empty()) {
                val = var[i].front();
                x.push_back(val);
                var[i].pop_front();
            }
        basePower *= base;
        cout << p << ": ";
        for (list<ElementType>::iterator i = x.begin(); i != x.end(); i++)
            cout << setfill('0') << setw(num) << *i << ", ";
        cout << endl;
    }
}