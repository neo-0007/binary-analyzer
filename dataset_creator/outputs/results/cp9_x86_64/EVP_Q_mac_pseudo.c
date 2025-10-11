
void * EVP_Q_mac(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_RCX;
  char *pcVar5;
  undefined8 in_R8;
  long in_R9;
  void *pvVar6;
  void *pvVar7;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  void *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_e0 = in_stack_00000020;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_MAC_fetch();
  local_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (in_stack_00000030 != (undefined8 *)0x0) {
    *in_stack_00000030 = 0;
  }
  if (lVar2 == 0) {
    pvVar7 = (void *)0x0;
    goto LAB_0052da69;
  }
  if (in_RCX == 0) {
LAB_0052da26:
    if (in_R9 == 0 && in_stack_00000008 == 0) {
      in_R9 = in_stack_00000010;
    }
    pvVar7 = (void *)0x0;
    pvVar6 = (void *)0x0;
    lVar4 = EVP_MAC_CTX_new(lVar2);
    if (lVar4 != 0) {
      iVar1 = EVP_MAC_CTX_set_params(lVar4,local_98);
      if (iVar1 != 0) {
        iVar1 = EVP_MAC_CTX_set_params(lVar4,in_R8);
        if (iVar1 != 0) {
          iVar1 = EVP_MAC_init(lVar4,in_R9,in_stack_00000008,in_R8);
          pvVar7 = pvVar6;
          if (iVar1 != 0) {
            iVar1 = EVP_MAC_update(lVar4,in_stack_00000010,in_stack_00000018);
            if (iVar1 != 0) {
              iVar1 = EVP_MAC_final(lVar4,in_stack_00000020,&local_a0,in_stack_00000028);
              if (iVar1 != 0) {
                if (in_stack_00000020 == (void *)0x0) {
                  local_e0 = CRYPTO_malloc((int)local_a0,"../crypto/evp/mac_lib.c",0x120);
                  pvVar7 = local_e0;
                  if (local_e0 != (void *)0x0) {
                    iVar1 = EVP_MAC_final(lVar4,local_e0,0,local_a0);
                    if (iVar1 != 0) goto LAB_0052db0c;
                    pvVar7 = (void *)0x0;
                    CRYPTO_free(local_e0);
                  }
                }
                else {
LAB_0052db0c:
                  pvVar7 = local_e0;
                  if (in_stack_00000030 != (undefined8 *)0x0) {
                    *in_stack_00000030 = local_a0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = EVP_MAC_settable_ctx_params(lVar2);
    lVar4 = OSSL_PARAM_locate_const(uVar3,"digest");
    pcVar5 = "digest";
    if (lVar4 != 0) {
LAB_0052d9f7:
      OSSL_PARAM_construct_utf8_string(&local_d8,pcVar5,in_RCX,0);
      local_78._0_8_ = local_b8;
      local_98._8_8_ = uStack_d0;
      local_98._0_8_ = local_d8;
      local_88._8_8_ = uStack_c0;
      local_88._0_8_ = local_c8;
      goto LAB_0052da26;
    }
    lVar4 = OSSL_PARAM_locate_const(uVar3,"cipher");
    pcVar5 = "cipher";
    if (lVar4 != 0) goto LAB_0052d9f7;
    ERR_new();
    pvVar7 = (void *)0x0;
    ERR_set_debug("../crypto/evp/mac_lib.c",0x10f,__func___0);
    ERR_set_error(6,0x80106,0);
    lVar4 = 0;
  }
  EVP_MAC_CTX_free(lVar4);
  EVP_MAC_free(lVar2);
LAB_0052da69:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

