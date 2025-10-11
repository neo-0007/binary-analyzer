
bool kmac_init(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  EVP_MD *type;
  undefined8 uVar2;
  long lVar3;
  size_t cnt;
  void *d;
  ulong uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  char *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  ctx = *(EVP_MD_CTX **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = kmac_set_ctx_params(param_1,param_4);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x11c,"kmac_init");
          ERR_set_error(0x39,0x72,0);
          bVar5 = false;
          goto LAB_0047567d;
        }
      }
      else {
        iVar1 = kmac_setkey(param_1,param_2,param_3);
        if (iVar1 == 0) goto LAB_0047567b;
      }
      type = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x10);
      iVar1 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(param_1 + 8),type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        uVar2 = ossl_prov_digest_md(param_1 + 0x10);
        iVar1 = EVP_MD_get_block_size(uVar2);
        if (-1 < iVar1) {
          uVar4 = (ulong)iVar1;
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 == 0) {
            local_90 = 5;
            local_98 = "custom";
            local_88 = &DAT_008343a2;
            local_80 = 0;
            local_78 = 0xffffffffffffffff;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            kmac_set_ctx_params(param_1,&local_98);
            lVar3 = *(long *)(param_1 + 0x38);
          }
          cnt = (((uVar4 - 1) + (long)((int)lVar3 + 8)) / uVar4) * uVar4;
          d = CRYPTO_malloc((int)cnt,"../providers/implementations/macs/kmac_prov.c",0x138);
          if (d == (void *)0x0) {
            ERR_new();
            ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x13a,"kmac_init");
            ERR_set_error(0x39,0xc0100,0);
            bVar5 = false;
            goto LAB_0047567d;
          }
          iVar1 = bytepad(d,0,&kmac_string,6,param_1 + 0x194,*(undefined8 *)(param_1 + 0x38),uVar4);
          if (iVar1 == 0) {
LAB_0047577f:
            bVar5 = false;
          }
          else {
            iVar1 = EVP_DigestUpdate(ctx,d,cnt);
            if (iVar1 == 0) goto LAB_0047577f;
            iVar1 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x44),*(size_t *)(param_1 + 0x30));
            bVar5 = iVar1 != 0;
          }
          CRYPTO_free(d);
          goto LAB_0047567d;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x125,"kmac_init");
        ERR_set_error(0x39,0xa6,0);
      }
    }
  }
LAB_0047567b:
  bVar5 = false;
LAB_0047567d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

