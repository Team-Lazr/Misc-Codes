import java.util.*;
/**
 * Board Paper 2005 Question No.5
 */
public class sum_pos_neg
{
   public static void main()
   {
       Scanner sc=new Scanner(System.in);
       int even=0,odd=0,neg=0;
       while(true)
       {
           System.out.print("Enter a No.:");
           int n=sc.nextInt();
           
           if(n>0)
           {
               if(n%2==0)
               {
                   even=even+n;
               }
               else
               {
                   odd=odd+n;
               }
           }
           else if(n<0)
           {
               neg=neg+n;
           }
           else if(n==0)
           {
               break;
           }
       }
       System.out.println("Sum of Positive Even Nos.:"+even);
       System.out.println("Sum of Positive Odd Nos.:"+odd);
       System.out.println("Sum of Negative Nos.:"+neg);
   }
}
