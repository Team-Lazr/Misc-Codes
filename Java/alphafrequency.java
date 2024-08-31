import java.util.*;
public class alphafrequency
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter A sentence:-");
        String str=sc.nextLine();
        int ln=str.length();
        str=str.toUpperCase();
        
        
        for(int i=65;i<=90;i++)
        {
            char ch=(char)i;
            int ctr=0;
            for(int j=0;j<=ln-1;j++)
            {
                char a=str.charAt(j);
                
                if(a==ch)
                {
                    ctr++;
                }
            }
            
            if(ctr>0)
            {
                System.out.println((char)i+" occurs "+ctr+" time(s)");
            }
        }
    }
}
