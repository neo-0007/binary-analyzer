
int sk_reserve(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int num;
  
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(void **)(param_1 + 2) == (void *)0x0) {
    lVar2 = CRYPTO_zalloc((long)param_2 << 3,"../crypto/stack/stack.c",0xc0);
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/stack/stack.c",0xc1,"sk_reserve");
      ERR_set_error(0xf,0xc0100,0);
      return 0;
    }
  }
  else {
    iVar3 = param_1[5];
    if (param_3 == 0) {
      if (param_2 <= iVar3) {
        return 1;
      }
      do {
        if (0x55555554 < iVar3) {
          num = -8;
          param_2 = 0x7fffffff;
          goto LAB_00434311;
        }
        iVar3 = iVar3 + iVar3 / 2;
      } while (iVar3 < param_2);
      num = iVar3 * 8;
      param_2 = iVar3;
    }
    else {
      if (param_2 == iVar3) {
        return param_3;
      }
      num = param_2 << 3;
    }
LAB_00434311:
    pvVar1 = CRYPTO_realloc(*(void **)(param_1 + 2),num,"../crypto/stack/stack.c",0xd2);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  param_1[5] = param_2;
  return 1;
}

