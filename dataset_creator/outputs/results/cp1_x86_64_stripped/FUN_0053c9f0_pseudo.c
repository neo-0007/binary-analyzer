
undefined8 FUN_0053c9f0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0x1000) {
    if (*(long *)(param_1 + 0xc) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/kem.c",199,"EVP_PKEY_encapsulate");
      FUN_0051f8f0(6,0x96,0);
      uVar1 = 0xfffffffe;
    }
    else if ((param_2 == 0) || (uVar1 = 0, param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0053ca2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 10) + 0x40))(*(long *)(param_1 + 0xc));
      return uVar1;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/kem.c",0xc2,"EVP_PKEY_encapsulate");
    FUN_0051f8f0(6,0x97,0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

