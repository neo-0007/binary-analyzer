
bool ossl_ffc_params_simple_validate
               (undefined8 param_1,long param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  byte local_9c [4];
  undefined8 local_98 [7];
  undefined4 local_60;
  undefined4 local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  puVar3 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 0) {
    if (param_4 == (byte *)0x0) {
      param_4 = local_9c;
    }
    iVar1 = ossl_ffc_params_copy(local_98);
    if (iVar1 != 0) {
      local_58 = 2;
      local_60 = 0xffffffff;
      if ((*(byte *)(param_2 + 0x40) & 4) == 0) {
        iVar1 = ossl_ffc_params_FIPS186_4_validate();
      }
      else {
        iVar1 = ossl_ffc_params_FIPS186_2_validate(param_1,local_98,param_3,param_4,0);
      }
      if ((iVar1 == 0) && ((*param_4 & 8) != 0)) {
        ERR_new();
        ERR_set_debug("../crypto/ffc/ffc_params_validate.c",0x7d,"ossl_ffc_params_simple_validate");
        ERR_set_error(5,0x78,0);
      }
      ossl_ffc_params_cleanup(local_98);
      bVar4 = iVar1 != 0;
      goto LAB_00536fd9;
    }
  }
  bVar4 = false;
LAB_00536fd9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

