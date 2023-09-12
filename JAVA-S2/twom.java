import java.util.*;
class twom
{       
        public static void main(String arg[])
        {
                int m,n,p,k;
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number of rows in first matrix :");
                p=sc.nextInt();
                System.out.println("Enter number of columns in first matrix :");
                k=sc.nextInt();
                System.out.println("Enter number of rows in second matrix :");
                m=sc.nextInt();
                System.out.println("Enter number of columns in second matrix :");
                n=sc.nextInt();
                int a[][]=new int[p][k];
                int b[][]=new int[m][n];
                int c[][]=new int[m][n];
                if(p==m&&k==n){
                        System.out.println("Enter numbers in first matrix :");
                        for(int i=0;i<m;i++){
                                for(int j=0;j<n;j++){
                                        a[i][j]=sc.nextInt();
                                        
                                 }
                        }
                        System.out.println("Enter numbers in second matrix :");
                        for(int i=0;i<m;i++){
                                for(int j=0;j<n;j++){
                                        b[i][j]=sc.nextInt();
                                        
                                 }
                        }
                        
                         System.out.println("Sum of first & second matrix is:");
                        for(int i=0;i<m;i++){
                                for(int j=0;j<n;j++){
                                        c[i][j]=a[i][j]+b[i][j];
                                        System.out.print(c[i][j]+"\t");
                                 }
                                 System.out.println("");
                        }
                }
                else
                System.out.println("Error");
          
                sc.close();       
        }
}
