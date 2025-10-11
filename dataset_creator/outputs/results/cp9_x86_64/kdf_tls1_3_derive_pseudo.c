
ulong kdf_tls1_3_derive(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       )

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  EVP_MD *type;
  ulong uVar8;
  undefined8 uVar9;
  EVP_MD_CTX *ctx;
  size_t len;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  size_t local_108;
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = ossl_prov_is_running();
  if (iVar6 != 0) {
    iVar6 = kdf_tls1_3_set_ctx_params(param_1,param_4);
    if (iVar6 != 0) {
      type = (EVP_MD *)ossl_prov_digest_md(param_1 + 2);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/hkdf.c",0x289,"kdf_tls1_3_derive");
        ERR_set_error(0x39,0x81,0);
        uVar8 = 0;
        goto LAB_00464e2f;
      }
      if (*(int *)(param_1 + 1) == 1) {
        uVar1 = param_1[0xc];
        puVar10 = (undefined1 *)param_1[7];
        lVar2 = param_1[5];
        uVar3 = param_1[0xb];
        uVar4 = param_1[10];
        uVar5 = param_1[9];
        local_108 = param_1[8];
        uVar9 = ossl_prov_ctx_get0_libctx(*param_1);
        iVar6 = EVP_MD_get_size(type);
        len = (size_t)iVar6;
        uVar8 = 0;
        if (iVar6 < 1) goto LAB_00464e2f;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = default_zeros_0;
          local_108 = len;
        }
        if (lVar2 == 0) {
          uVar8 = HKDF_Extract(uVar9,type,default_zeros_0,0,puVar10,local_108,param_2,param_3);
          goto LAB_00464e2f;
        }
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx != (EVP_MD_CTX *)0x0) {
          iVar6 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if (0 < iVar6) {
            iVar6 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
            if (0 < iVar6) {
              EVP_MD_CTX_free(ctx);
              iVar6 = prov_tls13_hkdf_expand
                                (type,lVar2,len,uVar5,uVar4,uVar3,uVar1,local_88,len,local_c8,len);
              if (iVar6 != 0) {
                uVar7 = HKDF_Extract(uVar9,type,local_c8,len,puVar10,local_108,param_2,param_3);
                OPENSSL_cleanse(local_c8,len);
                uVar8 = (ulong)uVar7;
                goto LAB_00464e2f;
              }
              goto LAB_00464e2d;
            }
          }
        }
        EVP_MD_CTX_free(ctx);
      }
      else if (*(int *)(param_1 + 1) == 2) {
        uVar8 = prov_tls13_hkdf_expand
                          (type,param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                           param_1[0xc],param_1[0xd],param_1[0xe],param_2,param_3);
        goto LAB_00464e2f;
      }
    }
  }
LAB_00464e2d:
  uVar8 = 0;
LAB_00464e2f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

