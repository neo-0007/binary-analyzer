
undefined4 ossl_ec_group_set_params(EC_GROUP *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_28;
  point_conversion_form_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = -1;
  local_24 = 0xffffffff;
  lVar3 = OSSL_PARAM_locate_const(param_2,"point-format");
  if (lVar3 != 0) {
    iVar1 = ossl_ec_pt_format_param2id(lVar3,&local_24);
    if (iVar1 != 0) {
      EC_GROUP_set_point_conversion_form(param_1,local_24);
      goto LAB_004e54c6;
    }
    ERR_new();
    uVar5 = 0x5e5;
LAB_004e5549:
    uVar2 = 0;
    ERR_set_debug("../crypto/ec/ec_lib.c",uVar5,"ossl_ec_group_set_params");
    ERR_set_error(0x10,0x68,0);
    goto LAB_004e5568;
  }
LAB_004e54c6:
  lVar3 = OSSL_PARAM_locate_const(param_2,"encoding");
  if (lVar3 != 0) {
    iVar1 = ossl_ec_encoding_param2id(lVar3,&local_28);
    if (iVar1 == 0) {
      ERR_new();
      uVar5 = 0x5ee;
      goto LAB_004e5549;
    }
    EC_GROUP_set_asn1_flag(param_1,local_28);
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"seed");
  if (lVar3 == 0) {
LAB_004e552a:
    uVar2 = 1;
  }
  else {
    if (*(int *)(lVar3 + 8) == 5) {
      sVar4 = EC_GROUP_set_seed(param_1,*(uchar **)(lVar3 + 0x10),*(size_t *)(lVar3 + 0x18));
      if (sVar4 != 0) goto LAB_004e552a;
    }
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/ec/ec_lib.c",0x5f9,"ossl_ec_group_set_params");
    ERR_set_error(0x10,0xaf,0);
  }
LAB_004e5568:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

