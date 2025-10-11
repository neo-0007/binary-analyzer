
undefined8 EC_KEY_priv2oct(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x130);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e2231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x37f,"EC_KEY_priv2oct");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  return 0;
}

