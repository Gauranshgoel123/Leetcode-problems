class KthLargest {

    PriorityQueue<Integer> minheap;
    int k;
    public KthLargest(int k, int[] nums) {
        this.k=k;
        minheap = new PriorityQueue<>();
        for(int num:nums){
            add(num);
        }
    }
    
    public int add(int val) {
        if( minheap.size() < k || minheap.peek() < val ){
            minheap.add(val);
            if(minheap.size()>k){
                minheap.remove();
            }
        }
        return minheap.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
