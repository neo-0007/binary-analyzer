
undefined8 OPENSSL_sk_delete(int *param_1,int param_2)

{
  undefined8 *__dest;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    iVar1 = *param_1;
    uVar3 = 0;
    if (param_2 < iVar1) {
      iVar2 = iVar1 + -1;
      __dest = (undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
      uVar3 = *__dest;
      if (param_2 != iVar2) {
        memmove(__dest,(void *)(*(long *)(param_1 + 2) + 8 + (long)param_2 * 8),
                (long)((iVar1 - param_2) + -1) << 3);
        iVar2 = *param_1 + -1;
      }
      *param_1 = iVar2;
    }
    return uVar3;
  }
  return 0;
}

