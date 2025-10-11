
undefined8 FUN_004f69a0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_RCX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_RCX + 0x18) + 0x188);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f69b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x33,"ossl_ecdsa_verify_sig");
  FUN_0051f8f0(0x10,0xaa,0);
  return 0;
}

