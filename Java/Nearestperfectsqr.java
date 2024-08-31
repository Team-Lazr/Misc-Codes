
import java.util.*;
public class Nearestperfectsqr
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter a No:");
        int n=sc.nextInt();
        
        int small=(int)Math.sqrt(n);
        int big= small+1;
        int sqr1=small*small;
        int sqr2=big*big;
        
        if(Math.abs(sqr1-n)>Math.abs(sqr2-n))
        System.out.print(sqr2);
        else
        System.out.print(sqr1);
    }
}
