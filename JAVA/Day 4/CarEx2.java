public class CarEx2 {

    int year_of_manuf;
    String model;
    String color;
    String make;

    CarEx2(String mo, String ma, int y){
        year_of_manuf = y;
        model = mo;
        make = ma;
    }

    void displayData(){
        System.out.println("Company: " + make);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year_of_manuf);
    }

    public class ConstructorDemo{
        public static void main(String[] args) {
            CarEx2 obj = new CarEx2("Mustang", "Ford", 2020);
            obj.displayData();

            CarEx2 obj2 = new CarEx2("Civic", "Honda", 2019);
            obj2.displayData();
        }
    }
}
