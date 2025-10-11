
undefined8 dsa_digest_verify_final(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x168) != (EVP_MD_CTX *)0x0))
  {
    iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x168),local_78,&local_7c);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
      uVar2 = dsa_verify(param_1,param_2,param_3,local_78,local_7c);
      goto LAB_0047ac92;
    }
  }
  uVar2 = 0;
LAB_0047ac92:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

