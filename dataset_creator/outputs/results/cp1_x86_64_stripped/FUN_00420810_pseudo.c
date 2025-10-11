
undefined8 FUN_00420810(long param_1,long param_2)

{
  long lVar1;
  
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),"../crypto/provider_core.c",0x2df);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    lVar1 = FUN_0041c2c0(param_2,"../crypto/provider_core.c",0x2e3);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/provider_core.c",0x2e5,"ossl_provider_set_module_path");
      FUN_0051f8f0(0xf,0xc0100,0);
      return 0;
    }
  }
  return 1;
}

