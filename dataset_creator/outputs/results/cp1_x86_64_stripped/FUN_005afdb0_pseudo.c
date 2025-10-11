
bool FUN_005afdb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x70),"../crypto/x509/x_req.c",0x98);
    *(undefined8 *)(param_1 + 0x70) = 0;
    bVar2 = true;
    if (param_3 != 0) {
      lVar1 = FUN_0041c2c0(param_3,"../crypto/x509/x_req.c",0x9b);
      bVar2 = lVar1 != 0;
      *(long *)(param_1 + 0x70) = lVar1;
    }
    return bVar2;
  }
  return true;
}

