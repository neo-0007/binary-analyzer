
int EC_POINT_invert(EC_GROUP *group,EC_POINT *a,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xb0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3ca,"EC_POINT_invert");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)a) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(a + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(a + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x004e4441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3ce,"EC_POINT_invert");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

