//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String A = br.readLine().trim();
            Solution ob = new Solution();
            String ans = ob.FirstNonRepeating(A);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


class Solution
{
    public String FirstNonRepeating(String A)
    {
        Queue<Character> q = new LinkedList<>();
        HashMap<Character,Integer> hm = new HashMap<>();
        String ans = "";
        for (int i=0; i<A.length(); i++) {
            Character c = A.charAt(i);
            Integer val = hm.get(c);
            //hm.put(c,val+1);
            hm.put(c,hm.getOrDefault(c,0)+1);
            q.add(c);
            
            while (!q.isEmpty()) {
                if (hm.get(q.peek()) > 1) {
                    q.poll();
                }
                else {
                    ans = ans+q.peek();
                    break;
                }
            }
            if (q.isEmpty()) {
                ans = ans+'#';
            }
        }
        return ans;
    }
}
