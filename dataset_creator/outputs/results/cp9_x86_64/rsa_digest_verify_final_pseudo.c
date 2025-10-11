
undefined8 rsa_digest_verify_final(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (param_1 != 0)) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
    if (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0) {
      iVar2 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x28),local_78,&local_7c);
      uVar1 = local_7c;
      if (iVar2 != 0) {
        iVar2 = ossl_prov_is_running();
        if (iVar2 != 0) {
          uVar3 = rsa_verify_part_0(param_1,param_2,param_3,local_78,uVar1);
          goto LAB_0047f044;
        }
      }
    }
  }
  uVar3 = 0;
LAB_0047f044:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

