abstract class cat{
    cat(){
        System.out.println("Cat Constructor");
    }
    abstract void makeSound();
}

class lion extends cat{
    lion(){
        System.out.println("Lion Constructor");
    }
    void makeSound(){
        System.out.println("Roarsssssssssssssss...Grrrrrrrrrrrr...");
    }
}



class tiger extends cat{
    tiger(){
        System.out.println("Tiger Constructor");
    }
    void makeSound(){
        System.out.println("Roarsssssssssssssss...Grrrrrrrrrrrr...");
    }
}


public class abstractDemo {
    public static void main(String[] args) {
        lion obj = new lion();
        obj.makeSound();
    }
}