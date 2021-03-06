typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_PAGE_SEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Signature;
} HEAP_PAGE_SEGMENT, *PHEAP_PAGE_SEGMENT; /* size: 0x0018 */

