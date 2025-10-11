
int EC_POINT_cmp(EC_GROUP *group,EC_POINT *a,EC_POINT *b,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3fa,"EC_POINT_cmp");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)a) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if (lVar1 == *(long *)b) goto LAB_004e4908;
      }
      else if ((((iVar2 == *(int *)(a + 8)) || (*(int *)(a + 8) == 0)) && (lVar1 == *(long *)b)) &&
              ((iVar2 == *(int *)(b + 8) || (*(int *)(b + 8) == 0)))) {
LAB_004e4908:
                    /* WARNING: Could not recover jumptable at 0x004e490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 200))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3fe,"EC_POINT_cmp");
    ERR_set_error(0x10,0x65,0);
  }
  return -1;
}

