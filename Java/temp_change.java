import java.util.*;
/**
 * Board Paper 2007-Question 8
 */
public class temp_change
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("1.Celsius to Fahrenheit");
        System.out.println("2.Fahrenheit to Celsius");
        System.out.print("Enter your Choice:");
        int n=sc.nextInt();
        
        switch(n)
        {
            case 1:
            {
                System.out.print("Enter temperature in Celsius:");
                double c=sc.nextInt();
                
                double f= (1.8*c)+32.0
                ;
                System.out.println("Temperature in Celsius:"+c);
                System.out.println("Temperature in Fahrenheit:"+f);
            } 
            break;
            
            case 2:
            {
                System.out.print("Enter temperature in Celsius:");
                double f=sc.nextInt();
                
                double c= (5.0/9.0)*(f-32);
                ;
                System.out.println("Temperature in Fahrenheit:"+c);
                System.out.println("Temperature in Celsius:"+f);
            }
            break;
            
            default:System.out.println("Invalid Choice");
        }
    }
}
