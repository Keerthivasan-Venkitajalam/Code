/*public class CalculatorIfElse {
    public static void main(String[] args){
        int a,b;
        char operator;
        int a=100;
        int b=27;
        char operator="+";
        if(operator=="+"){
            System.out.println(a+b);
        }
        else if(operator=="-"){
            System.out.println(a-b);
        }
        else if(operator=="*"){
            System.out.println(a*b);
        }
        else if(operator=="/"){
            System.out.println(a/b);
        }
        else{
            System.out.println("Invalid operator");
        }
    }
    
} */

public class CalculatorIfElse {
    public static void main(String[] args){
        int a = 100;
        int b = 27;
        String operator = "+";
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
            System.out.println(a/b);
        }
        else{
            System.out.println("Invalid operator");
        }
    }
}
