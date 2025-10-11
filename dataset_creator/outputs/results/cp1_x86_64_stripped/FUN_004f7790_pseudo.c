
undefined8 FUN_004f7790(void)

{
  undefined8 uVar1;
  long *in_R8;
  
  if (*(code **)(*in_R8 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f77a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R8 + 0x60))();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_sign.c",0x1f,"ECDSA_do_sign_ex");
  FUN_0051f8f0(0x10,0x98,0);
  return 0;
}

