/*import java.util.*;
public class CalculatorInput {
    public static calculate(int num1, int num2, char operator) {
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        num1 = obj.nextInt();

        obj.nextLine();

        System.out.println("Enter operator: ");
        operator = obj.next().charAt(0);

        obj.nextLine();

        System.out.println("Enter second number: ");
        num2 = obj.nextInt();

        obj.close();
    }
}*/

import java.util.*;

public class CalculatorInput {
    public int calculate() {
        int num1;
        int num2;
        char operator;
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        num1 = obj.nextInt();

        obj.nextLine();

        System.out.println("Enter operator: ");
        operator = obj.next().charAt(0);

        obj.nextLine();

        System.out.println("Enter second number: ");
        num2 = obj.nextInt();

        obj.close();

        switch (operator) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    System.out.println("Error! Dividing by zero is not allowed.");
                    return 0;
                }
            default:
                System.out.println("Error! Invalid operator. Please enter correct operator.");
                return 0;
        }
    }
}