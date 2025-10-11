
undefined8 FUN_0041c320(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 0x7fffffff) {
    lVar1 = FUN_0041ad90(param_2,param_3,param_4);
    if (lVar1 != 0) {
      uVar2 = thunk_FUN_00713a50(lVar1,param_1,param_2);
      return uVar2;
    }
    FUN_0051f420(0);
    FUN_0051f540("../crypto/o_str.c",0x3c,"CRYPTO_memdup");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  return 0;
}

