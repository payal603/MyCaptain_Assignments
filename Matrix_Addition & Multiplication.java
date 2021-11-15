/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

import java.util.*; 
public class Main { 
public static void main(String[] args) { 
// write your code here 
Scanner sc = new Scanner(System.in); 
Matrix m = new Matrix(); 
Matrix m2 = new Matrix(); 
Matrix m3 = new Matrix(); 
int k=1,ch; 
while (k!=0){
System.out.println("enter the operation you wish to perform: \n"); System.out.println("1.create a matrix: \n2.display the matrix "); 
System.out.println("3.add a matrix \n4.multiply a matrix "); 
ch = sc.nextInt(); 
switch (ch){ 
case 1: 
m.create(); 
break; 
case 2: 
m.display(); 
break; 
case 3: 

{ 
System.out.println("enter matrix for addition : "); m.add(m2); break; 
} 
case 4: 
{ 
System.out.println("enter matrix for multiplication : "); m.multiply(m3); break; 
} 
 

default: 
System.out.println("invalid choice"); 
} 
System.out.println("\n do you wish to perform any other operation?"); System.out.println("press 1 to continue and 0 to exit: \n"); k = sc.nextInt(); 
}
m.create(); 
 
} } 
class Matrix { 
Scanner sc; 
int r, c; 
int matrix[][]; 
void create() { 
Scanner sc = new Scanner(System.in); 
System.out.println("enter number of rows : "); 
r = sc.nextInt(); 
System.out.println("enter number of columns : "); 
c = sc.nextInt(); 
matrix = new int[r][c]; 
for (int i = 0; i < r; i++) { 
for (int j = 0; j < c; j++) { 
System.out.println("enter matrix[" + (i + 1) + "][" + (j + 1) + "] element");
matrix[i][j] = sc.nextInt(); 
} 
} 
} 
void createMat(int row, int col) { 
matrix = new int[row][col]; 
for (int i = 0; i < row; i++) { 
for (int j = 0; j < col; j++) { 
System.out.println("enter matrix[" + (i + 1) + "][" + (j + 1) + "] element"); matrix[i][j] = sc.nextInt(); 
} 
} 
} 
void display() { 
System.out.println(); 
for (int i = 0; i < r; i++) 
{
for (int j = 0; j < c; j++) { 
System.out.print(matrix[i][j]+" "); 
} 
System.out.println(); 
} 
} 
void add(Matrix m1) { 
Scanner sc = new Scanner(System.in); System.out.println("enter the number of rows: "); int R = sc.nextInt(); 
System.out.println("enter the number of columns: "); int C = sc.nextInt(); 
if (R == r && C == c) { 
m1.matrix = new int[R][C]; 
for (int i = 0; i < r; i++) {
for (int j = 0; j < c; j++) { 
System.out.println("enter matrix[" + (i + 1) + "][" + (j + 1) + "] element"); m1.matrix[i][j] = sc.nextInt(); 
} 
} 
int ans[][] = new int[r][c]; 
for (int i1 = 0; i1 < r; i1++) { 
for (int j1 = 0; j1 < c; j1++) { 
ans[i1][j1] = matrix[i1][j1] + m1.matrix[i1][j1]; 
} 
} 
//printing ans matrix 
System.out.println("\n\n -------------MATRIX AFTER ADDITION----------- \n"); for (int i1 = 0; i1 < r; i1++) { 
for (int j1 = 0; j1 < c; j1++) { 
System.out.print(ans[i1][j1] + " "); 
} 
System.out.println();
} 
} 
else { 
System.out.println("matrix dimension do not match for addition!!"); } } 
void multiply(Matrix m1){ 
Scanner sc = new Scanner(System.in); 
System.out.println("enter the number of rows : "); 
int R = sc.nextInt(); 
System.out.println("enter the number of columns : "); int C = sc.nextInt(); 
m1.matrix = new int[r][c]; 
if(c == R){ 
for (int i = 0; i < r; i++) { 
for (int j = 0; j < c; j++) { 
System.out.println("enter matrix["+(i+1)+"]["+(j+1)+"] element"); m1.matrix[i][j] = sc.nextInt(); 
}
} 
int result[][] = new int[10][10]; 
for (int i = 0; i < r; i++) { 
for (int j = 0; j < C; j++) { 
int sum = 0; 
for (int k=0;k<c;k++){ 
sum = sum+ (matrix[i][k]*m1.matrix[k][j]); 
} 
result[i][j] = sum; 
} 
} 
//printing result matrix 
System.out.println("\n\n ----------MATRIX AFTER MULTIPLICATION ----------- \n"); for (int i = 0; i < r; i++) { 
for (int j = 0; j < C; j++) { 
System.out.print(result[i][j]+" "); 
} 
System.out.println();
} 
} 
else { 
System.out.println("matrix dimension do not match for multiplication!!"); } 
} 


} 
