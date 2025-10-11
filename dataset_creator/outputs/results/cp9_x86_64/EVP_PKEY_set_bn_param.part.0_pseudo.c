
undefined8 EVP_PKEY_set_bn_param_part_0(undefined8 param_1,undefined8 param_2,BIGNUM *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined1 local_838 [2056];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_num_bits(param_3);
  if (iVar2 < 0x4001) {
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    iVar2 = BN_bn2nativepad(param_3,local_838,iVar1 >> 3);
    if (-1 < iVar2) {
      OSSL_PARAM_construct_BN(&local_8b8,param_2,local_838,(long)(iVar1 >> 3));
      local_868 = local_898;
      local_888 = local_8b8;
      uStack_880 = uStack_8b0;
      local_878 = local_8a8;
      uStack_870 = uStack_8a0;
      OSSL_PARAM_construct_end(&local_8b8);
      local_860 = local_8b8;
      uStack_858 = uStack_8b0;
      local_840 = local_898;
      local_850 = local_8a8;
      uStack_848 = uStack_8a0;
      uVar3 = EVP_PKEY_set_params(param_1,&local_888);
      goto LAB_005328cc;
    }
  }
  uVar3 = 0;
LAB_005328cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

