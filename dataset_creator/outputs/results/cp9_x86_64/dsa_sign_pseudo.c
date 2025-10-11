
undefined8
dsa_sign(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  uVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = DSA_size(*(DSA **)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x160) != 0) {
    iVar2 = EVP_MD_get_size();
    uVar4 = (ulong)iVar2;
  }
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
      uVar3 = 1;
      goto LAB_0047a739;
    }
    if (((ulong)(long)iVar1 <= param_4) && ((uVar4 == 0 || (param_6 == uVar4)))) {
      iVar1 = ossl_dsa_sign_int(0,param_5,param_6 & 0xffffffff,param_2,&local_44,
                                *(undefined8 *)(param_1 + 0x10));
      if (0 < iVar1) {
        *param_3 = (ulong)local_44;
        uVar3 = 1;
        goto LAB_0047a739;
      }
    }
  }
  uVar3 = 0;
LAB_0047a739:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

