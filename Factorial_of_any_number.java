import java.util.*;
class Factorial_of_any_number{
    public static void main(String[] args) {
        int i,fact=1;
        System.err.print("Enter the number to calculate factorial: ");
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        System.err.println("Factorial is: "+fact);
    }
}