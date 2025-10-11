
int HKDF_Expand(EVP_MD *param_1,void *param_2,int param_3,uchar *param_4,size_t param_5,long param_6
               ,ulong param_7)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  HMAC_CTX *ctx;
  size_t __n;
  size_t len;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uchar local_89;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MD_get_size();
  if (0 < iVar1) {
    len = (size_t)iVar1;
    uVar4 = (ulong)(param_7 % len == 0);
    uVar5 = param_7 / len + 1;
    uVar3 = uVar5 - uVar4;
    if (((uVar3 < 0x100) && (param_6 != 0)) &&
       (ctx = (HMAC_CTX *)HMAC_CTX_new(), ctx != (HMAC_CTX *)0x0)) {
      iVar1 = HMAC_Init_ex(ctx,param_2,param_3,param_1,(ENGINE *)0x0);
      if (iVar1 != 0) {
        if (uVar5 == uVar4) {
LAB_004646b0:
          iVar1 = 1;
        }
        else {
          local_89 = '\x01';
          uVar5 = 1;
          uVar4 = 0;
          while (((iVar1 = HMAC_Update(ctx,param_4,param_5), iVar1 != 0 &&
                  (iVar1 = HMAC_Update(ctx,&local_89,1), iVar1 != 0)) &&
                 (iVar1 = HMAC_Final(ctx,local_88,(uint *)0x0), iVar1 != 0))) {
            __n = len;
            uVar6 = len + uVar4;
            if (param_7 < len + uVar4) {
              __n = param_7 - uVar4;
              uVar6 = param_7;
            }
            memcpy((void *)(param_6 + uVar4),local_88,__n);
            uVar2 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar2;
            if (uVar3 < uVar5) goto LAB_004646b0;
            local_89 = (uchar)uVar2;
            uVar4 = uVar6;
            if ((1 < uVar2) &&
               ((iVar1 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0), iVar1 == 0 ||
                (iVar1 = HMAC_Update(ctx,local_88,len), iVar1 == 0)))) break;
          }
          iVar1 = 0;
        }
      }
      OPENSSL_cleanse(local_88,0x40);
      HMAC_CTX_free(ctx);
      goto LAB_00464682;
    }
  }
  iVar1 = 0;
LAB_00464682:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

