
undefined4 chacha20_set_ctx_params_part_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OSSL_PARAM_locate_const(param_2,"keylen");
  if (lVar3 == 0) {
LAB_00447afb:
    lVar3 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar3,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0x7e;
        goto LAB_00447be1;
      }
      if (local_28 != 0x10) {
        ERR_new();
        uVar2 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20.c",0x82,
                      "chacha20_set_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        goto LAB_00447b32;
      }
    }
    uVar2 = 1;
  }
  else {
    iVar1 = OSSL_PARAM_get_size_t(lVar3,&local_28);
    if (iVar1 != 0) {
      if (local_28 != 0x20) {
        ERR_new();
        uVar2 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20.c",0x77,
                      "chacha20_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        goto LAB_00447b32;
      }
      goto LAB_00447afb;
    }
    ERR_new();
    uVar4 = 0x73;
LAB_00447be1:
    uVar2 = 0;
    ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20.c",uVar4,
                  "chacha20_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
  }
LAB_00447b32:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

