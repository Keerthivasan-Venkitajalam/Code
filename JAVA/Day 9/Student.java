class Student extends Human{
    String regno;
    Student(String n, String d, String r){
        name=n;
        dob=d;
        regno=r;
    }
    void display(){
        System.out.println("A human with name "+name +" born on "+dob+" with id "+regno);
    }
}
