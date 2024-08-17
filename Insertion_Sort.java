import java.util.Scanner;

public class Insertion_Sort {
    public static void insertionSort(int[] array) {
        int n = array.length;
        
        // Traverse the array from the second element to the last
        for (int i = 1; i < n; ++i) {
            int key = array[i];  // The element to be positioned correctly
            int j = i - 1;

            // Shift elements of the sorted part of the array that are greater than key to one position ahead
            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                j = j - 1;
            }

            // Place the key at the correct position
            array[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // User input for the array size
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        // Initialize the array
        int[] array = new int[n];

        // User input for array elements
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        // Display original array
        System.out.println("Original Array:");
        for (int num : array) {
            System.out.print(num + " ");
        }

        // Sort the array using insertion sort
        insertionSort(array);

        // Display sorted array
        System.out.println("\nSorted Array:");
        for (int num : array) {
            System.out.print(num + " ");
        }
    }
}
