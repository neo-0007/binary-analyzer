
undefined8
evp_pkey_ctx_store_cached_data
          (uint *param_1,int param_2,uint param_3,int param_4,char *param_5,undefined8 param_6,
          long param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_4 == -1) {
    if ((param_5 == (char *)0x0) ||
       ((iVar1 = strcmp(param_5,"distid"), iVar1 != 0 &&
        (iVar1 = strcmp(param_5,"hexdistid"), iVar1 != 0)))) goto LAB_004114e0;
  }
  else if (param_4 != 0xf) {
LAB_004114e0:
    ERR_new();
    uVar5 = 0x5a8;
    goto LAB_004114f1;
  }
  if (param_2 != -1) {
    iVar1 = evp_pkey_ctx_state(param_1);
    if (iVar1 < 2) {
      if (-1 < iVar1) {
        if (*(int **)(param_1 + 0x1e) == (int *)0x0) {
          ERR_new();
          uVar5 = 0x5bc;
LAB_004114f1:
          ERR_set_debug("../crypto/evp/pmeth_lib.c",uVar5,"evp_pkey_ctx_store_cached_data");
          ERR_set_error(6,0x93,0);
          return 0xfffffffe;
        }
        iVar1 = EVP_PKEY_type(**(int **)(param_1 + 0x1e));
        iVar2 = EVP_PKEY_type(param_2);
        if (iVar1 != iVar2) {
          ERR_new();
          uVar5 = 0x5c0;
          goto LAB_00411430;
        }
      }
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 8) == 0) {
        ERR_new();
        uVar5 = 0x5b0;
        goto LAB_004114f1;
      }
      uVar5 = evp_pkey_type2name(param_2);
      iVar1 = EVP_KEYMGMT_is_a(*(undefined8 *)(param_1 + 8),uVar5);
      if (iVar1 == 0) {
        ERR_new();
        uVar5 = 0x5b5;
        goto LAB_00411430;
      }
    }
  }
  if ((param_3 != 0xffffffff) && ((param_3 & *param_1) == 0)) {
    ERR_new();
    uVar5 = 0x5c7;
LAB_00411430:
    ERR_set_debug("../crypto/evp/pmeth_lib.c",uVar5,"evp_pkey_ctx_store_cached_data");
    ERR_set_error(6,0x94,0);
    return 0xffffffff;
  }
  CRYPTO_free(*(void **)(param_1 + 0x10));
  CRYPTO_free(*(void **)(param_1 + 0xe));
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_5 != (char *)0x0) {
    pcVar3 = CRYPTO_strdup(param_5,"../crypto/evp/pmeth_lib.c",0x5cf);
    *(char **)(param_1 + 0xe) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      uVar5 = 0x5d1;
      goto LAB_00411569;
    }
  }
  if (param_7 != 0) {
    lVar4 = CRYPTO_memdup(param_6,param_7,"../crypto/evp/pmeth_lib.c",0x5d6);
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 == 0) {
      ERR_new();
      uVar5 = 0x5d8;
LAB_00411569:
      ERR_set_debug("../crypto/evp/pmeth_lib.c",uVar5,"evp_pkey_ctx_store_cached_data");
      ERR_set_error(6,0xc0100,0);
      return 0;
    }
  }
  *(byte *)(param_1 + 0x14) = (byte)param_1[0x14] | 1;
  *(long *)(param_1 + 0x12) = param_7;
  return 1;
}

