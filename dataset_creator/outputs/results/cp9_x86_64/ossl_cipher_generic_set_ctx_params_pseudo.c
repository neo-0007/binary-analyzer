
undefined4 ossl_cipher_generic_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"padding");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe | local_24 != 0;
        goto LAB_004840fc;
      }
      ERR_new();
      uVar3 = 0x25c;
LAB_00484201:
      uVar4 = 0;
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar3,
                    "ossl_cipher_generic_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      goto LAB_004841cf;
    }
LAB_004840fc:
    lVar2 = OSSL_PARAM_locate_const(param_2,"use-bits");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x266;
        goto LAB_00484201;
      }
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xbf | (local_24 != 0) << 6;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x40);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x26e;
        goto LAB_00484201;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-mac-size");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x58);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x275;
        goto LAB_00484201;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"num");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,&local_24);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x27e;
        goto LAB_00484201;
      }
      *(int *)(param_1 + 0x70) = local_24;
    }
  }
  uVar4 = 1;
LAB_004841cf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

