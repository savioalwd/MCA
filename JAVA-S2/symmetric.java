import java.util.*;
class symmetric{
    public static void main(String []args){
        int m,n,i,j,flag=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no. of rows :");
        m=sc.nextInt();
        System.out.println("Enter the no. of columns :");
        n=sc.nextInt();
        int a[][]=new int[m][n];
        int b[][]=new int[m][n];
        if(m==n){
        System.out.println("Enter the matrix:");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                a[i][j]=sc.nextInt();
                b[j][i]=a[i][j];
            }
        }
    
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                flag=0;
                break;
            }
            else
            flag=1;
            }
        }
        if(flag==1){
            System.out.println("Symmetric");

        }
        else{
            System.out.println("Asymmetric");

        }
    }
    else{
        System.out.println("Need square matric enter equal no. of rows and columns");
    }
}
}

    