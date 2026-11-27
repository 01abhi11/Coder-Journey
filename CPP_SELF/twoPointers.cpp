/*The Two-Pointers Technique is a simple yet powerful strategy
where you use two indices (pointers) that traverse a data structure -
such as an array, list, or string - either toward each other or
in the same direction to solve problems more efficiently*/

/*When to use Two Pointers:
Sorted Input : If the array or list is already sorted (or can be sorted), two pointers can efficiently find pairs or ranges. Example: Find two numbers in a sorted array that add up to a target.
Pairs or Subarrays : When the problem asks about two elements, subarrays, or ranges instead of working with single elements. Example: Longest substring without repeating characters, maximum consecutive ones, checking if a string is palindrome.
Sliding Window Problems : When you need to maintain a window of elements that grows/shrinks based on conditions. Example: Find smallest subarray with sum ≥ K, move all zeros to end while maintaining order.
Linked Lists (Slow–Fast pointers) : Detecting cycles, finding the middle node, or checking palindrome property. Example: Floyd’s Cycle Detection Algorithm (Tortoise and Hare).*/


//Theory
// (Two Pointers Technique):
// 1. Core Concept: Uses two indices (`left` and `right`, or `slow` and `fast`) to traverse an array, string, or linked list either toward each other or in the same direction, reducing O(n^2) nested loops to O(n) single-pass traversal in O(1) extra space.
// 2. Main Variations:
//    - Opposite-Ends (Converging): `left = 0`, `right = n - 1` move inward (`left++`, `right--`) while `left < right` (e.g., Reverse String, Valid Palindrome, Two Sum in a Sorted Array).
//    - Same-Direction (Fast & Slow / Sliding Window): Both pointers move forward at different speeds or maintain a dynamic window (e.g., Remove Duplicates, Move Zeros, Floyd's Cycle Detection in Linked Lists).
// 3. When to Use Two Pointers:
//    - Sorted input where you need pairs/triplets matching a target sum (Two Sum II, 3Sum, 4Sum).
//    - In-place array/string reversal, partitioning, or palindrome checks requiring O(1) auxiliary space.
//    - Subarray/substring problems maintaining a variable or fixed window (Sliding Window).
//    - Linked list cycle detection or finding the middle node (Tortoise & Hare).
// 4. Why Sorted Pair-Sum Never Misses an Answer:
//    - If `arr[left] + arr[right] < target`, incrementing `left++` is safe because `arr[left]` paired with any element to the left of `right` would produce an even smaller sum.
//    - If `arr[left] + arr[right] > target`, decrementing `right--` is safe because `arr[right]` paired with any element to the right of `left` would produce an even larger sum.
// 5. Complexity Advantage:
//    - Time Complexity: O(n) — each pointer traverses the structure at most once (total steps <= n).
//    - Space Complexity: O(1) auxiliary space — uses only two pointer variables instead of extra hash maps or auxiliary arrays.
