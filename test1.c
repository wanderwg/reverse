//��תһ�����������Ƭ��
//�൱�ڽ�pCurͷ�嵽pNewHead��
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