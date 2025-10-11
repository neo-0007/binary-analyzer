
int kdf_pkcs12_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int num;
  uint uVar5;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  uchar *md;
  void *ptr;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  void *pvVar11;
  size_t cnt;
  ulong cnt_00;
  void *local_a8;
  ulong local_a0;
  void *local_98;
  void *local_90;
  ulong local_68;
  
  iVar4 = ossl_prov_is_running();
  if ((iVar4 != 0) && (iVar4 = kdf_pkcs12_set_ctx_params(param_1,param_4), iVar4 != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pkcs12kdf.c",0xd2,"kdf_pkcs12_derive");
      ERR_set_error(0x39,0x82,0);
    }
    else {
      if (*(long *)(param_1 + 0x30) != 0) {
        type = (EVP_MD *)ossl_prov_digest_md(param_1 + 8);
        lVar1 = *(long *)(param_1 + 0x30);
        uVar2 = *(ulong *)(param_1 + 0x40);
        uVar5 = *(uint *)(param_1 + 0x48);
        uVar9 = *(ulong *)(param_1 + 0x38);
        uVar10 = *(ulong *)(param_1 + 0x28);
        lVar3 = *(long *)(param_1 + 0x20);
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx == (EVP_MD_CTX *)0x0) {
          md = (uchar *)0x0;
          ptr = (void *)0x0;
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/pkcs12kdf.c",0x3e,"pkcs12kdf_derive");
          ERR_set_error(0x39,0xc0100,0);
          iVar4 = 0;
          local_90 = (void *)0x0;
          local_98 = (void *)0x0;
        }
        else {
          iVar4 = EVP_MD_get_block_size(type);
          num = EVP_MD_get_size(type);
          if ((num < 1) || (iVar4 < 1)) {
            md = (uchar *)0x0;
            ptr = (void *)0x0;
            ERR_new();
            ERR_set_debug("../providers/implementations/kdfs/pkcs12kdf.c",0x44,"pkcs12kdf_derive");
            ERR_set_error(0x39,0xda,0);
            iVar4 = 0;
            local_90 = (void *)0x0;
            local_98 = (void *)0x0;
          }
          else {
            cnt_00 = (ulong)iVar4;
            cnt = (size_t)num;
            local_98 = CRYPTO_malloc(iVar4,"../providers/implementations/kdfs/pkcs12kdf.c",0x49);
            md = (uchar *)CRYPTO_malloc(num,"../providers/implementations/kdfs/pkcs12kdf.c",0x4a);
            ptr = CRYPTO_malloc(iVar4 + 1,"../providers/implementations/kdfs/pkcs12kdf.c",0x4b);
            uVar6 = (((uVar9 - 1) + cnt_00) / cnt_00) * cnt_00;
            if (uVar10 == 0) {
              uVar7 = 0;
              local_68 = uVar6;
            }
            else {
              uVar7 = (((uVar10 - 1) + cnt_00) / cnt_00) * cnt_00;
              local_68 = uVar6 + uVar7;
            }
            local_90 = CRYPTO_malloc((int)local_68,"../providers/implementations/kdfs/pkcs12kdf.c",
                                     0x52);
            if ((((local_98 == (void *)0x0) || (md == (uchar *)0x0)) || (ptr == (void *)0x0)) ||
               (local_90 == (void *)0x0)) {
              ERR_new();
              ERR_set_debug("../providers/implementations/kdfs/pkcs12kdf.c",0x54,"pkcs12kdf_derive")
              ;
              ERR_set_error(0x39,0xc0100,0);
              iVar4 = 0;
            }
            else {
              __n = 1;
              if (iVar4 != 0) {
                __n = cnt_00;
              }
              memset(local_98,uVar5 & 0xff,__n);
              pvVar11 = local_90;
              if (uVar6 != 0) {
                uVar8 = 0;
                do {
                  *(undefined1 *)((long)local_90 + uVar8) = *(undefined1 *)(lVar1 + uVar8 % uVar9);
                  uVar8 = uVar8 + 1;
                } while (uVar6 != uVar8);
                pvVar11 = (void *)(uVar6 + (long)local_90);
              }
              uVar9 = 0;
              local_a8 = param_2;
              local_a0 = param_3;
              if (uVar7 != 0) {
                do {
                  *(undefined1 *)((long)pvVar11 + uVar9) = *(undefined1 *)(lVar3 + uVar9 % uVar10);
                  uVar9 = uVar9 + 1;
                } while (uVar7 != uVar9);
              }
              while( true ) {
                iVar4 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
                if (((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(ctx,local_98,cnt_00), iVar4 == 0)) ||
                   ((iVar4 = EVP_DigestUpdate(ctx,local_90,local_68), iVar4 == 0 ||
                    (iVar4 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0), iVar4 == 0))))
                goto LAB_004677eb;
                uVar9 = 1;
                if (1 < uVar2) {
                  do {
                    iVar4 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
                    if (((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(ctx,md,cnt), iVar4 == 0)) ||
                       (iVar4 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0), iVar4 == 0))
                    goto LAB_004677eb;
                    uVar9 = uVar9 + 1;
                  } while (uVar2 != uVar9);
                }
                uVar9 = local_a0;
                if (cnt <= local_a0) {
                  uVar9 = cnt;
                }
                memcpy(local_a8,md,uVar9);
                if (local_a0 <= cnt) break;
                local_a0 = local_a0 - cnt;
                uVar9 = 0;
                local_a8 = (void *)((long)local_a8 + cnt);
                do {
                  *(uchar *)((long)ptr + uVar9) = md[uVar9 % cnt];
                  uVar9 = uVar9 + 1;
                } while (uVar9 < cnt_00);
                uVar9 = 0;
                pvVar11 = local_90;
                if (local_68 != 0) {
                  do {
                    uVar5 = 1;
                    uVar10 = cnt_00;
                    do {
                      uVar10 = uVar10 - 1;
                      uVar5 = uVar5 + (uint)*(byte *)((long)pvVar11 + uVar10) +
                                      (uint)*(byte *)((long)ptr + uVar10);
                      *(char *)((long)pvVar11 + uVar10) = (char)uVar5;
                      uVar5 = uVar5 >> 8;
                    } while (uVar10 != 0);
                    uVar9 = uVar9 + cnt_00;
                    pvVar11 = (void *)((long)pvVar11 + cnt_00);
                  } while (uVar9 < local_68);
                }
              }
              iVar4 = 1;
            }
          }
        }
LAB_004677eb:
        CRYPTO_free(md);
        CRYPTO_free(ptr);
        CRYPTO_free(local_98);
        CRYPTO_free(local_90);
        EVP_MD_CTX_free(ctx);
        return iVar4;
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pkcs12kdf.c",0xd7,"kdf_pkcs12_derive");
      ERR_set_error(0x39,0x83,0);
    }
  }
  return 0;
}

