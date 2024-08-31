
public class Tribo
{
    public static void main(int n)
    {
        int a=0;
        int b=1;
        int c=1;
        
        System.out.print(a+" "+b+" "+c+" ");
        
        for(int i=4;i<=n;i++)
        {
           int d=a+b+c;
           System.out.print(d+" ");
           a=b;
           b=c;           
           c=d;
        }
    }
}
