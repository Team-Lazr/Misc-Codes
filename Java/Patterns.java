public class Patterns
{
    public static void main()
    {
        
        for(int i=1;i<=5;i++)
        {
            for(int l=5;l>i;l--)
            {
                System.out.print(" ");
            }
            
            for(int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            
            for(int k=i-1;k>=1;k--)
            {
                System.out.print("*");
            }
            System.out.println();
            
        }
    }
}
