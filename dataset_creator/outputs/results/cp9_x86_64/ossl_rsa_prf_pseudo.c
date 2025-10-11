
undefined8
ossl_rsa_prf(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,void *param_6,
            ushort param_7)

{
  int iVar1;
  int iVar2;
  HMAC_CTX *ctx;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  long in_FS_OFFSET;
  EVP_MD *local_80;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 * 8 != (uint)param_7) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x12a,"ossl_rsa_prf");
    uVar4 = 0xffffffff;
    ERR_set_error(4,0xc0103,0);
    goto LAB_0055bd72;
  }
  local_6a = param_7 << 8 | param_7 >> 8;
  ctx = (HMAC_CTX *)HMAC_CTX_new();
  if (ctx == (HMAC_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x133,"ossl_rsa_prf");
    uVar4 = 0xffffffff;
    ERR_set_error(4,0xc0103,0);
    local_80 = (EVP_MD *)0x0;
  }
  else {
    local_80 = (EVP_MD *)EVP_MD_fetch(param_1,"sha256",0);
    if (local_80 == (EVP_MD *)0x0) {
      ERR_new();
      uVar3 = 0x140;
    }
    else {
      iVar1 = HMAC_Init_ex(ctx,param_6,0x20,local_80,(ENGINE *)0x0);
      if (0 < iVar1) {
        if (0 < param_3) {
          uVar5 = 0;
          iVar1 = 0;
          do {
            iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
            if (iVar2 < 1) {
              ERR_new();
              uVar3 = 0x14b;
              goto LAB_0055bdb1;
            }
            local_6c = uVar5 << 8 | uVar5 >> 8;
            iVar2 = HMAC_Update(ctx,(uchar *)&local_6c,2);
            if (iVar2 < 1) {
              ERR_new();
              uVar3 = 0x153;
              goto LAB_0055bdb1;
            }
            iVar2 = HMAC_Update(ctx,param_4,(long)param_5);
            if (iVar2 < 1) {
              ERR_new();
              uVar3 = 0x157;
              goto LAB_0055bdb1;
            }
            iVar2 = HMAC_Update(ctx,(uchar *)&local_6a,2);
            if (iVar2 < 1) {
              ERR_new();
              uVar3 = 0x15b;
              goto LAB_0055bdb1;
            }
            local_70 = 0x20;
            if (iVar1 + 0x1f < param_3) {
              iVar2 = HMAC_Final(ctx,param_2,&local_70);
              if (iVar2 < 1) {
                ERR_new();
                uVar3 = 0x16d;
                goto LAB_0055bdb1;
              }
            }
            else {
              iVar2 = HMAC_Final(ctx,local_68,&local_70);
              if (iVar2 < 1) {
                ERR_new();
                uVar3 = 0x167;
                goto LAB_0055bdb1;
              }
              memcpy(param_2,local_68,(long)(param_3 - iVar1));
            }
            iVar1 = iVar1 + 0x20;
            uVar5 = uVar5 + 1;
            param_2 = param_2 + 0x20;
          } while (iVar1 != (param_3 - 1U & 0xffffffe0) + 0x20);
        }
        uVar4 = 0;
        goto LAB_0055bd60;
      }
      ERR_new();
      uVar3 = 0x145;
    }
LAB_0055bdb1:
    uVar4 = 0xffffffff;
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",uVar3,"ossl_rsa_prf");
    ERR_set_error(4,0xc0103,0);
  }
LAB_0055bd60:
  HMAC_CTX_free(ctx);
  EVP_MD_free(local_80);
LAB_0055bd72:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

