public class BreakExit {
    public static void main(String[] args){
        int i;
        System.out.println("The use of BreakExit");
        for(i=1;i<5;i++){
            if(i==3)
                break;
            else
                System.out.println("The value of i is: "+i);
            }
        System.out.println("The use of Continue");
        for(i=1;i<5;i++){
            if(i==3)
                continue;
            else
                System.out.println("The value of i is: "+i);
            }
            
        }
}
    

