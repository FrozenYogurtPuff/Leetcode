double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if (nums1Size > nums2Size) {
        int *p = nums1;
        nums1 = nums2;
        nums2 = p;

        int tmp = nums1Size;
        nums1Size = nums2Size; 
        nums2Size = tmp;
    }

    int left = (nums1Size + nums2Size + 1) / 2;
    int L = 0, R = nums1Size;
    while (L < R) {
        int i = L + (R - L + 1) / 2;
        int j = left - i;
        if (nums1[i - 1] > nums2[j])
            R = i - 1;
        else
            L = i;
    }

    int i = L + (R - L + 1) / 2;
    int j = left - i;
    int num1L = i == 0 ? INT_MIN : nums1[i - 1];
    int num1R = i == nums1Size ? INT_MAX : nums1[i];
    int num2L = j == 0 ? INT_MIN : nums2[j - 1];
    int num2R = j == nums2Size ? INT_MAX : nums2[j];
    if ((nums1Size + nums2Size) % 2 == 0)
        return(fmax(num1L, num2L) + fmin(num1R, num2R)) / 2.0;
    return fmax(num1L, num2L);
}
