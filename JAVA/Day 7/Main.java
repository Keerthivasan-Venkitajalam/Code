//Create a java class which does the following:
//A function to find the sum of digits of a given number.
//Another function which prints the next prime number after the sum of digits.
public class Main{
    // Function to find the sum of digits of a given number
    public static int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
        return sum;
    }


    // Function to check if a number is prime
    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i < Math.sqrt(number) + 1; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Function which prints the next prime number after the sum of digits
    public static void printNextPrime(int number) {
        int sum = sumOfDigits(number);
        int nextNumber = sum + 1;
        while (!isPrime(nextNumber)) {
            nextNumber++;
        }
        System.out.println("The next prime number after the sum of digits is: " + nextNumber);
    }

    public static void main(String[] args) {
        printNextPrime(127);
    }
}