using System.Collections.Generic;


public class _002_AddTwoNumbers
{
  
  public class ListNode {
      public int val;
      public ListNode next;
      public ListNode(int val=0, ListNode next=null) {
          this.val = val;
          this.next = next;
      }
    }
  public ListNode AddTwoNumbers(ListNode l1, ListNode l2) 
  {
    ListNode dummyHead = new ListNode();
    ListNode node = dummyHead;
    int carry=0;
    while(l1 != null || l2 != null)
    {
      int a = l1 == null? 0 : l1.val;
      int b = l2 == null? 0 : l2.val;

      int value = a + b + carry;
      carry = value / 10;
      value = value % 10;

      node.next = new ListNode(value);
      node = node.next;
      if(l1 != null)
      {
        l1 = l1.next;
      }
      if(l2 != null)
      {
        l2 = l2.next;      
      }
    }

    if(carry > 0)
    {
      node.next = new ListNode(carry);
    }

    return dummyHead.next;
  }
}

