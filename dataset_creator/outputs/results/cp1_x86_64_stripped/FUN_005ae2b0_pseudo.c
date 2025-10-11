
long FUN_005ae2b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_005ae200();
  lVar2 = FUN_004a7500(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    FUN_0041ad60(*(undefined8 *)(lVar2 + 0x20),"../crypto/x509/x_pubkey.c",0x34);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (param_2 != 0) {
      lVar3 = FUN_0041c2c0(param_2,"../crypto/x509/x_pubkey.c",0x37);
      *(long *)(lVar2 + 0x20) = lVar3;
      if (lVar3 == 0) {
        FUN_005ae290(lVar2);
        return 0;
      }
    }
  }
  return lVar2;
}

