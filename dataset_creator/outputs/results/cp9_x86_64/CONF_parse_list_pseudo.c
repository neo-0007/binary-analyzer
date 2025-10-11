
int CONF_parse_list(char *list,int sep,int nospc,list_cb *list_cb,void *arg)

{
  byte bVar1;
  int iVar2;
  ushort **ppuVar3;
  byte *pbVar4;
  size_t sVar5;
  byte *pbVar6;
  
  if (list == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_mod.c",0x245,"CONF_parse_list");
    ERR_set_error(0xe,0x73,0);
    return 0;
  }
  do {
    if (nospc == 0) {
LAB_004c1610:
      pbVar4 = (byte *)strchr(list,sep);
      if (((byte *)list == pbVar4) || (*list == 0)) goto LAB_004c1692;
      pbVar6 = pbVar4 + -1;
      if (pbVar4 == (byte *)0x0) {
        sVar5 = strlen(list);
        pbVar6 = (byte *)list + (sVar5 - 1);
      }
      if (nospc != 0) {
        ppuVar3 = __ctype_b_loc();
        while ((*(byte *)((long)*ppuVar3 + (ulong)*pbVar6 * 2 + 1) & 0x20) != 0) {
          pbVar6 = pbVar6 + -1;
        }
      }
      iVar2 = (*list_cb)(list,((int)pbVar6 - (int)list) + 1,arg);
    }
    else {
      bVar1 = *list;
      if (bVar1 != 0) {
        ppuVar3 = __ctype_b_loc();
        do {
          if ((*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x20) == 0) goto LAB_004c1610;
          bVar1 = ((byte *)list)[1];
          list = (char *)((byte *)list + 1);
        } while (bVar1 != 0);
      }
      pbVar4 = (byte *)strchr(list,sep);
LAB_004c1692:
      iVar2 = (*list_cb)((char *)0x0,0,arg);
    }
    if (iVar2 < 1) {
      return iVar2;
    }
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    list = (char *)(pbVar4 + 1);
  } while( true );
}

