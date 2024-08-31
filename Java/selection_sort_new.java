import java.util.*;
public class selection_sort_new
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        int n[]=new int[10];
        for(int i=0;i<=9;i++)
        {
            System.out.print("Enter a Number:");
            n[i]=sc.nextInt();
        }
        
        System.out.println();
        System.out.print("Orignal Array:");
        
        for(int i=0;i<=9;i++)
        {
            
            System.out.print(n[i]+" ");            
        }
        
        System.out.println();
        
        int min=0,pos=0;
        for(int i=0;i<=8;i++)
        {
            min=n[i]; pos=i;
            for(int j=i;j<=9;j++)
            {
                if(n[j]<min)
                {
                    min=n[j];
                    pos=j;
                }
                
            }
            
            int t=n[i];
            n[i]=n[pos];
            n[pos]=t;
        }
        System.out.print("Sorted Array:");
        for(int i=0;i<=9;i++)
        {
          System.out.print(n[i]+" ");            
        }
    }
}