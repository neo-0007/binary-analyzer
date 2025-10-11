
int EC_POINT_add(EC_GROUP *group,EC_POINT *r,EC_POINT *a,EC_POINT *b,BN_CTX *ctx)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)group;
  if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3ae,"EC_POINT_add");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (lVar1 == *(long *)r) {
      iVar2 = *(int *)(group + 0x20);
      if (iVar2 == 0) {
        if ((lVar1 == *(long *)a) && (lVar1 == *(long *)b)) goto LAB_004e428b;
      }
      else if (((*(int *)(r + 8) == 0) || (iVar2 == *(int *)(r + 8))) &&
              ((lVar1 == *(long *)a &&
               ((((iVar2 == *(int *)(a + 8) || (*(int *)(a + 8) == 0)) && (lVar1 == *(long *)b)) &&
                ((*(int *)(b + 8) == 0 || (iVar2 == *(int *)(b + 8))))))))) {
LAB_004e428b:
                    /* WARNING: Could not recover jumptable at 0x004e428f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(lVar1 + 0xa0))();
        return iVar2;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x3b3,"EC_POINT_add");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

