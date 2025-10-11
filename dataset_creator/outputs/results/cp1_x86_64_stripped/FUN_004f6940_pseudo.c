
undefined8 FUN_004f6940(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_R8;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_R8 + 0x18) + 0x180);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f6957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x27,"ossl_ecdsa_sign_sig");
  FUN_0051f8f0(0x10,0xaa,0);
  return 0;
}

