public class Animal {
    String animalType;
    public void eat() {
        System.out.println("Animal is eating");
    }
    public void makeSound() {
        System.out.println("Animal is making sound");
    }
    public void hunt() {
        System.out.println("Animal is hunting");
    }
    public void roam() {
        System.out.println("Animal is roaming");
    }
    public void excretes() {
        System.out.println("Animal is excreting");
    }
}

class Dog extends Animal{
    public void animalType(){
        System.out.println("OMNIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Dog is eating pedigree");
    }
    public void makeSound() {
        System.out.println("Dog is barking");
    }
    public void hunt() {
        System.out.println("Dog is hunting cats");
    }
    public void roam() {
        System.out.println("Dog is roaming in the park");
    }
    public void excretes() {
        System.out.println("Dog is excreting in the park");
    }
}

class Cat extends Animal{
    public void animalType(){
        System.out.println("OMNIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Cat is eating fish");
    }
    public void makeSound() {
        System.out.println("Cat is meowing");
    }
    public void hunt() {
        System.out.println("Cat is hunting mice");
    }
    public void roam() {
        System.out.println("Cat is roaming in the house");
    }
    public void excretes() {
        System.out.println("Cat is excreting in the house");
    }
}

class Lion extends Animal{
    public void animalType(){
        System.out.println("CARNIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Lion is eating meat");
    }   
    public void makeSound() {
        System.out.println("Lion is roaring");
    }
    public void hunt() {
        System.out.println("Lion is hunting hyenas");
    }
    public void roam() {
        System.out.println("Lion is roaming in the jungle");
    }
    public void excretes() {
        System.out.println("Lion is excreting in the jungle");
    }
}

class Tiger extends Animal{
    public void animalType(){
        System.out.println("CARNIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Tiger is eating deer meat");
    }
    public void makeSound() {
        System.out.println("Tiger is growling");
    }
    public void hunt() {
        System.out.println("Tiger is hunting deers");
    }
    public void roam() {
        System.out.println("Tiger is roaming in the forest");
    }
    public void excretes() {
        System.out.println("Tiger is excreting in the forest");
    }
}

class Elephant extends Animal{
    public void animalType(){
        System.out.println("HERBIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Elephant is eating grass");
    }
    public void makeSound() {
        System.out.println("Elephant is trumpeting");
    }
    public void roam() {
        System.out.println("Elephant is roaming in the jungle");
    }
    public void hunt() {
        System.out.println("Elephant is hunting out of fear");
    }
    public void excretes() {
        System.out.println("Elephant is excreting in the jungle");
    }
}

class Bird extends Animal{
    public void animalType(){
        System.out.println("OMNIVOROUS ANIMAL");
    }
    public void eat() {
        System.out.println("Bird is eating seeds");
    }
    public void makeSound() {
        System.out.println("Bird is chirping");
    }
    public void roam() {
        System.out.println("Bird is flying");
    }
    public void hunt() {
        System.out.println("Bird is hunting for worms");
    }
    public void excretes() {
        System.out.println("Bird is excreting in the sky");
    }
}