
undefined8 FUN_004b8360(long *param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar4 = param_2 >> 6;
  if (iVar4 < (int)param_1[1]) {
    lVar3 = *param_1;
  }
  else {
    lVar3 = FUN_004b8240(param_1,iVar4 + 1);
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = (int)param_1[1];
    lVar3 = *param_1;
    if (iVar2 <= iVar4) {
      thunk_FUN_00713720(lVar3 + (long)iVar2 * 8,0,(ulong)(uint)(iVar4 - iVar2) * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar4 + 1;
  }
  puVar1 = (ulong *)(lVar3 + (long)iVar4 * 8);
  *puVar1 = *puVar1 | 1L << ((byte)param_2 & 0x3f);
  return 1;
}

