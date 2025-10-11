
undefined8 FUN_004f68e0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f68f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x1b,"ossl_ecdsa_sign_setup");
  FUN_0051f8f0(0x10,0xaa,0);
  return 0;
}

