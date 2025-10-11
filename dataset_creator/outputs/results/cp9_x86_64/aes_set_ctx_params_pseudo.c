
undefined4 aes_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x1d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_0043d1b8;
  lVar3 = OSSL_PARAM_locate_const(param_2,"mackey");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 5) {
      (**(code **)(lVar6 + 0x18))
                (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      goto LAB_0043cf95;
    }
    ERR_new();
    uVar7 = 0x67;
    goto LAB_0043d1d1;
  }
LAB_0043cf95:
  lVar3 = OSSL_PARAM_locate_const(param_2,"tls1multi_maxsndfrag");
  if (lVar3 != 0) {
    iVar1 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x1e0);
    if (iVar1 != 0) goto LAB_0043cfc3;
    ERR_new();
    uVar7 = 0x72;
LAB_0043d261:
    uVar2 = 0;
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar7,
                  "aes_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    goto LAB_0043d1f3;
  }
LAB_0043cfc3:
  lVar3 = OSSL_PARAM_locate_const(param_2,"tls1multi_aad");
  if (lVar3 == 0) {
LAB_0043d03e:
    lVar3 = OSSL_PARAM_locate_const(param_2,"tls1multi_enc");
    if (lVar3 == 0) {
LAB_0043d0f8:
      lVar3 = OSSL_PARAM_locate_const(param_2,"tlsaad");
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) != 5) {
          ERR_new();
          uVar7 = 0xb1;
          goto LAB_0043d1d1;
        }
        iVar1 = (**(code **)(lVar6 + 0x20))
                          (param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18));
        if (iVar1 < 1) goto LAB_0043d2b8;
      }
      lVar6 = OSSL_PARAM_locate_const(param_2,"keylen");
      if (lVar6 == 0) {
LAB_0043d164:
        lVar6 = OSSL_PARAM_locate_const(param_2,"tls-version");
        if (lVar6 != 0) {
          iVar1 = OSSL_PARAM_get_uint(lVar6,param_1 + 0x40);
          if (iVar1 == 0) {
            ERR_new();
            uVar7 = 0xc9;
            goto LAB_0043d261;
          }
          if (*(int *)(param_1 + 0x40) - 0x300U < 2) {
            if (*(ulong *)(param_1 + 0x68) < 0x10) {
              ERR_new();
              ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xcf,
                            "aes_set_ctx_params");
              ERR_set_error(0x39,0xc0103,0);
              goto LAB_0043d2b8;
            }
            *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) - 0x10;
          }
        }
LAB_0043d1b8:
        uVar2 = 1;
      }
      else {
        iVar1 = OSSL_PARAM_get_size_t(lVar6,&local_70);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xbd,
                        "aes_set_ctx_params");
          ERR_set_error(0x39,0x67,0);
        }
        else {
          if (*(long *)(param_1 + 0x18) == local_70) goto LAB_0043d164;
          ERR_new();
          ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",0xc1,
                        "aes_set_ctx_params");
          ERR_set_error(0x39,0x69,0);
        }
LAB_0043d2b8:
        uVar2 = 0;
      }
      goto LAB_0043d1f3;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"tls1multi_interleave");
    lVar5 = OSSL_PARAM_locate_const(param_2,"tls1multi_encin");
    if ((((*(int *)(lVar3 + 8) == 5) && (lVar5 != 0)) && (*(int *)(lVar5 + 8) == 5)) && (lVar4 != 0)
       ) {
      iVar1 = OSSL_PARAM_get_uint(lVar4,local_50);
      if (iVar1 != 0) {
        local_68 = *(undefined8 *)(lVar3 + 0x10);
        local_60 = *(undefined8 *)(lVar5 + 0x10);
        local_58 = *(undefined8 *)(lVar5 + 0x18);
        iVar1 = (**(code **)(lVar6 + 0x38))(param_1,&local_68);
        if (iVar1 < 1) goto LAB_0043d2b8;
        goto LAB_0043d0f8;
      }
    }
    ERR_new();
    uVar7 = 0xa3;
  }
  else {
    lVar4 = OSSL_PARAM_locate_const(param_2,"tls1multi_interleave");
    if ((*(int *)(lVar3 + 8) == 5) && (lVar4 != 0)) {
      iVar1 = OSSL_PARAM_get_uint(lVar4,local_50);
      if (iVar1 != 0) {
        local_60 = *(undefined8 *)(lVar3 + 0x10);
        local_58 = *(undefined8 *)(lVar3 + 0x18);
        iVar1 = (**(code **)(lVar6 + 0x30))(param_1,&local_68);
        if (0 < iVar1) goto LAB_0043d03e;
        goto LAB_0043d2b8;
      }
    }
    ERR_new();
    uVar7 = 0x85;
  }
LAB_0043d1d1:
  uVar2 = 0;
  ERR_set_debug("../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",uVar7,
                "aes_set_ctx_params");
  ERR_set_error(0x39,0x67,0);
LAB_0043d1f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

