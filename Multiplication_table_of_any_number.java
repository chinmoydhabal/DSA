import java.util.*;
class Multiplication_table_of_any_number{
    public static void main(String[] args) {
        int i, m = 10;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the integer for which you want to print the multiplication table: ");
        int n = s.nextInt();
        System.out.println("Multiplication Table: ");
        for (i = 1; i <= m; i++) {
            System.out.println(n + " X " + i + " --> " + (i * n));
        }
    }
}