
undefined8
hash_df_isra_0(ulong param_1,long param_2,uchar *param_3,char param_4,void *param_5,size_t param_6,
              void *param_7,size_t param_8,void *param_9,size_t param_10)

{
  uchar *md;
  EVP_MD_CTX *ctx;
  uint uVar1;
  int iVar2;
  size_t cnt;
  EVP_MD *type;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_46;
  uint local_45;
  char local_41;
  long local_40;
  
  ctx = *(EVP_MD_CTX **)(param_2 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (int)param_1 * 8;
  local_46 = '\x01';
  local_45 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | (int)param_1 << 0x1b;
  cnt = 5;
  if (param_4 != -1) {
    cnt = 6;
    local_41 = param_4;
  }
  while( true ) {
    type = (EVP_MD *)ossl_prov_digest_md(param_2);
    iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    if ((((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,&local_46,cnt), iVar2 == 0)) ||
        (iVar2 = EVP_DigestUpdate(ctx,param_5,param_6), iVar2 == 0)) ||
       (((param_7 != (void *)0x0 && (iVar2 = EVP_DigestUpdate(ctx,param_7,param_8), iVar2 == 0)) ||
        ((param_9 != (void *)0x0 && (iVar2 = EVP_DigestUpdate(ctx,param_9,param_10), iVar2 == 0)))))
       ) goto LAB_00478000;
    if (param_1 < *(ulong *)(param_2 + 0x20)) break;
    iVar2 = EVP_DigestFinal(ctx,param_3,(uint *)0x0);
    if (iVar2 == 0) goto LAB_00478000;
    param_1 = param_1 - *(long *)(param_2 + 0x20);
    if (param_1 == 0) {
      uVar3 = 1;
      goto LAB_00478002;
    }
    local_46 = local_46 + '\x01';
    param_3 = param_3 + *(long *)(param_2 + 0x20);
  }
  md = (uchar *)(param_2 + 0x106);
  iVar2 = EVP_DigestFinal(ctx,md,(uint *)0x0);
  if (iVar2 != 0) {
    memcpy(param_3,md,param_1);
    OPENSSL_cleanse(md,*(size_t *)(param_2 + 0x20));
    uVar3 = 1;
    goto LAB_00478002;
  }
LAB_00478000:
  uVar3 = 0;
LAB_00478002:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

