
int __strncasecmp_l_nonascii(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_4 + 0x70) + (ulong)*(byte *)(param_1 + lVar2) * 4) -
              *(int *)(*(long *)(param_4 + 0x70) + (ulong)*(byte *)(param_2 + lVar2) * 4);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while ((*(byte *)(param_1 + lVar2) != 0) && (lVar2 = lVar2 + 1, param_3 != lVar2));
  }
  return 0;
}

