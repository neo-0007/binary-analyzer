
undefined8 ossl_ecdsa_sign_setup(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ea0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x1b,"ossl_ecdsa_sign_setup");
  ERR_set_error(0x10,0xaa,0);
  return 0;
}

