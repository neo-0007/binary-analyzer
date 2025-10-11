
bool FUN_005493b0(undefined4 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    FUN_00549350();
    *param_1 = 1;
    if (param_3 == 0) {
      lVar1 = FUN_0041ad90(1,"../crypto/passphrase.c",0x2d);
    }
    else {
      lVar1 = FUN_0041c320(param_2,param_3,"../crypto/passphrase.c",0x2c);
    }
    *(long *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/passphrase.c",0x2f,"ossl_pw_set_passphrase");
      FUN_0051f8f0(0xf,0xc0100,0);
    }
    else {
      *(long *)(param_1 + 4) = param_3;
    }
    return lVar1 != 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/passphrase.c",0x26,"ossl_pw_set_passphrase");
  FUN_0051f8f0(0xf,0xc0102,0);
  return false;
}

