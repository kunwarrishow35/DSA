bool isPerfectSquare(int num) {
    if (num < 2)
        return true;

    int left = 1;
    int right = num / 2;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        long long sq = (long long)mid * mid;

        if (sq == num) {
            return true;
        }
        else if (sq < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}