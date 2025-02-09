import java.util.Scanner;  // Import the Scanner class

public class Test_program4 {

	public static void main(String[] args) {

		Scanner obj = new Scanner(System.in);  // Create a Scanner object
		System.out.println("Enter number");

		int number = obj.nextInt();  // Read user input
		System.out.println("the number is " + number);

		obj.close();  // Close the Scanner object
	}
}
