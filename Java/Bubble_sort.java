import java.util.*;
public class Bubble_sort
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        
        String a[]={"Harsh","Dhruv","Rachit","Abhishek","Ajay","Ashutosh","Rishabh","Sonal","Meetesh","Arpit"};
        
        
        for(int i=0;i<=8;i++)
        {
            for(int j=0;j<=8-i;j++)
            {
                if(a[j].compareTo(a[j+1])<0)
                {
                    String t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    
                }
            }
        }
        
        for(int i=0;i<=9;i++)
        {
            System.out.println(a[i]);
        }
    }
}
