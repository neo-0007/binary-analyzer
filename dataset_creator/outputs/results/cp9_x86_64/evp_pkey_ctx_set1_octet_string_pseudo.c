
int evp_pkey_ctx_set1_octet_string
              (EVP_PKEY_CTX *param_1,int param_2,undefined8 param_3,uint param_4,int param_5,
              void *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
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
  uVar2 = 0;
  if ((param_1 == (EVP_PKEY_CTX *)0x0) || (uVar2 = param_4 & *(uint *)param_1, uVar2 == 0)) {
    ERR_new(param_1,param_3,uVar2);
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x3df,"evp_pkey_ctx_set1_octet_string");
    ERR_set_error(6,0x93,0);
    iVar1 = -2;
  }
  else {
    if (param_2 != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar1 = EVP_PKEY_CTX_ctrl(param_1,-1,param_4,param_5,param_7,param_6);
        return iVar1;
      }
      goto LAB_00413632;
    }
    if (param_7 < 0) {
      ERR_new(param_1,param_3);
      ERR_set_debug("../crypto/evp/pmeth_lib.c",0x3ea,"evp_pkey_ctx_set1_octet_string");
      ERR_set_error(6,0xdd,0);
      iVar1 = 0;
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_a8,param_3,param_6,(long)param_7);
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_00413632:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

