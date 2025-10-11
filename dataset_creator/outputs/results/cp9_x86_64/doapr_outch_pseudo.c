
undefined8 doapr_outch(long *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined1 param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __n;
  int num;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    __n = *param_3;
    uVar1 = *param_4;
    if (uVar1 < __n) {
      return 0;
    }
  }
  else {
    __n = *param_3;
    uVar1 = *param_4;
    if (uVar1 < __n) {
      return 0;
    }
    if (param_2 == (long *)0x0) {
      if (uVar1 <= __n) {
        return 1;
      }
      goto LAB_004a9c88;
    }
  }
  if (__n == uVar1) {
    if (0x7ffffbff < __n) {
      return 0;
    }
    pvVar2 = (void *)*param_2;
    *param_4 = __n + 0x400;
    num = (int)(__n + 0x400);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = CRYPTO_malloc(num,"../crypto/bio/bio_print.c",0x352);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) {
        ERR_new();
        uVar4 = 0x353;
        goto LAB_004a9dd2;
      }
      __n = *param_3;
      if (__n != 0) {
        if ((void *)*param_1 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar2,(void *)*param_1,__n);
        __n = *param_3;
      }
      *param_1 = 0;
      if (*param_4 <= __n) {
        return 1;
      }
      goto LAB_004a9da8;
    }
    pvVar2 = CRYPTO_realloc(pvVar2,num,"../crypto/bio/bio_print.c",0x35f);
    if (pvVar2 == (void *)0x0) {
      ERR_new();
      uVar4 = 0x361;
LAB_004a9dd2:
      ERR_set_debug("../crypto/bio/bio_print.c",uVar4,"doapr_outch");
      ERR_set_error(0x20,0xc0100,0);
      return 0;
    }
    *param_2 = (long)pvVar2;
    __n = *param_3;
    uVar1 = *param_4;
  }
  if (uVar1 <= __n) {
    return 1;
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
LAB_004a9c88:
    *param_3 = __n + 1;
    *(undefined1 *)(lVar3 + __n) = param_5;
    return 1;
  }
LAB_004a9da8:
  lVar3 = *param_2;
  *param_3 = __n + 1;
  *(undefined1 *)(lVar3 + __n) = param_5;
  return 1;
}

