import java.util.*;
public class SelectionSort
{
   public static void main()
   {
    Scanner sc=new Scanner(System.in);
    int n[]=new int[10];
    for(int i=0;i<=9;i++)
    {
        System.out.print("Enter A number:");
        n[i]=sc.nextInt();
    }
    
    for(int i=0;i<=8;i++)
    {
        int min=n[i],pos=i;
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
    
    for(int i=0;i<=9;i++)
    {
        System.out.print(n[i]+" ");
    }
   }
}
