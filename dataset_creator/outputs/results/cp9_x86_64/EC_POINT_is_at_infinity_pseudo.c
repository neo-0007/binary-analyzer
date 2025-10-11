
int EC_POINT_is_at_infinity(EC_GROUP *group,EC_POINT *p)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xb8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3d7,"EC_POINT_is_at_infinity");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)group == *(long *)p) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
                    /* WARNING: Could not recover jumptable at 0x004e44ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3db,"EC_POINT_is_at_infinity");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

