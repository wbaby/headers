typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ void* AccessLog;
  /* 0x0030 */ unsigned __int64 ChargedWslePages;
  /* 0x0038 */ unsigned __int64 ActualWslePages;
  /* 0x0040 */ unsigned __int64 WorkingSetSizeOverhead;
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0048 */

