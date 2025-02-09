public class CalculatorSwitch {
    public static void main(String[] args){
        int a = 100;
        int b = 27;
        String operator = "+";
        switch(operator){
            case "+":
                System.out.println(a+b);
                break;
            case "-":
                System.out.println(a-b);
                break;
            case "*":
                System.out.println(a*b);
                break;
            case "/":
                System.out.println(a/b);
                break;
            default:
                System.out.println("Invalid operator");
        }
    }
    
}
