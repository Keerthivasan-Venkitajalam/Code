public class Stringdemo {
    public static void main(String[] args) {
        String str1 = "A lot of apples and APPLES";
        System.out.println(str1.length());
        System.out.println(str1.charAt(3));
        System.out.println("Apples".equals("apples"));
        System.out.println("Apples".equalsIgnoreCase("apples"));
        System.out.println(str1.indexOf("apples"));
    }
    
}
