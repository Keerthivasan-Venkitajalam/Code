public class Bank {
    public static void main(String[] args) {
        MainBank bank = new MainBank("Joe biden");

        bank.credit("Joe biden", 5000);
        bank.debit("Joe biden", 2000);

        System.out.println("Balance: " + bank.getBalance());
    }
}
