public class Pattern6
{
    public static void main()
    {
        for(int i=5;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
               System.out.print(i);
            }
            
            for(int k=i+1;k<=5;k++)
            {
               System.out.print(k);
            }
            System.out.println();
        }
            
        
    }
}
