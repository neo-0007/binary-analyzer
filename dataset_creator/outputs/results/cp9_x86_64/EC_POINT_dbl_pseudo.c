
int EC_POINT_dbl(EC_GROUP *group,EC_POINT *r,EC_POINT *a,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 0xa8) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3bd,"EC_POINT_dbl");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)r) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if (lVar1 == *(long *)a) goto LAB_004e4378;
      }
      else if ((((iVar2 == *(int *)(r + 8)) || (*(int *)(r + 8) == 0)) && (lVar1 == *(long *)a)) &&
              ((iVar2 == *(int *)(a + 8) || (*(int *)(a + 8) == 0)))) {
LAB_004e4378:
                    /* WARNING: Could not recover jumptable at 0x004e437c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 0xa8))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3c1,"EC_POINT_dbl");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

