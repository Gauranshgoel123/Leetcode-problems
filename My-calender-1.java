class MyCalendar {

    class Node {
        int start;
        int end;
        Node left,right;

        public Node(int start,int end){
            this.start = start;
            this.end = end;
        }
    }

    Node root;

    public MyCalendar() {
        
    }
    
    public boolean book(int start, int end) {
        if(root == null){
            root = new Node(start,end);
            return true;
        }
        Node curr = root;
        while(curr != null){
            if(end <= curr.start){
                if(curr.left == null){
                    curr.left = new Node(start,end);
                    return true;
                }
                curr = curr.left;
            }
            else if(start >= curr.end){
                if(curr.right == null){
                    curr.right = new Node(start,end);
                    return true;
                }
                curr = curr.right;
            }
            else return false;
        }
        return false;
    }
}



/**

This implementation of `MyCalendar` uses a binary search tree (BST) to efficiently manage the booking of events without overlapping. Each node in the tree represents an event, with `start` and `end` representing the start and end times of that event.

### Explanation:

#### 1. **Node Class**:
   ```java
   class Node {
       int start;
       int end;
       Node left, right;

       public Node(int start, int end) {
           this.start = start;
           this.end = end;
       }
   }
   ```
   - Each node stores the `start` and `end` times of an event.
   - `left` points to events that end before this event starts.
   - `right` points to events that start after this event ends.

#### 2. **Root Initialization**:
   ```java
   Node root;
   ```
   - The tree has a `root` node, which is initialized as `null` in the constructor.
   
   ```java
   public MyCalendar() {}
   ```
   - The constructor initializes the `root` of the binary tree as `null` because initially, there are no booked events.

#### 3. **book Method**:
   The `book` method attempts to add a new event `[start, end)` to the calendar while ensuring there is no overlap with any existing events.
   
   ```java
   public boolean book(int start, int end) {
       if (root == null) {
           root = new Node(start, end);
           return true;
       }
   ```
   - If the tree is empty (`root == null`), the event is added as the root node, and the method returns `true`.

#### 4. **Traversing the Tree**:
   The method then traverses the tree to find the correct position for the new event, ensuring no overlap with any existing event.
   
   ```java
   Node curr = root;
   while (curr != null) {
   ```
   - The method starts at the root and iteratively traverses down the tree.
   
   - **If the new event ends before the current event starts**:
     ```java
     if (end <= curr.start) {
         if (curr.left == null) {
             curr.left = new Node(start, end);
             return true;
         }
         curr = curr.left;
     }
     ```
     - This means the new event should be placed in the left subtree (since there is no overlap).
     - If the left child is `null`, the new event is inserted as the left child.
     - If not, the traversal continues to the left child.

   - **If the new event starts after the current event ends**:
     ```java
     else if (start >= curr.end) {
         if (curr.right == null) {
             curr.right = new Node(start, end);
             return true;
         }
         curr = curr.right;
     }
     ```
     - This means the new event should be placed in the right subtree (since there is no overlap).
     - If the right child is `null`, the new event is inserted as the right child.
     - If not, the traversal continues to the right child.

   - **If the new event overlaps with the current event**:
     ```java
     else return false;
     ```
     - If neither condition holds (i.e., `end > curr.start` and `start < curr.end`), the new event overlaps with an existing one, so the booking fails, and `false` is returned.

#### 5. **Edge Cases**:
   - If the new event is disjoint from all existing events, it will be inserted in the appropriate position in the BST, either as a left or right child.
   - The tree is traversed using a `while` loop, ensuring that the insertion or conflict detection happens efficiently.

### Summary:
- This solution uses a binary search tree (`BST`) to store events, where each node represents an event with a `start` and `end` time.
- The `book` method tries to insert a new event, ensuring no overlap by checking the relative positions of the new event against existing ones.
- Time complexity for insertion and search is on average `O(log n)` for balanced trees but can degrade to `O(n)` in the worst case for unbalanced trees. */















//option2
class MyCalendar {
    TreeMap<Integer, Integer> calendar;

    MyCalendar() {
        calendar = new TreeMap();
    }

    public boolean book(int start, int end) {
        Integer prev = calendar.floorKey(start),
                next = calendar.ceilingKey(start);
        if ((prev == null || calendar.get(prev) <= start) &&
                (next == null || end <= next)) {
            calendar.put(start, end);
            return true;
        }
        return false;
    }
}
/**
The `MyCalendar` class implements a booking system that allows users to book events, ensuring that no two events overlap. It uses a `TreeMap` to store and manage the events, where the keys represent the start times and the values represent the end times of the booked events.

Here’s a detailed breakdown of how the class works:

### 1. **TreeMap Initialization**:
   ```java
   TreeMap<Integer, Integer> calendar;
   ```
   - `TreeMap` is a data structure that stores key-value pairs and automatically keeps the keys in sorted order.
   - In this case, the keys are event start times, and the values are the corresponding end times.

   ```java
   calendar = new TreeMap();
   ```
   - The constructor initializes the `TreeMap` to manage the events.

### 2. **`book` Method**:
   This method checks if an event can be booked without overlapping any existing events.

   ```java
   public boolean book(int start, int end)
   ```
   - **Parameters**:
     - `start`: The start time of the new event.
     - `end`: The end time of the new event (exclusive, meaning the event ends right before this time).

   - **Logic**:
     - The method checks if there is any overlap with the previously booked event (`prev`) or the next booked event (`next`).

     ```java
     Integer prev = calendar.floorKey(start),
             next = calendar.ceilingKey(start);
     ```
     - `prev`: The `floorKey` returns the largest key (start time) that is less than or equal to `start`. This represents the previous event's start time.
     - `next`: The `ceilingKey` returns the smallest key (start time) that is greater than or equal to `start`. This represents the next event's start time.

     Now, the method checks two conditions:
     ```java
     if ((prev == null || calendar.get(prev) <= start) && (next == null || end <= next))
     ```
     - **Condition 1**: `(prev == null || calendar.get(prev) <= start)`
       - This checks whether there is no previous event (`prev == null`) or the previous event ends before or at the new event’s start time (`calendar.get(prev) <= start`).

     - **Condition 2**: `(next == null || end <= next)`
       - This checks whether there is no next event (`next == null`) or the new event ends before the next event starts (`end <= next`).

     If both conditions are satisfied (i.e., no overlap with either previous or next events), the event is added to the `calendar`:
     ```java
     calendar.put(start, end);
     return true;
     ```

     If there is an overlap, the method returns `false`.

### 3. **Example**:
```java
MyCalendar obj = new MyCalendar();
boolean result = obj.book(10, 20);  // This will return true if the event [10, 20) can be booked.
```

### Summary:
- The `TreeMap` structure ensures that events are stored in a sorted manner by start time.
- The `book` method checks if the new event overlaps with the nearest previous and next events using `floorKey` and `ceilingKey`.
- If there is no overlap, the event is booked (added to the `TreeMap`), and the method returns `true`. If there is an overlap, it returns `false`.

 */



/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */




// option3 -BRUTE FORCE
  class MyCalendar {
    List<int[]> calender;
    public MyCalendar() {
        calender=new ArrayList<>();
    }
    public boolean book(int start, int end) {
        for(int[] slot:calender){
            if(end>slot[0] && start<slot[1]){
                return false;
            }
        }
        calender.add(new int[]{start,end});
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */
