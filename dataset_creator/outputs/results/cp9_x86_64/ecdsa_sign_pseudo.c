
undefined8
ecdsa_sign(long param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ECDSA_size(*(EC_KEY **)(param_1 + 0x10));
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    if (param_2 == (uchar *)0x0) {
      *param_3 = (long)iVar1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if ((ulong)(long)iVar1 <= param_4) {
        if ((param_6 == *(long *)(param_1 + 0x160)) || (*(long *)(param_1 + 0x160) == 0)) {
          iVar1 = ECDSA_sign_ex(0,param_5,(int)param_6,param_2,&local_44,
                                *(BIGNUM **)(param_1 + 0x180),*(BIGNUM **)(param_1 + 0x188),
                                *(EC_KEY **)(param_1 + 0x10));
          if (0 < iVar1) {
            *param_3 = (ulong)local_44;
            uVar2 = 1;
            goto LAB_0047bb80;
          }
        }
        uVar2 = 0;
      }
    }
  }
LAB_0047bb80:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

