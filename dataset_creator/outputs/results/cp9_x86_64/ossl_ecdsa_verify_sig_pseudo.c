
undefined8 ossl_ecdsa_verify_sig(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_RCX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_RCX + 0x18) + 0x188);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ea177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x33,"ossl_ecdsa_verify_sig");
  ERR_set_error(0x10,0xaa,0);
  return 0;
}

