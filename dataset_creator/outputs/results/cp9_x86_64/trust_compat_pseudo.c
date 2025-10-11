
undefined8 trust_compat(undefined8 param_1,X509 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509_check_purpose(param_2,-1,0);
  if ((iVar1 == 1) && ((param_3 & 4) == 0)) {
    uVar2 = 1;
    if (((ulong)param_2[1].name & 0x2000) == 0) {
      uVar2 = 3;
    }
    return uVar2;
  }
  return 3;
}

