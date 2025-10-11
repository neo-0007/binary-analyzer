
undefined8 dh_plain_derive(long param_1,uchar *param_2,ulong *param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  if ((*(DH **)(param_1 + 8) == (DH *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/exchange/dh_exch.c",0x98,"dh_plain_derive");
    ERR_set_error(0x39,0x80,0);
    uVar2 = 0;
  }
  else {
    iVar1 = DH_size(*(DH **)(param_1 + 8));
    if (param_2 == (uchar *)0x0) {
      *param_3 = (long)iVar1;
      uVar2 = 1;
    }
    else if (param_4 < (ulong)(long)iVar1) {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/dh_exch.c",0xa2,"dh_plain_derive");
      ERR_set_error(0x39,0x6a,0);
      uVar2 = 0;
    }
    else {
      DH_get0_key(*(undefined8 *)(param_1 + 0x10),&local_38,0);
      if (param_5 == 0) {
        iVar1 = DH_compute_key(param_2,local_38,*(DH **)(param_1 + 8));
      }
      else {
        iVar1 = DH_compute_key_padded(param_2,local_38,*(DH **)(param_1 + 8));
      }
      uVar2 = 0;
      if (0 < iVar1) {
        *param_3 = (long)iVar1;
        uVar2 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

