import java.util.*;
public class ScannerDemo {
    public static void main(String[] args) {
        String name_ofStudent;
        int mark_ofStudent;
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter your marks: ");
        mark_ofStudent=obj.nextInt();
        
        // Consume newline left-over
        obj.nextLine();

        System.out.println("Enter your name: ");
        name_ofStudent=obj.nextLine();  

        obj.close();
    }
}

/*import java.util.*;
public class ScannerDemo {
    public static void main(String[] args) {
        String name;
        int mark;
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter your marks: ");
        mark = obj.nextInt();

        // Consume newline left-over
        obj.nextLine();

        System.out.println("Enter your name: ");
        name = obj.nextLine();  

        obj.close();
    }
}*/