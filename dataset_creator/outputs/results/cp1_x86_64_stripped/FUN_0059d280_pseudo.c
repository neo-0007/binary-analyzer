
undefined4 FUN_0059d280(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 0;
    lVar2 = FUN_0059cfa0(0);
    if (lVar2 != 0) {
      uVar1 = FUN_0059ce00(param_1,lVar2,param_3);
      FUN_0041ad60(lVar2,"../crypto/x509/v3_utl.c",0x104);
    }
  }
  return uVar1;
}

