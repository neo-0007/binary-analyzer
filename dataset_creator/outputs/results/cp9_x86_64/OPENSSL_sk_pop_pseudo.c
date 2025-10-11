
undefined8 OPENSSL_sk_pop(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*param_1 != 0) {
      iVar1 = *param_1 + -1;
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
      *param_1 = iVar1;
    }
  }
  return uVar2;
}

