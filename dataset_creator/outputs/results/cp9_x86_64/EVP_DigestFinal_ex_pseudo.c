
int EVP_DigestFinal_ex(EVP_MD_CTX *ctx,uchar *md,uint *s)

{
  uint uVar1;
  int iVar2;
  ENGINE *pEVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (ctx->engine != (ENGINE *)0x0) {
    uVar1 = EVP_MD_get_size();
    if (-1 < (int)uVar1) {
      pEVar3 = ctx->engine;
      if (*(long *)(pEVar3 + 0x70) == 0) {
        if (0x40 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: mdsize <= EVP_MAX_MD_SIZE","../crypto/evp/digest.c",0x1cd,
                      (long)(int)uVar1);
        }
        iVar2 = (**(code **)(pEVar3 + 0x30))(ctx,md);
        if (s != (uint *)0x0) {
          *s = uVar1;
        }
        pEVar3 = ctx->engine;
        if (*(code **)(pEVar3 + 0x40) != (code *)0x0) {
          (**(code **)(pEVar3 + 0x40))(ctx);
          EVP_MD_CTX_set_flags(ctx,2);
          pEVar3 = ctx->engine;
        }
        OPENSSL_cleanse(ctx->pctx,(long)*(int *)(pEVar3 + 0x4c));
        goto LAB_00518543;
      }
      if (*(code **)(pEVar3 + 0xa0) == (code *)0x0) {
        ERR_new();
        uVar4 = 0x1ba;
      }
      else {
        iVar2 = (**(code **)(pEVar3 + 0xa0))(ctx[1].engine,md,&local_38);
        if (s == (uint *)0x0) goto LAB_00518543;
        if (local_38 >> 0x20 == 0) {
          *s = (uint)local_38;
          goto LAB_00518543;
        }
        ERR_new();
        uVar4 = 0x1c4;
      }
      ERR_set_debug("../crypto/evp/digest.c",uVar4,"EVP_DigestFinal_ex");
      ERR_set_error(6,0xbc,0);
    }
  }
  iVar2 = 0;
LAB_00518543:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

