double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int *sorted = malloc((nums1Size+nums2Size)*sizeof(int));
    double median;
    int i,j,k;
    i=j=k=0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]<=nums2[j]){
            sorted[k++]=nums1[i];
            i++;
        }
        else{
            sorted[k++]=nums2[j];
            j++;
        }
    }
    while(i<nums1Size){
        sorted[k++]=nums1[i];
        i++;
    }
    while(j<nums2Size){
        sorted[k++]=nums2[j];
        j++;
    }
    int size = nums1Size + nums2Size;
    if(size %2 ==0){
        int middle1 = size/2;
        int middle2 = size/2 - 1;

        median = (sorted[middle1]+sorted[middle2])/2.0;
    }
    else{
        int middle = size/2;
        median = sorted[middle];
    }
    free(sorted);
    return median;
    
    
}