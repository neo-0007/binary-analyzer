
int EC_KEY_check_key(EC_KEY *key)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (((key == (EC_KEY *)0x0) || (*(long **)(key + 0x18) == (long *)0x0)) ||
     (*(long *)(key + 0x20) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x17f,"EC_KEY_check_key");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(key + 0x18) + 0x150);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x184,"EC_KEY_check_key");
    ERR_set_error(0x10,0xc0101,0);
  }
  return 0;
}

