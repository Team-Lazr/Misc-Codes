import java.util.*;
public class string_binary_srch
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        String name[]={"Abhishek","Ajay","Ashutosh","Bhaalu","Chanda","Dhruv","Harsh","Meetesh","Rachit","Sonal"};
        System.out.print("Enter name:");
        String str=sc.next();
        int lb=0,ub=9,mid=0;
        boolean found=false;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(name[mid].equals(str))
            {
                found=true;
                System.out.println("record exists");
                break;
            }
            else if(name[mid].compareTo(str)>0)
            {
                ub=mid-1;
            }
            else
            {
                lb=mid+1;
            }
        }
        if(found==false)
        {
            System.out.println("Record does not exist");
        }
        
    }
}
