package NEW;
import java.util.*;
public class CopyOfNearestperfectsqr
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter a No:");
        int n=sc.nextInt();
        
        double a=Math.rint(Math.sqrt(n));
        
        
        System.out.print(a*a);
    }
}
