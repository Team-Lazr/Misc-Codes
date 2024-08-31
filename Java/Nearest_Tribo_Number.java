
public class Nearest_Tribo_Number
{
    public static void main(int n)
    {
        int a=0;
        int b=1;
        int c=1;
        System.out.println("Entered No:"+n);
        System.out.print("Tribo Series : ");
        System.out.print(a+" "+b+" "+c+" ");
        
        while(true)
        {
           int d=a+b+c;
           System.out.print(d+" ");
           a=b;
           b=c;           
           c=d;
           if(c>n)
           break;
        }
        
        System.out.println();
        
        if(Math.abs(n-a)>Math.abs(n-b))
        {
            System.out.println("Nearest Tribo Series Number:"+b);
        }
        else
        {
            System.out.println("Nearest Tribo Series Number:"+a);
        }
    }
}
