
undefined8 FUN_00416d20(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    uVar1 = 0x2a8;
  }
  else {
    if (*param_1 != 0x20) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/signature.c",0x2ad,"EVP_PKEY_verify");
      FUN_0051f8f0(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00416d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 10) + 0x50))(*(long *)(param_1 + 0xc));
      return uVar1;
    }
    if ((*(long *)(param_1 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x1e) + 0x58),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00416d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_0051f420();
    uVar1 = 0x2ba;
  }
  FUN_0051f540("../crypto/evp/signature.c",uVar1,"EVP_PKEY_verify");
  FUN_0051f8f0(6,0x96,0);
  return 0xfffffffe;
}

