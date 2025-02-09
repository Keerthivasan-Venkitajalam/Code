//Implement a program to generate the Fibonacci sequence up to a specified number of terms using loops. 
import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        int n;
        int a = 0;
        int b = 1;

        Scanner obj = new Scanner(System.in);

        System.out.println("Enter a number of your choice: ");
        n = obj.nextInt();

        // Consume newline left-over
        obj.nextLine();

        System.out.print("Fibonacci Series: " + a + " " + b); // printing 0 and 1

        // Calculate Fibonacci sequence
        for(int i = 2; i < n; i++) {
            int sum = a + b;
            System.out.print(" " + sum);
            a = b;
            b = sum;
        }
    }
}