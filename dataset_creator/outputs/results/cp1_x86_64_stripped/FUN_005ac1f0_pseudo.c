
bool FUN_005ac1f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    FUN_0041ad60(*(undefined8 *)(param_1 + 0xf0),"../crypto/x509/x_crl.c",0x209);
    bVar2 = true;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (param_3 != 0) {
      lVar1 = FUN_0041c2c0(param_3,"../crypto/x509/x_crl.c",0x20c);
      bVar2 = lVar1 != 0;
      *(long *)(param_1 + 0xf0) = lVar1;
    }
    return bVar2;
  }
  return true;
}

