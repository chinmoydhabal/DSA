import java.util.Scanner;

public class Reverse_of_a_string {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking user input
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Reversing the string
        String reversed = reverseString(input);

        // Output the reversed string
        System.out.println("Reversed string: " + reversed);
    }

    // Function to reverse the string
    public static String reverseString(String str) {
        StringBuilder reversed = new StringBuilder(str);
        return reversed.reverse().toString();
    }
}
