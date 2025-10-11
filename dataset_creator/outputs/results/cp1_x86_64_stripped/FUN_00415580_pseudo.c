
undefined8 FUN_00415580(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    lVar1 = FUN_0040d800(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_00414800(param_1,0xffffffff,param_2,param_3,0);
      return uVar2;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_lib.c",0x64b,"EVP_PKEY_CTX_md");
  FUN_0051f8f0(6,0x98,0);
  return 0;
}

