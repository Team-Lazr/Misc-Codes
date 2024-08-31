import java.util.*;
public class ISBN
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter ISBN:");
        String s=sc.next();
        int ln=s.length();
        int n=Integer.valueOf(s);
        
        if(ln==10)
        {
            int sum=0,r=0,i=10;
            while(n>0)
            {
                r=n%10;
                n=n/10;
                sum+=r*i;
                i--;
            }
            if(sum%11==0)
            {
                System.out.print("Legal ISBN");
            }
            else
            {
                System.out.print("Illegal ISBN");
            }
        }
        else
        {
            System.out.print("Illegal ISBN");
        }
    }
    
}
