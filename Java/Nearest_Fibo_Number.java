public class Nearest_Fibo_Number
{
    public static void main(int n)
    {
        int a=0;
        int b=1;
        System.out.println("Entered No:"+n);
        System.out.print("Fibo Series : ");
        System.out.print(a+" "+b+" ");
        int i=3;
        while(true)
        {
           int c=a+b;
           System.out.print(c+" ");
           a=b;
           b=c;
           if(b>n)
           break;
        }
        
        System.out.println();
        
        if(Math.abs(n-a)>Math.abs(n-b))
        {
            System.out.println("Nearest Fibo Series Number:"+b);
        }
        else
        {
            System.out.println("Nearest Fibo Series Number:"+a);
        }
    }
}
