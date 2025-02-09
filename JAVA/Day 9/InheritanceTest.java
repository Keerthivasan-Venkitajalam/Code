class Student {
    private String name;
    private String dateOfBirth;
    private String studentId;

    public void setStudentData(String name, String dateOfBirth, String studentId) {
        this.name = name;
        this.dateOfBirth = dateOfBirth;
        this.studentId = studentId;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Date of Birth: " + dateOfBirth);
        System.out.println("Student ID: " + studentId);
    }
}

class InheritanceTest {
    public static void main(String[] args) {
        Student st = new Student();
        st.setStudentData("A", "18.08.2006", "AIE2022");
        st.display();
    }
}
