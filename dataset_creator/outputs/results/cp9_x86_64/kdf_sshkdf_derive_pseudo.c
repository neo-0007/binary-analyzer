
undefined4 kdf_sshkdf_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  void *d;
  void *d_00;
  void *d_01;
  size_t cnt;
  size_t cnt_00;
  size_t cnt_01;
  int iVar2;
  undefined4 uVar3;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong __n;
  long in_FS_OFFSET;
  uchar *local_b8;
  char local_8d;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (iVar2 = kdf_sshkdf_set_ctx_params(param_1,param_4), iVar2 != 0)) {
    type = (EVP_MD *)ossl_prov_digest_md(param_1 + 8);
    if (type != (EVP_MD *)0x0) {
      d = *(void **)(param_1 + 0x20);
      if (d == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0x71,"kdf_sshkdf_derive");
        ERR_set_error(0x39,0x80,0);
        uVar3 = 0;
        goto LAB_0046909f;
      }
      d_00 = *(void **)(param_1 + 0x30);
      if (d_00 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0x75,"kdf_sshkdf_derive");
        ERR_set_error(0x39,0x87,0);
        uVar3 = 0;
        goto LAB_0046909f;
      }
      d_01 = *(void **)(param_1 + 0x48);
      if (d_01 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0x79,"kdf_sshkdf_derive");
        ERR_set_error(0x39,0x85,0);
        uVar3 = 0;
        goto LAB_0046909f;
      }
      if (*(char *)(param_1 + 0x40) == '\0') {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0x7d,"kdf_sshkdf_derive");
        ERR_set_error(0x39,0x86,0);
        uVar3 = 0;
        goto LAB_0046909f;
      }
      cnt = *(size_t *)(param_1 + 0x50);
      local_8c = 0;
      cnt_00 = *(size_t *)(param_1 + 0x38);
      cnt_01 = *(size_t *)(param_1 + 0x28);
      local_8d = *(char *)(param_1 + 0x40);
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      uVar3 = 0;
      if (ctx == (EVP_MD_CTX *)0x0) goto LAB_0046909f;
      iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if ((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,d,cnt_01), iVar2 == 0)) {
LAB_0046917e:
        uVar3 = 0;
      }
      else {
        iVar2 = EVP_DigestUpdate(ctx,d_00,cnt_00);
        if ((iVar2 == 0) ||
           ((iVar2 = EVP_DigestUpdate(ctx,&local_8d,1), iVar2 == 0 ||
            (iVar2 = EVP_DigestUpdate(ctx,d_01,cnt), iVar2 == 0)))) goto LAB_0046917e;
        iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
        if (iVar2 == 0) goto LAB_0046917e;
        __n = (ulong)local_8c;
        if (param_3 < __n) {
          memcpy(param_2,local_88,param_3);
          uVar3 = 1;
        }
        else {
          memcpy(param_2,local_88,__n);
          while (__n < param_3) {
            iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
            if ((((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,d,cnt_01), iVar2 == 0)) ||
                (iVar2 = EVP_DigestUpdate(ctx,d_00,cnt_00), iVar2 == 0)) ||
               ((iVar2 = EVP_DigestUpdate(ctx,param_2,__n), iVar2 == 0 ||
                (iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c), iVar2 == 0))))
            goto LAB_0046917e;
            uVar1 = __n + local_8c;
            if (param_3 < uVar1) {
              memcpy((void *)((long)param_2 + __n),local_88,param_3 - __n);
              break;
            }
            memcpy((void *)((long)param_2 + __n),local_88,(ulong)local_8c);
            __n = uVar1;
          }
          uVar3 = 1;
        }
      }
      local_b8 = local_88;
      EVP_MD_CTX_free(ctx);
      OPENSSL_cleanse(local_b8,0x40);
      goto LAB_0046909f;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0x6d,"kdf_sshkdf_derive");
    ERR_set_error(0x39,0x81,0);
  }
  uVar3 = 0;
LAB_0046909f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

