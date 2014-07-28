/* getElement() */
#define 	MAXSIZE 	20
#define 	OK 			1
#define 	ERROR 		0
#define 	TRUE 		1
#define 	FALSE 		0
typedef int ElemType;
typedef int Status;


typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SqList;


Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length < 0 || i < 1 || i > L.length)
	{
		return ERROR;
	}

	*e = L.data[i-1];
	return OK;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)
		return ERROR;
	if (i < 1 || i >L->length+1)
		return ERROR;
	if (i <= L->length)
	{
		for (k = L->length - 1; k >= i - 1; k--)
		{
			L->data[k+1] = L->data[k];
		}
		L->data[i-1] = e;
		L->length++;
		return OK;
	}
}


Status ListDelete (SqList *L, int i, ElemType *e)
{
    int k;
    if (L->length == 0)
        return ERROR;

    if (i < 1 || i > L->length+1)
        return ERROR;

    if (i < L->length)
    {
        for (k = i; k < L->length; k++)
        {
            L->data[k-1] = l->data[k];
        }
    }
    L->length--;
    return OK;
}

/* 单链表中描述指针 */
typedef struct Node
{
    ElemType data;
    struct Node *next;
} Node;
typedef struct Node *LinkList;

/* LinkList GetElem */
Status GetElem(LinkList L, int i, ElemType *e)
{
    int j;
    LinkList p;
    p = L->next;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }

    if (!p || j > i)
        return ERROR;

    *e = p->data;
    return OK;
}


Status ListInsert(SqList *L, int i, ElemType e)
{
    int j;
    LinkList p, s;
    p = *L;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }

    if (!p || j > i)
    {
        return ERROR;
    }

    s = (LinkList) malloc(sizeof(Node));  /* 生成新结点，C标准函数 */
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}


Status ListDelete (LinkList *L, int i, ElemType *e)
{
    int j;
    LinkList p, q;
    j = 1;
    if (p->next && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p->next || j > i)
       return ERROR;

    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}

