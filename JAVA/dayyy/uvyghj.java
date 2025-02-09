final class Fruit{
    final String name="Orange";
    Fruit()
    {
        name="Apple";
    }
    final void slice(){
        System.out.println("SLICING");
    }
}
class Supermarket extends Fruit{
    void slice(){
        System.out.println("IN CHILD");
    }
}