
undefined4 aes_ocb_set_ctx_params_part_0(long param_1,undefined8 param_2)

{
  ulong __n;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"tag");
  if (lVar2 == 0) goto LAB_0044224d;
  if (*(int *)(lVar2 + 8) != 5) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x16f,
                  "aes_ocb_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    goto LAB_00442219;
  }
  __n = *(ulong *)(lVar2 + 0x18);
  if (*(void **)(lVar2 + 0x10) == (void *)0x0) {
    if (__n < 0x11) {
      *(ulong *)(param_1 + 0x368) = __n;
      goto LAB_0044224d;
    }
  }
  else if ((*(ulong *)(param_1 + 0x368) == __n) && ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    memcpy((void *)(param_1 + 0x380),*(void **)(lVar2 + 0x10),__n);
LAB_0044224d:
    lVar2 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_30);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x180,
                      "aes_ocb_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        uVar3 = 0;
        goto LAB_00442219;
      }
      if (0xe < local_30 - 1U) goto LAB_00442216;
      *(long *)(param_1 + 0x20) = local_30;
    }
    uVar3 = 1;
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 == 0) goto LAB_00442219;
    iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x18d,
                    "aes_ocb_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
    }
    else {
      if (*(long *)(param_1 + 0x18) == local_28) goto LAB_00442219;
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x191,
                    "aes_ocb_set_ctx_params");
      ERR_set_error(0x39,0x69,0);
    }
  }
LAB_00442216:
  uVar3 = 0;
LAB_00442219:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

