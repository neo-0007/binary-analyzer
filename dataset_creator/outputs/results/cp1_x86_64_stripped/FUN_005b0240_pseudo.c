
bool FUN_005b0240(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x170) = param_2;
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x178),"../crypto/x509/x_x509.c",0x96);
    bVar2 = true;
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (param_3 != 0) {
      lVar1 = FUN_0041c2c0(param_3,"../crypto/x509/x_x509.c",0x99);
      bVar2 = lVar1 != 0;
      *(long *)(param_1 + 0x178) = lVar1;
    }
    return bVar2;
  }
  return true;
}

