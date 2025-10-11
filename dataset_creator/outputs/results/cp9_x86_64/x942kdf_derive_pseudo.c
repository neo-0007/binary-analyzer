
undefined4 x942kdf_derive(long param_1,uchar *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong cnt;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  EVP_MD *type;
  void *d;
  void *pvVar16;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  ulong uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  int local_fc;
  char *local_d8;
  ulong local_d0;
  undefined1 local_c8 [64];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = ossl_prov_is_running();
  if ((iVar14 == 0) || (iVar14 = x942kdf_set_ctx_params(param_1,param_4), iVar14 == 0)) {
LAB_0046b59d:
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  if ((*(int *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x19d,"x942kdf_derive");
    ERR_set_error(0x39,0xc6,0);
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((((*(long *)(param_1 + 0x40) != 0 || (*(long *)(param_1 + 0x48) != 0)) ||
       (*(long *)(param_1 + 0x50) != 0)) || (*(long *)(param_1 + 0x58) != 0)))) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1a9,"x942kdf_derive");
    ERR_set_error(0x39,0x73,0);
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1ad,"x942kdf_derive");
    ERR_set_error(0x39,0x84,0);
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  type = (EVP_MD *)ossl_prov_digest_md(param_1 + 8);
  if (type == (EVP_MD *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1b2,"x942kdf_derive");
    ERR_set_error(0x39,0x81,0);
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  lVar1 = *(long *)(param_1 + 0x88);
  if ((lVar1 == 0) || (lVar2 = *(long *)(param_1 + 0x90), lVar2 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1b6,"x942kdf_derive");
    ERR_set_error(0x39,0x90,0);
    uVar15 = 0;
    goto LAB_0046b59f;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x60);
  if ((lVar3 != 0) && (0x3fffffff < uVar4)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1be,"x942kdf_derive");
    ERR_set_error(0x39,200,0);
    goto LAB_0046b59d;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x98) == 0) {
    local_fc = 0;
LAB_0046b755:
    local_d0 = 0;
    local_d8 = (char *)0x0;
    iVar14 = der_encode_sharedinfo(local_c8,0,0);
    if ((iVar14 != 0) && (iVar14 = WPACKET_get_total_written(local_c8,&local_d0), iVar14 != 0)) {
      WPACKET_cleanup(local_c8);
      d = (void *)CRYPTO_zalloc(local_d0,"../providers/implementations/kdfs/x942kdf.c",0xe4);
      if (((d != (void *)0x0) &&
          (((iVar14 = der_encode_sharedinfo
                                (local_c8,d,local_d0,lVar1,lVar2,uVar6,uVar12,lVar3,uVar4,uVar11,
                                 uVar10,uVar9,uVar8,uVar7,uVar5,local_fc,&local_d8), iVar14 != 0 &&
            (pvVar16 = (void *)WPACKET_get_curr(local_c8), uVar4 = local_d0, pcVar13 = local_d8,
            d == pvVar16)) && (local_d8 != (char *)0x0)))) &&
         ((*local_d8 == '\x04' && (local_d8[1] == '\x04')))) {
        WPACKET_cleanup(local_c8);
        pvVar16 = *(void **)(param_1 + 0x20);
        cnt = *(ulong *)(param_1 + 0x28);
        if ((cnt < 0x40000001) && ((uVar4 < 0x40000001 && (param_3 - 1 < 0x40000000)))) {
          iVar14 = EVP_MD_get_size(type);
          uVar17 = (ulong)iVar14;
          uVar15 = 0;
          if (0 < iVar14) {
            out = (EVP_MD_CTX *)EVP_MD_CTX_new();
            ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
            if ((out != (EVP_MD_CTX *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) {
              uVar18 = 1;
              iVar14 = EVP_DigestInit(ctx,type);
              if (iVar14 != 0) {
                while( true ) {
                  *(uint *)(pcVar13 + 2) =
                       uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                       uVar18 << 0x18;
                  iVar14 = EVP_MD_CTX_copy_ex(out,ctx);
                  if (((iVar14 == 0) || (iVar14 = EVP_DigestUpdate(out,pvVar16,cnt), iVar14 == 0))
                     || (iVar14 = EVP_DigestUpdate(out,d,uVar4), iVar14 == 0)) goto LAB_0046bafa;
                  if (param_3 < uVar17) break;
                  iVar14 = EVP_DigestFinal_ex(out,param_2,(uint *)0x0);
                  if (iVar14 == 0) goto LAB_0046bafa;
                  param_2 = param_2 + uVar17;
                  param_3 = param_3 - uVar17;
                  if (param_3 == 0) {
                    uVar15 = 1;
                    goto LAB_0046bafc;
                  }
                  uVar18 = uVar18 + 1;
                }
                iVar14 = EVP_DigestFinal_ex(out,local_88,(uint *)0x0);
                if (iVar14 != 0) {
                  memcpy(param_2,local_88,param_3);
                  uVar15 = 1;
                  goto LAB_0046bafc;
                }
              }
            }
LAB_0046bafa:
            uVar15 = 0;
LAB_0046bafc:
            EVP_MD_CTX_free(out);
            EVP_MD_CTX_free(ctx);
            OPENSSL_cleanse(local_88,0x40);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x118,__func___1);
          ERR_set_error(0x39,0x8e,0);
          uVar15 = 0;
        }
        CRYPTO_free(d);
        goto LAB_0046b59f;
      }
    }
    WPACKET_cleanup(local_c8);
  }
  else {
    local_d8 = (char *)0x0;
    local_d0 = 0;
    if (*(ulong *)(param_1 + 0x80) < 0x1000000) {
      local_fc = (int)*(ulong *)(param_1 + 0x80) << 3;
      goto LAB_0046b755;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x1ca,"x942kdf_derive");
  ERR_set_error(0x39,0x8d,0);
  uVar15 = 0;
LAB_0046b59f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar15;
}

