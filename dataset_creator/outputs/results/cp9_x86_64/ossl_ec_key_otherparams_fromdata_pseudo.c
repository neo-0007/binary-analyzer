
bool ossl_ec_key_otherparams_fromdata(EC_KEY *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint flags;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_28;
  long local_20;
  
  bVar4 = false;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (EC_KEY *)0x0) goto LAB_004df8b8;
  lVar3 = OSSL_PARAM_locate_const(param_2,"use-cofactor-flag");
  if (lVar3 == 0) {
LAB_004df881:
    lVar3 = OSSL_PARAM_locate_const(param_2,"include-public");
    if (lVar3 != 0) {
      local_28 = CONCAT44(local_28._4_4_,1);
      iVar1 = OSSL_PARAM_get_int(lVar3,&local_28);
      if (iVar1 == 0) {
        bVar4 = false;
        goto LAB_004df8b8;
      }
      iVar1 = (point_conversion_form_t)local_28;
      uVar2 = EC_KEY_get_enc_flags(param_1);
      flags = uVar2 | 2;
      if (iVar1 != 0) {
        flags = uVar2 & 0xfffffffd;
      }
      EC_KEY_set_enc_flags(param_1,flags);
    }
    local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    lVar3 = OSSL_PARAM_locate_const(param_2,"point-format");
    if (lVar3 != 0) {
      iVar1 = ossl_ec_pt_format_param2id(lVar3,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_backend.c",0x209,"ec_key_point_format_fromdata");
        ERR_set_error(0x10,0x68,0);
        bVar4 = false;
        goto LAB_004df8b8;
      }
      EC_KEY_set_conv_form(param_1,(point_conversion_form_t)local_28);
    }
    bVar4 = true;
    lVar3 = OSSL_PARAM_locate_const(param_2,"group-check");
    if (lVar3 == 0) goto LAB_004df8b8;
    local_28 = 0;
    if (*(int *)(lVar3 + 8) == 4) {
      local_28 = *(ulong *)(lVar3 + 0x10);
      if (local_28 != 0) {
LAB_004df9ae:
        iVar1 = ossl_ec_set_check_group_type_from_name(param_1,local_28);
        bVar4 = iVar1 != 0;
        goto LAB_004df8b8;
      }
    }
    else if (*(int *)(lVar3 + 8) == 6) {
      iVar1 = OSSL_PARAM_get_utf8_ptr(lVar3,&local_28);
      if (iVar1 != 0) goto LAB_004df9ae;
    }
  }
  else {
    iVar1 = OSSL_PARAM_get_int(lVar3,&local_28);
    if (iVar1 != 0) {
      iVar1 = ossl_ec_set_ecdh_cofactor_mode(param_1,local_28 & 0xffffffff);
      if (iVar1 != 0) goto LAB_004df881;
    }
  }
  bVar4 = false;
LAB_004df8b8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

