void sort(float array[], int size, bool isAscending) {
    vector<float> s(size, 0);

    for(int i = 0; i < size; i++) {
        s[i] = array[i];
    }

    sort(s.begin(), s.end());

    if(isAscending) {
        for(int i = 0; i < size; i++) {
            array[i] = s[i];
        }
    }
    else {
        for(int i = 0; i < size; i++) {
            array[i] = s[size-1-i];
        }
    }
}
