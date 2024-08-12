import java.util.Scanner;

public class MatrixAddition {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the size of the matrices from the user
        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();
        System.out.print("Enter the number of columns: ");
        int columns = scanner.nextInt();

        // Initialize the matrices
        int[][] matrix1 = new int[rows][columns];
        int[][] matrix2 = new int[rows][columns];
        int[][] sumMatrix = new int[rows][columns];

        // Input elements for the first matrix
        System.out.println("Enter elements for the first matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print("Element [" + i + "][" + j + "]: ");
                matrix1[i][j] = scanner.nextInt();
            }
        }

        // Input elements for the second matrix
        System.out.println("Enter elements for the second matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print("Element [" + i + "][" + j + "]: ");
                matrix2[i][j] = scanner.nextInt();
            }
        }

        // Add the two matrices
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Display the first matrix
        System.out.println("First Matrix:");
        printMatrix(matrix1, rows, columns);

        // Display the second matrix
        System.out.println("Second Matrix:");
        printMatrix(matrix2, rows, columns);

        // Display the sum matrix
        System.out.println("Sum of the two matrices:");
        printMatrix(sumMatrix, rows, columns);
    }

    // Function to print a matrix with proper formatting
    private static void printMatrix(int[][] matrix, int rows, int columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println(); // Add an extra line for better formatting
    }
}
