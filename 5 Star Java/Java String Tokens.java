import java.util.*;
public class Solution {
    public static void main(String[] args) {
        Scanner I = new Scanner(System.in);
        String s = I.nextLine();
        StringTokenizer a=new StringTokenizer(s,"!.?,'_@ ");
        int t =a.countTokens();
        System.out.println(t);
        for(int i=0;i<t;i++)
         System.out.println(a.nextToken());
    }
}
