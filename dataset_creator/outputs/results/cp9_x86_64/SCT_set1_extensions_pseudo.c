
undefined8 SCT_set1_extensions(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 1;
  }
  else {
    lVar2 = CRYPTO_memdup(param_2,param_3,"../crypto/ct/ct_sct.c",0x9f);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x38) = param_3;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_sct.c",0xa1,"SCT_set1_extensions");
    ERR_set_error(0x32,0xc0100,0);
    uVar1 = 0;
  }
  return uVar1;
}

