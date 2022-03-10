// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len - 1; a++) {
        for (int b = a + 1; b < len; b++) {
            if (arr[a] + arr [b] == value) {
                count++;
            }
        }
    }
    return count;
  return 0;
}
int countPairs2(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len - 1; a++) {
        if (arr[a] * 2 > value) break;
        for (int b = len -1; b>a; b--) {
            if (arr[a] + arr[b] > value) continue;
            if (arr[a] + arr[b] < value) break;
            if (arr[a] + arr[b] == value) {
                count++;
            }
        }
    }
    return count;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int a = 0; a < len-1;a++) {
        int n = value - arr[a];
        int x = a + 1; int y = len - 1;
        while (x < y) {
            int z = (x + y) / 2;
            if (arr[z] < n)
            x = z + 1;
            else
            y=z;
        }
        if (arr[x] == n) {
            while (arr[x] == n) {
                count++;
                x++;
            }
        }
    }
    return count;
  return 0;
}
