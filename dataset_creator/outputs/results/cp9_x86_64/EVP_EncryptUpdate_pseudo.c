
int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/evp/evp_enc.c",0x282,"EVP_EncryptUpdate");
    ERR_set_error(6,0xc0102,0);
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x288,"EVP_EncryptUpdate");
      ERR_set_error(6,0x94,0);
      iVar2 = 0;
    }
    else {
      pEVar1 = ctx->cipher;
      if (pEVar1 == (EVP_CIPHER *)0x0) {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("../crypto/evp/evp_enc.c",0x28d,"EVP_EncryptUpdate");
        ERR_set_error(6,0x83,0);
      }
      else {
        if (pEVar1[1].do_cipher == (_func_1090 *)0x0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar2 = evp_EncryptDecryptUpdate();
            return iVar2;
          }
          goto LAB_004099e6;
        }
        iVar2 = pEVar1->block_size;
        if ((iVar2 < 1) || ((code *)pEVar1[1].app_data == (code *)0x0)) {
          ERR_new();
          uVar3 = 0x297;
LAB_004098d1:
          iVar2 = 0;
          ERR_set_debug("../crypto/evp/evp_enc.c",uVar3,"EVP_EncryptUpdate");
          ERR_set_error(6,0xbd,0);
        }
        else {
          lVar4 = (long)iVar2 + (long)inl;
          if (iVar2 == 1) {
            lVar4 = (long)inl;
          }
          iVar2 = (*(code *)pEVar1[1].app_data)(ctx[1].cipher,out,&local_28,lVar4,in);
          if (iVar2 != 0) {
            if (0x7fffffff < local_28) {
              ERR_new();
              uVar3 = 0x2a1;
              goto LAB_004098d1;
            }
            *outl = (int)local_28;
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_004099e6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

