struct list_head {
	struct list_head * prev;
	struct list_head * next;
};


#define LIST_HEAD_INIT(name) { &(name), &(name) }

#define LIST_HEAD(name) \
    struct list_head name = LIST_HEAD_INIT(name)

/*
	struct list_head name = {
		.prev = name, 
		.next = name,
	}
*/

static inline void INIT_LIST_HEAD(struct list_head *list)
{
    list->next = list;
    list->prev = list;
}

static inline void __list_add(struct list_head *new,
                  struct list_head *prev,
                  struct list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

static inline void list_add(struct list_head *new, struct list_head *head)
{
    __list_add(new, head, head->next);
}

static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
    __list_add(new, head->prev, head);
}

static inline void __list_del(struct list_head * prev, struct list_head * next)
{
    next->prev = prev;
    prev->next = next;
}

static inline void list_del(struct list_head *entry)
{
    __list_del(entry->prev, entry->next);
//    entry->next = LIST_POISON1;
//    entry->prev = LIST_POISON2;
	INIT_LIST_HEAD(entry);	
}

static inline int list_empty(const struct list_head *head)
{
    return head->next == head;
}

#define m_offset(type, name) \
        (size_t)(&((type *)0)->name)

#define container_of(ptr,type, name) \
    ((type *)((size_t)(ptr) - m_offset(type, name)))

//通过list_head节点找到type结构体的指针。
#define list_entry(ptr, type, member) \
    container_of(ptr, type, member)


//遍历链表
#define list_for_each(pos, head) \
    for (pos = (head)->next; pos != (head); pos = pos->next)

#define list_for_each_safe(pos, n, head) \
    for (pos = (head)->next, n = pos->next; pos != (head); \
        pos = n, n = pos->next)

//type:指向member成员所在的结构体指针
//head:指向链表的头节点的指针
//member:type结构体的成员名字
#define list_for_each_entry(type, head, member) \
    for (type = list_entry((head)->next, typeof(*type), member); \
            &((type)->member) != head; \
            type = list_entry((type)->member.next, typeof(*type), member))


