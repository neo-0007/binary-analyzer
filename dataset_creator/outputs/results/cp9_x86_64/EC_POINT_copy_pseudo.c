
int EC_POINT_copy(EC_POINT *dst,EC_POINT *src)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)dst + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x303,"EC_POINT_copy");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((*(long *)dst == *(long *)src) &&
       ((*(int *)(dst + 8) == *(int *)(src + 8) || *(int *)(dst + 8) == 0 ||
        (*(int *)(src + 8) == 0)))) {
      if (dst == src) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x004e36bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x30a,"EC_POINT_copy");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

