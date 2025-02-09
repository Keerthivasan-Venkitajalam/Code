
import java.util.Scanner;
public class Test_program5 {

	public static void main(String[] args) {

	System.out.println("Enter your name:");
	Scanner obj = new Scanner(System.in);
	String name = obj.nextLine();

	System.out.println("Enter your rollno:");
	double rollno = obj.nextDouble();

	System.out.println("Enter your section:");
	char section = obj.next().charAt(0);

	System.out.println("Enter subject1 marks:");
	double marks1 = obj.nextDouble();

	System.out.println("Enter subject2 marks:");
	double marks2 = obj.nextDouble();

	obj.close();
	
	System.out.println("Enter subject3 marks:");
	double marks3 = obj.nextDouble();
	
	System.out.println("Enter subject4 marks:");
	double marks4 = obj.nextDouble();
	
	System.out.println("Enter subject5 marks:");
	double marks5 = obj.nextDouble();
	
	double marks=marks1+marks2+marks3+marks4+marks5;
	System.out.println("Your name is: " + name);
	System.out.println("your rollno is: " + rollno);
	System.out.println("Your section is: " + section);
	System.out.println("Your total marks is: " + marks);
	//System.out.println("your marks is")
	}

}
