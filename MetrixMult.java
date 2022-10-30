import java.util.Scanner;

public class MetrixMult
{  
public static void main(String args[]) 
{
Scanner sc = new Scanner(System.in);
System.out.println("Enter the rows and coloumn of Metrix 1:");
int r1 = sc.nextInt();
int c1 = sc.nextInt();
System.out.println("Enter the rows and coloumns of Metrix 2:");
int r2 = sc.nextInt();
int c2 = sc.nextInt();
int a[][]=new int[r1][c1];
int b[][]=new int[r2][c2];
int c[][]=new int[r1][c2];
System.out.println("Enter the elements in Metrix 1:");
for(int i=0;i<r1;i++){    
for(int j=0;j<c1;j++){
System.out.print("\nEnter the element at A["+i"]["+j"]: ");
a[i][j]=sc.nextInt();
}}
System.out.println("Enter the elements in Metrix 2:");
for(int i=0;i<r2;i++){    
for(int j=0;j<c2;j++){
System.out.print("\nEnter the element at B["+i"]["+j"]: ");
b[i][j]=sc.nextInt();
}}
for(int i=0;i<r1;i++){    
for(int j=0;j<c1;j++){    
c[i][j]=0;      
for(int k=0;k<c2;k++)      
{      
c[i][j]+=a[i][k]*b[k][j];      
System.out.print(c[i][j]+" ");  
}
System.out.println();
}}
}}  
