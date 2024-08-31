import java.util.*;
public class calc_char_vowel
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String");
        String str=sc.nextLine();
        int ln=str.length();
        str=str.toUpperCase();
        int ctr=0;
        String rev="";
        for(int i=ln-1;i>=0;i--)
        {
            char ch=str.charAt(i);
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                ctr++;
            }
            rev=rev+ch;
        }
        
        System.out.println("No of Characters:"+ln);
        System.out.println("No of Vowels:"+ctr);
        System.out.println("Reversed String:"+rev);
    }
}
