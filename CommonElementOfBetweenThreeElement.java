import java.util.*;


public class CommonElementOfBetweenThreeElement {

    static ArrayList<Integer> solve(int A[],int B[], int C[],ArrayList<Integer> ans){
         HashMap<Integer, Integer> hm = new HashMap<>();
        Set<Integer> set = new HashSet<>();
        for(int i=0;i<A.length;i++){
            set.add(Integer.parseInt(String.valueOf(A[i])));
        }

        Integer []I = set.toArray(new Integer[set.size()]);
        System.out.println("arr"+Arrays.toString(I));
           //now add element into hashmap
           for(int i=0;i<I.length;i++){
               if(!hm.containsKey(I[i])){
                   hm.put(I[i], 0);
               }
               
                   hm.put(I[i],hm.get(I[i])+1);
           }
            

            //now add second array into HashMap;
            Set<Integer> set1 = new HashSet<>();
            for(int i=0;i<B.length;i++){
                set1.add(Integer.parseInt(String.valueOf(B[i])));
            }
            Integer []J = set1.toArray(new Integer[set1.size()]);
            System.out.println("arr"+Arrays.toString(J));
            for(int i=0;i<J.length;i++){
               if(!hm.containsKey(J[i])){
                   hm.put(J[i], 0);
               }
               
                hm.put(J[i], hm.get(J[i])+1);
            }
            //now add third array
            Set<Integer> set2 = new HashSet<>();
          
           for(int i=0;i<C.length;i++){
            set2.add(Integer.parseInt(String.valueOf(C[i])));
        }
        
        Integer []K = set2.toArray(new Integer[set2.size()]);
        System.out.println("arr"+Arrays.toString(K));  
            for(int i=0;i<K.length;i++){
               if(!hm.containsKey(K[i])){
                   hm.put(K[i],0);
               }
                   hm.put(K[i], hm.get(K[i])+1);
            }

          
           
            //here evaluating which number is  duplicate in all three array
           hm.entrySet().forEach(entry->{
               if(entry.getValue()>=3){
                   ans.add(entry.getKey());
               }
           });

           if(ans.size()>0)
               Collections.sort(ans);

           else
               ans.add(-1);
           return ans;
     }
    public static void main(String[] args) {
        int A[] = {-69,-68,-39,-25,-6,18,33,39,42,46,52,55,55,64,71};
        int []B = {-97,-92,-90,-90,-87,-85,-82,-77,-77,-77,-75,-71,-67,-64,-60,-59,-58,-52,-49,-48,-48,-47,-47,-46,-41,-36,-35,-29,-28,-26,-25,-20,-19,-14,-13,-13,-11,-10,-6,-4,2,3,9,12,15,17,20,22,23,24,27,29,36,36,37,38,39,42,45,47,48,48,50,52,52,53,57,59,60,63,63,64,64,65,68,70,71,76,76,77,83,83,84,85,86,89,97,97};
        int C[] = {-95,-95,-86,-83,-70,-67,-57,-53,-52,-35,-33,-32,-30,-20,-16,-15,-15,-11,-10,-10,-4,0,4,15,18,34,36,37,39,41,43,43,48,49,50,51,58,63,64,67,69,77,79,84,84,94,95,97};
        ArrayList<Integer> ans = new ArrayList<>();
        solve(A,B,C,ans);
        System.out.println(ans);
        //  hm.entrySet().forEach(entry->{
        //     System.out.println(entry.getKey()+" : "+entry.getValue());
        //  });
    }
}
