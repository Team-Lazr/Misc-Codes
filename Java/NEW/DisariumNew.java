package NEW;
import java.util.*;
public class DisariumNew
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Number:");
        int n=sc.nextInt();
        int ln=Integer.toString(n).length();
        int a=n;
        int r=0;
        int sum=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            System.out.println("ln:"+ln);//to check length
            sum=sum+(int)(Math.pow(r,ln));
            ln--;
        }
        if(a==sum)
        System.out.println("Disarium \t"+a+"="+sum);//
        else
        System.out.println("Not Disarium \t"+a+"!="+sum);
    }     
}