
undefined8 get_rsa_payload_factor(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long alStack_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = RSA_get0_p(uVar2);
LAB_005163e8:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_00516459;
    }
  }
  else {
    if (param_4 == 1) {
      lVar3 = RSA_get0_q(uVar2);
      goto LAB_005163e8;
    }
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (param_4 - 2U < (ulong)(long)iVar1) {
      iVar1 = RSA_get0_multi_prime_factors(uVar2,alStack_88);
      if (iVar1 != 0) {
        lVar3 = alStack_88[param_4 - 2U];
        goto LAB_005163e8;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00516459:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

