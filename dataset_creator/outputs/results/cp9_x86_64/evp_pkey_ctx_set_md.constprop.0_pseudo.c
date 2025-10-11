
int evp_pkey_ctx_set_md_constprop_0
              (EVP_PKEY_CTX *param_1,void *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (param_1 == (EVP_PKEY_CTX *)0x0) {
LAB_00413b38:
    ERR_new(param_2,uVar3);
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x3b0,"evp_pkey_ctx_set_md");
    ERR_set_error(6,0x93,0);
    iVar1 = -2;
  }
  else {
    uVar3 = param_4 & *(uint *)param_1;
    if (uVar3 == 0) goto LAB_00413b38;
    if (param_3 != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar1 = EVP_PKEY_CTX_ctrl(param_1,-1,param_4,param_5,0,param_2);
        return iVar1;
      }
      goto LAB_00413b72;
    }
    puVar2 = &DAT_008343a2;
    if (param_2 != (void *)0x0) {
      puVar2 = (undefined1 *)EVP_MD_get0_name(param_2,uVar3,&DAT_008343a2);
    }
    OSSL_PARAM_construct_utf8_string(&local_a8,"digest",puVar2,0);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    iVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_00413b72:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

