package lab2;

import java.util.Arrays;

public class Array_Algorithms {

    int max(int[] arr) {
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    int min(int[] arr) {
        int min = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        return min;
    }

    void binarySearch(int[] arr, int ele) {
        Arrays.sort(arr);
        int start = 0;
        int end = arr.length - 1;
        int mid = (start + end) / 2;
        while (start <= end) {
            mid = (start + end) / 2;
            if (arr[mid] == ele) {
                System.out.println("Element is found at index: " + mid);
                return;
            }
            if (arr[mid] > ele) {
                end = mid - 1;
            } else if (arr[mid] < ele) {
                start = mid + 1;
            }
        }

        System.out.println("Element is not found!");
    }

}
