typedef enum _NDIS_PT_REFTAG
{
  PTREF_BIND_ITER = 0,
  PTREF_READREGISTRY = 1,
  PTREF_BINDNOTIFY = 2,
  PTREF_UNBINDNOTIFY = 3,
  PTREF_RECONFIG = 4,
  PTREF_UNLOADNOTIFY = 5,
  PTREF_UNBINDING = 6,
  PTREF_BINDING = 7,
  PTREF_BINDINGX = 8,
  PTREF_SQM = 9,
  PTREF_OPEN = 10,
  PTREF_REENUMERATE = 11,
  PTREF_QUNBIND = 12,
  PTREF_BINDCOMPLETE = 13,
  PTREF_BINDFAILNOTIFY = 14,
  PTREF_NUMBER_OF_TAGS = 15,
} NDIS_PT_REFTAG, *PNDIS_PT_REFTAG;

