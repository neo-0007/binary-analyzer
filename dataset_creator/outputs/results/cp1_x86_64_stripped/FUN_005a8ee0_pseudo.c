
void FUN_005a8ee0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (param_2 == 0) {
    if (lVar1 != 0) {
      FUN_0041ad60(lVar1,"../crypto/x509/x509_vpm.c",0x1a8);
      *(undefined8 *)(param_1 + 0x48) = 0;
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x48);
    if (lVar2 != lVar1) {
      FUN_0041ad60(lVar1,"../crypto/x509/x509_vpm.c",0x1a8);
      *(long *)(param_1 + 0x48) = lVar2;
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}

