import java.util.*;
public class Kaprekar
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter A No:");
        int n=sc.nextInt();
        
        int sqr=n*n;
        
        int a=n;
        int ctr=0;
        while(n>0)
        {
           n=n/10;
           ctr++;
        }
        
        int m=(int)Math.pow(10,ctr);
        if(sqr/m+sqr%m==a)
        {
            System.out.print("Kaprekar No");
        }
        else
        {
            System.out.print("Not a Kaprekar No");
        }
    }
}
