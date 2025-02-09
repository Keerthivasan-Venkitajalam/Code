public class Calc {
    public void calculate(int a, int b, String operator){
        if(operator.equals("+")){
            System.out.println(a+b);
        }
        else if(operator.equals("-")){
            System.out.println(a-b);
        }
        else if(operator.equals("*")){
            System.out.println(a*b);
        }
        else if(operator.equals("/")){
            if(b != 0){
                System.out.println(a/b);
            } else {
                System.out.println("Cannot divide by zero");
            }
        }
        else{
            System.out.println("Invalid operator");
        }
    }
}
