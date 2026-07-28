public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null) return null;

        int lenA = 0, lenB = 0;
        ListNode c1 = headA, c2 = headB;
        while (c1 != null) {
            lenA++;
            c1 = c1.next;
        }
        while (c2 != null) {
            lenB++;
            c2 = c2.next;
        }

        c1 = headA;
        c2 = headB;
        int diff = Math.abs(lenA - lenB);

        if (lenA > lenB) {
            while (diff-- > 0) c1 = c1.next;
        } else {
            while (diff-- > 0) c2 = c2.next;
        }

      
            if (c1 == c2) return c1; 
            c1 = c1.next;
            c2 = c2.next;
        }

        return null;
    }
}
