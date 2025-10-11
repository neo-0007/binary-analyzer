
undefined8
get_rsa_payload_coefficient(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  long local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = RSA_get0_iqmp();
LAB_00516037:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_005160d5;
    }
  }
  else {
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (param_4 - 1U < (ulong)(long)iVar1) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar2,auStack_d8,local_88);
      if (iVar1 != 0) {
        lVar3 = local_88[param_4 - 1U];
        goto LAB_00516037;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_005160d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

