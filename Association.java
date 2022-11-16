// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;

class Student {
    private String studentName;
    
    Student(String studentName) {
        this.studentName = studentName;
    }
    
    public String getName() {
        return this.studentName;
    }
}

class Department {
    private String departmentName;
    private List<Student> students;
    
    Department (String departmentName, List<Student> students) {
        this.departmentName = departmentName;
        this.students = students;
    }
    
    public String getDepartmentName() {
        return this.departmentName;
    }
    
    public List<Student> getStudents() {
        return this.students;
    }
}

class Association {
    public static void main(String[] args) {
        Student s1 = new Student("Aniket");
        Student s2 = new Student("Rajat");
        List<Student> students = new ArrayList<>();
        students.add(s1);
        students.add(s2);
        Department department = new Department("CSE", students);
        for (Student student : department.getStudents()) {
            System.out.println(student.getName());
        }
    }
}
