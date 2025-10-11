
undefined4 i2d_DHxparams(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  int *local_88;
  BIGNUM *local_80;
  int local_78 [2];
  long local_70 [3];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 **local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (int *)0x0;
  local_80 = (BIGNUM *)0x0;
  local_90 = 0;
  ossl_ffc_params_get0_pqg(param_1 + 8,local_58,local_50,local_48);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  ossl_ffc_params_get_validate_params(param_1 + 8,local_70,&local_90,&local_94);
  local_78[0] = (int)local_90;
  if (((local_94 == -1) || (local_70[0] == 0)) || (local_78[0] < 1)) {
    ppiVar3 = (int **)0x0;
LAB_004c6b1b:
    local_38 = ppiVar3;
    uVar1 = i2d_int_dhx(local_58,param_2);
  }
  else {
    local_88 = local_78;
    uVar1 = 0;
    local_70[1] = 8;
    local_80 = BN_new();
    if (local_80 == (BIGNUM *)0x0) goto LAB_004c6b38;
    iVar2 = BN_set_word(local_80,(long)local_94);
    ppiVar3 = &local_88;
    if (iVar2 != 0) goto LAB_004c6b1b;
    uVar1 = 0;
  }
  BN_free(local_80);
LAB_004c6b38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

