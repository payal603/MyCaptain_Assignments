/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
 
 class Employee {
 
 
 String name;
 double join_year;
 String address;
 
 public void getInput() {
 
  Scanner in = new Scanner(System.in);
  System.out.print("Enter the name :: ");
  name = in.next();
  System.out.print("Enter the joining year :: ");
  join_year = in.nextDouble();
  System.out.print("Enter the address :: ");
  address = in.next();
 }
 
 public void display() {
  
  System.out.println("Employee name= " + name);
  System.out.println("Employee joining year = " + join_year);
  System.out.println("Employee address = " + address);
 }
 }
 public class Main{
 public static void main(String[] args) {
 
  Employee e[] = new Employee[3];
  
  for(int i=0; i<3; i++) {
   
   e[i] = new Employee();
   e[i].getInput();
  }
  
  System.out.println("**** LIST OF THE 3 EMPLOYEES ****");
  
  for(int i=0; i<3; i++) {
   
   e[i].display();
  }
 }
}