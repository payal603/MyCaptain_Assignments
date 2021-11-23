/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
class Main{  
public static void main(String args[])  
{   
    int n;
    Scanner in = new Scanner(System.in);
   
    System.out.println("Enter how many elements you want the fibnocci series");
     n=in.nextInt();
    
 int n1=0,n2=1,n3,i;    
 System.out.print(n1+" "+n2);//printing 0 and 1    
    
 for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  System.out.print(" "+n3);    
  n1=n2;    
  n2=n3;    
 }    
  
}}  