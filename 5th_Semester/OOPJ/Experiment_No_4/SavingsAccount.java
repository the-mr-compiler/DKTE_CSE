public class SavingsAccount {
    public static float annualInterestRate;
    private double savingsBalance;

    public SavingsAccount(double savingsBalance) {
        this.savingsBalance = savingsBalance;
    }

    public double calculateMonthlyInterest() {
        double interest = (savingsBalance * annualInterestRate) / 1200;
        savingsBalance += interest;
        return interest;
    }

    public void setSavingsBalance(double savingsBalance) {
        this.savingsBalance = savingsBalance;
    }

    public double getSavingsBalance() {
        return this.savingsBalance;
    }

    public static void modifyInterestRate(float newRate) {
        annualInterestRate = newRate;
    }

    public static void main(String[] args) {
        SavingsAccount saver1 = new SavingsAccount(2000);
        SavingsAccount saver2 = new SavingsAccount(3000);
        SavingsAccount.modifyInterestRate(4);
        System.out.println("Monthly interest for saver1 : " + saver1.calculateMonthlyInterest() + "\nSavings Balance : "
                + saver1.getSavingsBalance());
        System.out.println("Monthly interest for saver2 : " + saver2.calculateMonthlyInterest() + "\nSavings Balance : "
                + saver2.getSavingsBalance());
        SavingsAccount.modifyInterestRate(8);
        System.out.println("After incrementing the interest rate :");
        System.out.println("Monthly interest for saver1 : " + saver1.calculateMonthlyInterest() + "\nSavings Balance : "
                + saver2.getSavingsBalance());
        System.out.println("Monthly interest for saver2 : " + saver2.calculateMonthlyInterest() + "\nSavings Balance : "
                + saver2.getSavingsBalance());
    }
}
