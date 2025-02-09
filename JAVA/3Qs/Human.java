class Human {
    public void run() {
        System.out.println("Running...");
    }

    public void walk() {
        System.out.println("Walking...");
    }

    public void swim() {
        System.out.println("Swimming...");
    }

    public void climb() {
        System.out.println("Climbing...");
    }
}

class Attacker extends Human {
    public void crawl() {
        System.out.println("Crawling...");
    }

    public void observe(Protector protector) {
        if (protector instanceof Protector && ((Protector) protector).hasAdvancedWeapon()) {
            hide();
        } else {
            run();
        }
    }

    public void hide() {
        System.out.println("Hiding...");
    }

}

class Protector extends Human {
    public boolean hasAdvancedWeapon() {
        // Add your implementation here
        return true; // Assuming the protector always has an advanced weapon
    }

    public void hide() {
        System.out.println("Hiding...");
    }

    public void shoot() {
        System.out.println("Shooting...");
    }
}
