import java.util.Scanner; 
class Employee 
{ 
public String name; 
public int age; 
public long phoneNumber; 
public String address; 
public double salary; 
 
public void printSalary() 
{ 
System.out.println("Salary="+salary); 
} 
} 
class Officer extends Employee 
{ 
public String specialization; 
 
} 
class Manager extends Employee 
{ 
public String department; 
 
} 
class Empinheritance 
{ 
public static void main(String args[]) 
{ 
Scanner sc = new Scanner(System.in); 
Officer o = new Officer(); 
System.out.print("Enter the officer's name:"); 
o.name=sc.nextLine(); 
System.out.print("Enter Address:"); 
o.address=sc.nextLine(); 
System.out.print("Enter Specialization:"); 
o.specialization=sc.nextLine(); 
System.out.print("Enter Age:"); 
o.age=sc.nextInt(); 
System.out.print("Enter PhoneNumber:"); 
o.phoneNumber=sc.nextLong(); 
System.out.print("Enter Salary:"); 
o.salary=sc.nextDouble(); 
 
//sc.nextLine(); // to skip new Line 
System.out.println("*********"); 
System.out.println("OFFICER DETAILS:"); 
System.out.println("Officer's name:"+o.name); 
System.out.println("Address:"+o.address); 
System.out.println("Specialization:"+o.specialization); 
System.out.println("Age:"+o.age); 
System.out.println("PhoneNumber:"+o.phoneNumber); 
o.printSalary(); 
System.out.println("*********"); 
sc.nextLine(); // to skip new Line 
Manager m = new Manager(); 
System.out.println("Enter the manager's Detail"); 
System.out.print("Enter the manager's name:"); 
m.name=sc.nextLine(); 
System.out.print("Enter Address:"); 
m.address=sc.nextLine(); 
System.out.print("Enter Department:"); 
m.department=sc.nextLine(); 
System.out.print("Enter Age:"); 
m.age=sc.nextInt(); 
System.out.print("Enter PhoneNumber:"); 
m.phoneNumber=sc.nextLong(); 
System.out.print("Enter Salary:"); 
m.salary=sc.nextDouble(); 
sc.nextLine(); // to skip new Line 
 
System.out.println("*********"); 
System.out.println("OFFICER DETAILS:"); 
System.out.println("Officer's name:"+m.name); 
System.out.println("Age:"+m.age); 
System.out.println("Address:"+m.address); 
System.out.println("PhoneNumber:"+m.phoneNumber); 
System.out.println("Department:"+m.department); 
m.printSalary(); 
System.out.println("*********"); 
} 
}