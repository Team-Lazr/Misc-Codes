package NEW;
public class PrimorialNew
{
    public static void main(int n)
    {
        System.out.println("No. Entered="+n);
        int sum=1;
        for(int i=1;i<=n;i++)
        {
            int ctr=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                ctr++;
            }
            if(ctr==2)
            sum=sum*i;
        }
        System.out.println(n+"#="+sum);
        
   }
}