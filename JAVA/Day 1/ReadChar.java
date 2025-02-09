import java.io.IOException;
public class ReadChar {
    public static void main(String[] args) throws IOException {
        char ch1,ch2;
        
        System.out.println("Enter any character 1 and press enter:tk");
        ch1=(char)System.in.read();

        System.out.println("Enter any character 2 and press enter:");
        ch2=(char)System.in.read();

        System.out.println("You have entered: \n"+ch1);
        System.out.println("You have entered: \n"+ch2);
    } 
}
