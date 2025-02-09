//create a class MainBank with variables debit_amt, credit_amt, balance_amt, and name of customer
//name of customer should not be available outside the class
//create function to add the credit amount and another function subtract the debit amount from the cash with bank
//both credit and debit takes the customer name as argument along with the amount

public class MainBank {
    private double debit_amount;
    private double credit_amount;
    private double balance_amt;
    private String name;

    public MainBank(String name) {
        this.name = name;
        this.debit_amount = 0;
        this.credit_amount = 0;
        this.balance_amt = 0;
    }

    public void credit(String name, double amount) {
        if (this.name.equals(name)) {
            this.credit_amount += amount;
            this.balance_amt += amount;
        }
    }

    public void debit(String name, double amount) {
        if (this.name.equals(name)) {
            if (this.balance_amt >= amount) {
                this.debit_amount += amount;
                this.balance_amt -= amount;
            } else {
                System.out.println("Insufficient balance.");
            }
        }
    }

    public double getBalance() {
        return this.balance_amt;
    }
}

