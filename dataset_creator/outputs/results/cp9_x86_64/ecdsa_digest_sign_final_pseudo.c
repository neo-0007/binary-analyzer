
undefined8 ecdsa_digest_sign_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  if ((((param_1 == 0) || (iVar1 == 0)) || (*(EVP_MD_CTX **)(param_1 + 0x178) == (EVP_MD_CTX *)0x0))
     || ((param_2 != 0 &&
         (iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x178),local_78,&local_7c),
         iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    uVar2 = ecdsa_sign(param_1,param_2,param_3,param_4,local_78,local_7c);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

