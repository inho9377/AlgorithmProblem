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
    ListNode node = new ListNode();
    ListNode inNode = new ListNode();
    int carry=0;
    while(l1 != null || l2 != null)
    {
      int value = l1.val + l2.val + carry;
      if(value > 10)
      {
        carry = value/10;
        value %= 10;
      }
      else
      {
        carry = 0;
      }
      
      inNode.val = value;
      
    }

    return node;
  }
}

