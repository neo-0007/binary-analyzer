
int ecdsa_digest_verify_final(long param_1,uchar *param_2,int param_3)

{
  uint dgstlen;
  int iVar1;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x178) != (EVP_MD_CTX *)0x0))
  {
    iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x178),local_78,&local_7c);
    dgstlen = local_7c;
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      iVar1 = ossl_prov_is_running();
      if ((iVar1 != 0) &&
         (((ulong)dgstlen == *(ulong *)(param_1 + 0x160) || (*(ulong *)(param_1 + 0x160) == 0)))) {
        iVar1 = ECDSA_verify(0,local_78,dgstlen,param_2,param_3,*(EC_KEY **)(param_1 + 0x10));
        goto LAB_0047bd23;
      }
    }
  }
  iVar1 = 0;
LAB_0047bd23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

