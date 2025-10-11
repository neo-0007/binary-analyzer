
uint md_gets(undefined8 param_1,uchar *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  EVP_MD_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)BIO_get_data();
  uVar3 = EVP_MD_CTX_get0_md(ctx);
  iVar1 = EVP_MD_get_size(uVar3);
  uVar2 = 0;
  if ((iVar1 <= param_3) &&
     (iVar1 = EVP_DigestFinal_ex(ctx,param_2,&local_24), uVar2 = local_24, iVar1 < 1)) {
    uVar2 = 0xffffffff;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