void CreateListHead (LinkList *L, int n)
{
    LinkList p;
    int i;
    srand (time(0));
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    for (i = 0; i < n; i++)
    {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

/* 尾插法 */
void CreateListTail(LinkList *L, int n)
{
    LinkList p, r;
    int i;
    srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    r = *L;
    for (i = 0; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

Status ClearList(LinkList *L)
{
    LinkList p, q;
    p = (*L)->next;
    while (p)
    {
        q = p->next;
        free(p);
        p = q;
    }

    (*L)->next = NULL;
    return OK;
}

#define MAXSIZE 1000
typedef struct
{
    ElemType data;
    int cur;
} Component, StaticLinkList[MAXSIZE];

/* space[0].cur为头指针，"0"表示空指针 */
Status InitList(StaticLinkList space)
{
    int i;
    for (i = 0; i < MAXSIZE-1; i++)
    {
        space[i].cur = i + 1;
    }
    space[MAXSIZE-1].cur = 0;
    return OK;
}

int Malloc_SLL(StaticLinkList space)
{
    int i = space[0].cur;
    if (space[0].cur)
        space[0].cur = space[i].cur;
    return i;
}


Status ListInsert(StaticLinkList L, int i, ElemType e)
{
    int j, k, l;
    k = MAX_SIZE - 1; /* k是列表的最后一个元素的下标 */
    if (i < 1 || i > ListLength(L) + 1)
        return ERROR;

    j = Malloc_SSL(L);  /* j是空闲分量的下标 */
    if (j)
    {
        L[j].data = e; /* 把新数据放在空闲位置 */
        for (l = 1; l <= i - 1; l++) /*  */
            k = L[k].cur;
        L[j].cur = L[k].cur; /* 把第i个元素之前的cur赋值给新元素的cur */
        L[k].cur = j; /*  */
        return OK;
    }

    return ERROR;
}


Status ListDelete(StaticLinkList L, int i)
{
    int j, k;
    if (i < 1 || i > ListLength(L))
        return ERROR;

    k = MAX_SIZE - 1;
    for (j = 1; j <= i - 1; j++)
        k = L[k].cur;

    j = L[k].cur;
    L[k].cur = L[j].cur;
    Free_SSL(L, j);
    return OK;
}

void Free_SSL(StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;
    space[0].cur = k;
}

int ListLength(StaticLinkList L)
{
    int j = 0;
    int i = L[MAX_SIZE - 1].cur;

    while (i)
    {
        i = L[i].cur;
        j++;
    }

    return j;
}


typedef struct DulNode
{
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
} DulNode, *DuLinkList;


/* Stack */
typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */
typedef struct
{
    SElemType data[MAX_SIZE];
    int top;
}SqStack;


/* Push */
Status Push(SqStack *S, SElemType e)
{
    if (S->top == MAX_SIZE - 1) /* 栈满 */
        return ERROR;

    S->top++;
    S->data[S->top] = e;
    return OK;
}

/* Pop */
Status Pop(SqStack *S, SElemType *e)
{
    if (S->top == -1)
        return ERROR;
    *e = S->data[S->top];
    S->top--;
    return OK;
}

typedef struct
{
    SElemType data[MAX_SIZE];
    int top1;
    int top2;
} SqDoubleStack;

Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
{
    if (S->top1+1 == S->top2)
        return ERROR;

    if (stackNumber == 1)
        S->data[++S->top1] = e;
    else if (stackNumber == 2)
        S->data[--S->top2] = e;
    return OK;
}

Status Pop(SqDoubleStack *S, SElemType *e, int stackNumber)
{
    if (stackNumber == 1)
    {
        if (S->top1 == -1)
            return ERROR;
        *e = S->data[S->top1--];
    }
    else if (stackNumber == 2)
    {
        if (S->top2 == MAX_SIZE)
            return ERROR;
        *e = S->data[S->top2++];
    }
    return OK;
}

typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
} StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
} LinkStack;


Status Push(LinkStack *S, SElemType e)
{
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top;
    S->top = s;
    S->count++;
    return OK;
}

Status Pop(LinkStack *S, SElemType *e)
{
    LinkStackPtr p;
    if (StackEmpty(*S))
        return ERROR;

    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    free(p);
    S->count--;
    return OK;
}


/* fibonaci */
main()
{
    int i;
    int a[40];
    a[0] = 0;
    a[1] = 1;
    printf ("%d\n", a[0]);
    printf ("%d\n", a[1]);
    for (i = 2; i < 40; i++)
    {
        a[i] = a[i-1] + a[i-2];
        printf("%d\n", a[i];
    }
}

typedef int QElemType;

typedef struct
{
    QElemType data[MAX_SIZE];
    int front;
    int rear;
} SqQueue;


Status InitQueue(SqQueue *Q)
{
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

int QueueLength(SqQueue Q)
{
    return (Q.rear - Q.front + MAX_SIZE) % MAX_SIZE;
}

Status EnQueue(SqQueue *Q, QElemType e)
{
    if ((Q->rear + 1) % MAX_SIZE == Q->front)
        return ERROR;

    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1) % MAX_SIZE;

    return OK;
}

Status DeQueue(SqQueue *Q, QElemType *e)
{
    if (Q->front == Q->rear)
        return ERROR;

    *e = Q->data[Q->front];
    Q->front = (Q->front+1) % MAX_SIZE;

    return OK;
}

typedef int QElemType;

typedef struct QNode
{
    QElemType data;
    struct QNode *next;
} QNode, *QueuePtr;

typedef struct
{
    QueuePtr front, rear;
} LinkQueue;

Status EnQueue (LinkQueue *Q, QElemType e)
{
    QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
    if (!s)
        exit(OVERFLOW);

    s->data = e;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;

    return OK;
}

Status DeQueue (LinkQueue *Q, QElemType *e)
{
    QueuePtr p;
    if (Q->front == Q->rear)
        return ERROR;

    p = Q->front->next;

    *e = p->data;
    Q->front->next = p->next;

    if (Q->rear == p)
        Q->rear = Q->front;

    free(p);
    return OK;
}

int Index(String S, String T, int pos)
{
    int n, m, i;
    String sub;
    if (pos > 0)
    {
        n = StrLength(S);
        m = StrLength(T);
        i = pos;
        while (i < n-m+1)
        {
            SubString(sub, S, i, m);

            if (StrCompare(sub, T)) != 0)
                ++i;
            else
                return i;
        }
    }
    return 0;
}

int Index(String S, String T, int pos)
{
    int i = pos;
    int j = 1;
    while(i <= S[0] && j <= T[0])
    {
        if (S[i] == T[i])
        {
            ++i;
            ++j;
        }
        else
        {
            i = i - j + 2;
            j = 1;
        }
    }

    if (j > T[0])
        return i - T[0];
    else
        return 0;
}


void get_next(String T, int *next)
{
    int i, j;
    i = 1;
    j = 0;
    next[1] = 0;
    while(i<T[0])
    {
        if (j == 0 || T[i] == T[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
    }
    else {
        j = next[j];
    }
}
