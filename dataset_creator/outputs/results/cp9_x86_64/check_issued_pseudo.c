
undefined8 check_issued(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_x509_likely_issued(param_3);
  uVar2 = 1;
  if ((iVar1 != 0) && (uVar2 = 0, iVar1 != 0x1d)) {
    *(int *)(param_1 + 0xb0) = iVar1;
  }
  return uVar2;
}

