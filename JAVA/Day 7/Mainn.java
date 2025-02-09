//Write a java class which has a main function and can read the number from user and 
//create object BY passing the number as argument.
import java.util.Scanner;

public class Mainn {
    private int number;

    public Mainn(int number) {
        this.number = number;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number:");
        int number = scanner.nextInt();
        Mainn mainObject = new Mainn(number);
        System.out.println("Object created with number: " + mainObject.number);
    }
}