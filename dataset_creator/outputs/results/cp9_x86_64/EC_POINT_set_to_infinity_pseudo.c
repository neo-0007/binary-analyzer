
int EC_POINT_set_to_infinity(EC_GROUP *group,EC_POINT *point)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x32f,"EC_POINT_set_to_infinity");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (*(long *)group == *(long *)point) {
                    /* WARNING: Could not recover jumptable at 0x004e400d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x333,"EC_POINT_set_to_infinity");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

