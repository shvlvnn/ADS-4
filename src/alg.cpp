// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len - 1; a++) {
        for (int b = a + 1; b < len; b++) {
            if (arr[a] + arr[b] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len - 1; a++) {
        for (int b = len - 1; b > a; b--) {
            if (arr[a] + arr[b] == value) {
                count++
            }
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len-1; a++) {
        int x = a; int y = len;
        while (x < y - 1) {
            int z = (x + y) / 2;
            if (arr[a] + arr[z] == value) {
                count++;
                int b = z + 1;
                while ((arr[a] + arr[b] == value) && (b < y)) {
                    count++;
                    b++;
                }
                b = z - 1;
                while ((arr[a] + arr[b] == value) && (b > x)) {
                    count++;
                    b--;
        }
                break;
    }
            if (arr[a] + arr[z] > value)
                y = z;
            else
                x = z;
        }
    }
    return count;
}
