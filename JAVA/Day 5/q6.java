public class q6 {
        public static void main(String[] args) {
            int num = 123; // Change this to the number you want to reverse
            int reverse = 0;
            while(num != 0) {
                reverse = reverse * 10 + num % 10;
                num /= 10;
            }
            System.out.println("The reverse of the number is " + reverse);
        }
}
