import java.util.Scanner;
public class Sum_of_OddEven_number {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int sumEven = 0;
        int sumOdd = 0;
        for (int i = 1; i <= number; i++) {
            if (i % 2 == 0) {
                sumEven += i;
            } else {
                sumOdd += i;
            }
        }
        System.out.println("Sum of even numbers: " + sumEven);
        System.out.println("Sum of odd numbers: " + sumOdd);
    }
}
