typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _KSCB
{
  /* 0x0000 */ unsigned __int64 GenerationCycles;
  /* 0x0008 */ unsigned __int64 UnderQuotaCycleTarget;
  /* 0x0010 */ unsigned __int64 RankCycleTarget;
  /* 0x0018 */ unsigned __int64 LongTermCycles;
  /* 0x0020 */ unsigned __int64 LastReportedCycles;
  /* 0x0028 */ volatile unsigned __int64 OverQuotaHistory;
  /* 0x0030 */ unsigned __int64 ReadyTime;
  /* 0x0038 */ unsigned __int64 InsertTime;
  /* 0x0040 */ struct _LIST_ENTRY PerProcessorList;
  /* 0x0050 */ struct _RTL_BALANCED_NODE QueueNode;
  struct /* bitfield */
  {
    /* 0x0068 */ unsigned char Inserted : 1; /* bit position: 0 */
    /* 0x0068 */ unsigned char OverQuota : 1; /* bit position: 1 */
    /* 0x0068 */ unsigned char HardCap : 1; /* bit position: 2 */
    /* 0x0068 */ unsigned char RankBias : 1; /* bit position: 3 */
    /* 0x0068 */ unsigned char Spare1 : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0069 */ unsigned char Spare2;
  /* 0x006a */ unsigned short ReadySummary;
  /* 0x006c */ unsigned long Rank;
  /* 0x0070 */ struct _LIST_ENTRY ReadyListHead[16];
} KSCB, *PKSCB; /* size: 0x0170 */

