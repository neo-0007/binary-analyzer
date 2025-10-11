
int FUN_007706d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  iVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = FUN_00768890("/sys/devices/system/cpu");
  if (lVar1 != 0) {
LAB_00770710:
    lVar2 = FUN_00768af0(lVar1);
    if (lVar2 != 0) {
      while ((((*(char *)(lVar2 + 0x12) == '\x04' && (*(char *)(lVar2 + 0x13) == 'c')) &&
              (*(char *)(lVar2 + 0x14) == 'p')) && (*(char *)(lVar2 + 0x15) == 'u'))) {
        lVar3 = FUN_006e9510((char *)(lVar2 + 0x16),&local_38,10);
        if ((lVar3 == -1) || ((char *)(lVar2 + 0x16) == local_38)) break;
        iVar4 = iVar4 + (uint)(*local_38 == '\0');
        lVar2 = FUN_00768af0(lVar1);
        if (lVar2 == 0) goto LAB_00770770;
      }
      goto LAB_00770710;
    }
LAB_00770770:
    FUN_00768ac0(lVar1);
    if (iVar4 != 0) goto LAB_0077077d;
  }
  iVar4 = FUN_00770420();
  if ((iVar4 == 0) && (iVar4 = FUN_00770610(), iVar4 == 0)) {
    iVar4 = 2;
  }
LAB_0077077d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

