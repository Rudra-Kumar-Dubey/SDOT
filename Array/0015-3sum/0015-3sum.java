class Solution {
    public List<List<Integer>> threeSum(int[] n) {
        List<List<Integer>> ar= new LinkedList<>();
        int a=n.length;
        Arrays.sort(n);
        for(int i=0;i<a;i++){
            int s=i+1;
            int e=a-1;
            int t=-(n[i]);
            while(s<e){
                if(n[s]+n[e]==t){
                    ar.add(Arrays.asList(n[s],n[e],n[i]));
                    while(s+1<a && n[s]==n[s+1]) s++;
                    while(e>0 && n[e]==n[e-1]) e--;
                    s++;
                    e--;
                }
                else if(n[s]+n[e] > t){
                    e--;
                }
                else {
                    s++;
                }
            }
            while(i+1<a && n[i]==n[i+1])i++;
        }
        return ar;
    }
}