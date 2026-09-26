class Solution {
public:

    int findKthLargest(vector<int>& nums, int k) {

        // priority_queue = Heap
        // Syntax:
        // priority_queue<data_type, container, comparison> name;
        //
        // int              → heap stores integers
        // vector<int>      → internal container used by heap
        // greater<int>     → makes it a MIN HEAP
        // pq               → name of our heap
        //
        // Normally priority_queue<int> is a MAX HEAP.
        // greater<int> changes it to a MIN HEAP.
        priority_queue<int, vector<int>, greater<int>> pq;


        // Range-based for loop
        //
        // int x → each element is temporarily stored in x
        // nums  → array we are traversing
        //
        // Example:
        // nums = {3, 2, 1, 5}
        //
        // x will be:
        // 3 → 2 → 1 → 5
        for (int x : nums) {

            // push() inserts the current element into the heap
            pq.push(x);


            // size() tells us how many elements are currently
            // present in the heap.
            //
            // We only want to keep K elements.
            //
            // Example:
            // k = 3
            // If heap size becomes 4, we remove one element.
            if (pq.size() > k) {

                // pop() removes the TOP element.
                //
                // Since this is a MIN HEAP,
                // the smallest element is at the top.
                //
                // Therefore, we remove the smallest element
                // whenever we have more than K elements.
                pq.pop();
            }
        }


        // top() gives the element at the top of the heap.
        //
        // Our heap contains only the K largest elements.
        //
        // Because it is a MIN HEAP, the smallest among
        // those K largest elements is the KTH LARGEST.
        //
        // Example:
        // K = 3
        // Heap = [5, 6, 10]
        //
        // top() = 5
        // 5 is the 3rd largest element.
        return pq.top();
    }
};