
int EC_POINTs_make_affine(EC_GROUP *group,size_t num,EC_POINT **points,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  size_t sVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xd8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x418,"EC_POINTs_make_affine");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  sVar2 = 0;
  if (num != 0) {
    do {
      if ((*(long *)group != *(long *)points[sVar2]) ||
         (((*(int *)(group + 0x20) != 0 &&
           (iVar1 = *(int *)(points[sVar2] + 8), *(int *)(group + 0x20) != iVar1)) && (iVar1 != 0)))
         ) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x41d,"EC_POINTs_make_affine");
        ERR_set_error(0x10,0x65,0);
        return 0;
      }
      sVar2 = sVar2 + 1;
    } while (num != sVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x004e4d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}

