package NEW;
/**
 *RankersNotes PG-21 Q17
 */
import java.util.*;
public class rnpg21q17
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Sentence:");
        String s=sc.nextLine();
        s=s.toUpperCase();
        System.out.println("F.First");
        System.out.println("L.Last");
        System.out.print("Enter you choice");
        char ch=sc.next().charAt(0);
        switch(ch)
        {
            case 'F':
            {
                System.out.print(s.charAt(0)+" ");
                int ln=s.length();
                for(int i=0;i<ln;i++)
                {
                    char chr=s.charAt(i);
                    if(chr==' ')
                    {
                        System.out.print(s.charAt(i+1)+" ");
                    }
                }
                
            }
            break;
            
            case 'L':
            {
                int ln=s.length();
                for(int i=0;i<ln;i++)
                {
                    char chr=s.charAt(i);
                    if(chr==' ')
                    {
                        System.out.print(s.charAt(i-1)+" ");
                    }
                }
                System.out.print(s.charAt(ln-1));
            }
            break;
        }
    }
}