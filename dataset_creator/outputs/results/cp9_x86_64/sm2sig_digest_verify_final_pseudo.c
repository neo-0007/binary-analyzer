
undefined8 sm2sig_digest_verify_final(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x168) != 0)) &&
      (iVar1 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x160)), iVar1 < 0x41)) &&
     (((*(byte *)(param_1 + 0x18) & 1) == 0 ||
      (iVar1 = sm2sig_compute_z_digest_part_0(param_1), iVar1 != 0)))) {
    iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x168),local_78,&local_7c);
    if (iVar1 != 0) {
      if (((ulong)local_7c == *(ulong *)(param_1 + 0x170)) || (*(ulong *)(param_1 + 0x170) == 0)) {
        uVar2 = ossl_sm2_internal_verify
                          (local_78,(ulong)local_7c,param_2,param_3,*(undefined8 *)(param_1 + 0x10))
        ;
        goto LAB_004802c1;
      }
    }
  }
  uVar2 = 0;
LAB_004802c1:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

