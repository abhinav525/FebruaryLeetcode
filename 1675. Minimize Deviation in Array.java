class Solution {
    public int minimumDeviation(int[] nums) {
        TreeSet<Integer>set=new TreeSet<>();
        for(int el:nums){
            if(el%2==1){
                set.add(el*2);
            }
            else{
                set.add(el);
            }
        }
        int diff=Integer.MAX_VALUE;
        while(true){
            int maxvalue=set.last();
            int minvalue=set.first();
            int currdiff=maxvalue-minvalue;
            diff=Math.min(diff,currdiff);
            if(maxvalue%2==0){
                set.remove(maxvalue);
                set.add(maxvalue/2);

            }
            else{
                return diff;
            }
        }

        
    }
}
//if even number divide the number by two
//if odd then we will multiply the number by two and we are moving from lower to higher number in the graph
