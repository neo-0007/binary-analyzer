
undefined8 OPENSSL_sk_shift(int *param_1)

{
  int iVar1;
  undefined8 *__dest;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *param_1;
    uVar3 = 0;
    if (iVar1 != 0) {
      __dest = *(undefined8 **)(param_1 + 2);
      iVar2 = 0;
      uVar3 = *__dest;
      if (iVar1 != 1) {
        memmove(__dest,__dest + 1,(long)(iVar1 + -1) << 3);
        iVar2 = *param_1 + -1;
      }
      *param_1 = iVar2;
    }
  }
  return uVar3;
}

