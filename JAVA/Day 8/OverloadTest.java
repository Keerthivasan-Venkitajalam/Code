
public class OverloadTest{
    public static void main(String[] args){
        Overload obj = new Overload();
        Overload obj2 = new Overload(1, 2, 3);

        System.out.println(obj.test()); // this will print -10.0
        System.out.println(obj.test('+')); // this will print 30.0
        System.out.println(obj2.test('*')); // this will print 6.0
    }
}

