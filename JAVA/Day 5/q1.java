// Implement a program to calculate the factorial of a given number using a loop.
import java.util.Scanner;

public class q1 {
    public static void main(String[] args) {
        int number;
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter a number of your choice: ");
        number = obj.nextInt();

        // Consume newline left-over
        obj.nextLine();

        // Calculate factorial
        long factorial = 1;
        for(int i = 1; i <= number; i++) {
            factorial *= i;
        }

        System.out.println("The factorial of " + number + " is " + factorial);
    }
}