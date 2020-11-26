struct deque
{
	TYPE *data;
	int capacity;
	int size;
	int start;
};
void initDynArr(struct deque *d, int cap)
{
	d->capacity = cap;
	d->size = 0;
	d->data = malloc(d->capacity * sizeof(TYPE));
}
void _DoubleCapacity(struct deque *d)
{
	TYPE *oldbuffer = d->data;
	int oldsize = d->size;
	initDynArr(d, 2 * d->capacity);
	for (int i = 0; i < oldsize; i++)
		d->data[i] = oldbuffer[i];
	d->size = oldsize;
	free(oldbuffer);
}
void push_front(struct deque *d, TYPE val)
{
	if (d->size == d->capacity)
		_DoubleCapacity(d);
	d->start--;
	if (d->start < 0)
		d->start += d->capacity;
	d->data[d->start] = val;
	d->size++;
}

////////////////////////////////

struct Node
{
	int data;
	Node *prev, *next;

};
struct deque
{
	Node *front;
	Node *back;
	int Size;
};
Node *grow(int data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = newNode->next = NULL;
	return newNode;
}
void push_front(int data) 
{ 
    Node* newNode = grow(data); 
    if (newNode == NULL) 
        cout << "OverFlow\n"; 
    else 
    { 
        // If  empty 
        if (front == NULL) 
            back = front = newNode; 
  
        // Inserts frontend 
        else 
        { 
            newNode->next = front; 
            front->prev = newNode; 
            front = newNode; 
        } 
        Size++; 
    } 
} 