
int EVP_MD_CTX_ctrl(long param_1,int param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/digest.c",0x32f,"EVP_MD_CTX_ctrl");
    ERR_set_error(6,0xc0102,0);
    iVar2 = 0;
    goto LAB_00518bbb;
  }
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x70) != 0)) {
    if (param_2 == 3) {
      local_70 = (long)param_3;
      OSSL_PARAM_construct_size_t(&local_a8,"xoflen",&local_70);
      local_48._0_8_ = local_88;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      local_58._8_8_ = uStack_90;
      local_58._0_8_ = local_98;
    }
    else {
      if (param_2 != 0x1d) {
        if (param_2 != 2) goto LAB_00518bb9;
        if (param_3 == 0) {
          param_3 = 9999;
        }
        OSSL_PARAM_construct_utf8_string(&local_a8,"micalg",param_4,(long)param_3);
        local_68._8_8_ = uStack_a0;
        local_68._0_8_ = local_a8;
        local_48._0_8_ = local_88;
        local_58._8_8_ = uStack_90;
        local_58._0_8_ = local_98;
        iVar2 = EVP_MD_CTX_get_params(param_1,local_68);
        goto LAB_00518c2b;
      }
      OSSL_PARAM_construct_octet_string(&local_a8,"ssl3-ms",param_4,(long)param_3);
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      local_48._0_8_ = local_88;
      local_58._8_8_ = uStack_90;
      local_58._0_8_ = local_98;
    }
    iVar2 = EVP_MD_CTX_set_params(param_1,local_68);
  }
  else {
    if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/digest.c",0x352,"EVP_MD_CTX_ctrl");
      ERR_set_error(6,0x84,0);
LAB_00518bb9:
      iVar2 = 0;
      goto LAB_00518bbb;
    }
    iVar2 = (**(code **)(lVar1 + 0x50))();
  }
LAB_00518c2b:
  if (iVar2 < 0) {
    iVar2 = 0;
  }
LAB_00518bbb:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

