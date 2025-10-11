
undefined8 FUN_004f7890(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f78a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x58))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_sign.c",0x38,"ECDSA_sign_setup");
  FUN_0051f8f0(0x10,0x98,0);
  return 0;
}

