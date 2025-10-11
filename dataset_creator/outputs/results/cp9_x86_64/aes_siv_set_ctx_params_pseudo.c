
undefined4 aes_siv_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  if (param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"tag");
    if (lVar2 == 0) {
LAB_004430d5:
      lVar2 = OSSL_PARAM_locate_const(param_2,"speed");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint(lVar2,&local_2c);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0xdf,
                        "aes_siv_set_ctx_params");
          ERR_set_error(0x39,0x67,0);
          uVar3 = 0;
          goto LAB_00443156;
        }
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1,local_2c);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0xe9,
                        "aes_siv_set_ctx_params");
          ERR_set_error(0x39,0x67,0);
        }
        else if (*(long *)(param_1 + 8) == local_28) goto LAB_00443150;
        uVar3 = 0;
        goto LAB_00443156;
      }
    }
    else if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if (*(int *)(lVar2 + 8) == 5) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x18))
                          (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 != 0) goto LAB_004430d5;
      }
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0xd8,
                    "aes_siv_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      goto LAB_00443156;
    }
  }
LAB_00443150:
  uVar3 = 1;
LAB_00443156:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

