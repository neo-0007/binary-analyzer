
undefined8
pkey_dsa_sign(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = EVP_PKEY_get0_DSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = EVP_MD_get_size();
    uVar4 = 0;
    if ((long)iVar2 != param_5) goto LAB_004cd87c;
  }
  uVar4 = DSA_sign(0,param_4,param_5 & 0xffffffff,param_2,&local_44,uVar3);
  if (0 < (int)uVar4) {
    *param_3 = (ulong)local_44;
    uVar4 = 1;
  }
LAB_004cd87c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

