
int kdf_pbkdf2_derive(undefined8 *param_1,void *param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uchar *data;
  void *key;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  EVP_MD *md;
  HMAC_CTX *ctx;
  HMAC_CTX *dctx;
  size_t sVar8;
  ulong uVar9;
  size_t __n;
  long in_FS_OFFSET;
  int local_ac;
  uint local_8c;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_prov_is_running();
  if ((iVar5 != 0) &&
     ((uVar7 = ossl_prov_ctx_get0_libctx(*param_1), param_4 == 0 ||
      ((iVar5 = ossl_prov_digest_load_from_params(param_1 + 6,param_4,uVar7), iVar5 != 0 &&
       (iVar5 = kdf_pbkdf2_set_ctx_params_part_0(param_1,param_4), iVar5 != 0)))))) {
    if (param_1[1] == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x9a,"kdf_pbkdf2_derive");
      ERR_set_error(0x39,0x82,0);
      iVar5 = 0;
      goto LAB_00466dbf;
    }
    if (param_1[3] == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x9f,"kdf_pbkdf2_derive");
      ERR_set_error(0x39,0x83,0);
      iVar5 = 0;
      goto LAB_00466dbf;
    }
    md = (EVP_MD *)ossl_prov_digest_md(param_1 + 6);
    uVar7 = param_1[4];
    uVar2 = param_1[2];
    iVar5 = *(int *)(param_1 + 9);
    uVar3 = param_1[5];
    data = (uchar *)param_1[3];
    key = (void *)param_1[1];
    iVar6 = EVP_MD_get_size(md);
    if (0 < iVar6) {
      if (0xfffffffe < param_3 / (ulong)(long)iVar6) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x127,"pbkdf2_derive");
        ERR_set_error(0x39,0x69,0);
        iVar5 = 0;
        goto LAB_00466dbf;
      }
      if (iVar5 != 0) {
        if (param_3 * 8 < 0x70) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x12d,"pbkdf2_derive");
          ERR_set_error(0x39,0xab,0);
          iVar5 = 0;
          goto LAB_00466dbf;
        }
        if ((int)uVar7 < 0x10) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x131,"pbkdf2_derive");
          ERR_set_error(0x39,0x70,0);
          goto LAB_00466dbd;
        }
        if (uVar3 < 1000) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/pbkdf2.c",0x135,"pbkdf2_derive");
          ERR_set_error(0x39,0x7b,0);
          iVar5 = 0;
          goto LAB_00466dbf;
        }
      }
      ctx = (HMAC_CTX *)HMAC_CTX_new();
      if (ctx != (HMAC_CTX *)0x0) {
        iVar5 = HMAC_Init_ex(ctx,key,(int)uVar2,md,(ENGINE *)0x0);
        if ((iVar5 == 0) || (dctx = (HMAC_CTX *)HMAC_CTX_new(), dctx == (HMAC_CTX *)0x0)) {
          dctx = (HMAC_CTX *)0x0;
          iVar5 = 0;
        }
        else {
          local_ac = (int)param_3;
          if (local_ac != 0) {
            uVar4 = 1;
            do {
              iVar1 = iVar6;
              if (local_ac <= iVar6) {
                iVar1 = local_ac;
              }
              __n = (size_t)iVar1;
              local_8c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18;
              iVar5 = HMAC_CTX_copy(dctx,ctx);
              if (((iVar5 == 0) || (iVar5 = HMAC_Update(dctx,data,(long)(int)uVar7), iVar5 == 0)) ||
                 (iVar5 = HMAC_Update(dctx,(uchar *)&local_8c,4), iVar5 == 0)) goto LAB_00466f0d;
              iVar5 = HMAC_Final(dctx,local_88,(uint *)0x0);
              if (iVar5 == 0) goto LAB_00466f0d;
              memcpy(param_2,local_88,__n);
              if (1 < uVar3) {
                uVar9 = 1;
                do {
                  iVar5 = HMAC_CTX_copy(dctx,ctx);
                  if (((iVar5 == 0) || (iVar5 = HMAC_Update(dctx,local_88,(long)iVar6), iVar5 == 0))
                     || (iVar5 = HMAC_Final(dctx,local_88,(uint *)0x0), iVar5 == 0))
                  goto LAB_00466f0d;
                  if (0 < iVar1) {
                    sVar8 = 0;
                    do {
                      *(byte *)((long)param_2 + sVar8) =
                           *(byte *)((long)param_2 + sVar8) ^ local_88[sVar8];
                      sVar8 = sVar8 + 1;
                    } while (sVar8 != __n);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar3 != uVar9);
              }
              uVar4 = uVar4 + 1;
              param_2 = (void *)((long)param_2 + __n);
              local_ac = local_ac - iVar1;
            } while (local_ac != 0);
          }
          iVar5 = 1;
        }
LAB_00466f0d:
        HMAC_CTX_free(dctx);
        HMAC_CTX_free(ctx);
        goto LAB_00466dbf;
      }
    }
  }
LAB_00466dbd:
  iVar5 = 0;
LAB_00466dbf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar5;
}

