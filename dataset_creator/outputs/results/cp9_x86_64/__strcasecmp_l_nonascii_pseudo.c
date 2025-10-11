
int __strcasecmp_l_nonascii(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar3);
      iVar2 = *(int *)(*(long *)(param_3 + 0x70) + (ulong)*pbVar1 * 4) -
              *(int *)(*(long *)(param_3 + 0x70) + (ulong)*(byte *)(param_2 + lVar3) * 4);
      if (iVar2 != 0) {
        return iVar2;
      }
      lVar3 = lVar3 + 1;
    } while (*pbVar1 != 0);
  }
  return 0;
}

