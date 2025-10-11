
undefined8 ossl_ecdh_compute_key(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_RCX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_RCX + 0x18) + 0x170);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e9777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x20,"ossl_ecdh_compute_key");
  ERR_set_error(0x10,0xa0,0);
  return 0;
}

