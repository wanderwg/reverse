//反转一个单链表代码片段
//相当于将pCur头插到pNewHead中
Node* Reverse(Node* head) {
	Node* PNewHead = NULL;
	Node* pCur = head;
	while (pCur) {
		head = pCur->next;
		pCur->next = PNewHead;
		PNewHead = pCur;

		pCur = head;
	}
	return PNewHead;
}