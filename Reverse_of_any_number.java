import java.util.Scanner;
public class Reverse_of_any_number {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Prompt user for input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int reversedNumber = 0;
        // Reverse the number
        while (number != 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }
        // Output the reversed number
        System.out.println("Reversed Number: " + reversedNumber);
    }
}
