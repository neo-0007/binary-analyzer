
int PEM_write_bio(BIO *bp,char *name,char *hdr,uchar *data,long len)

{
  int iVar1;
  int iVar2;
  int extraout_EAX;
  EVP_ENCODE_CTX *ctx;
  size_t sVar3;
  uchar *out;
  long lVar4;
  undefined8 uVar5;
  int len_00;
  long in_FS_OFFSET;
  int local_6c;
  int *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
  if (ctx == (EVP_ENCODE_CTX *)0x0) {
LAB_00540627:
    uVar5 = 0xc0100;
    out = (uchar *)0x0;
  }
  else {
    EVP_EncodeInit(ctx);
    sVar3 = strlen(name);
    iVar1 = BIO_write(bp,"-----BEGIN ",0xb);
    if (iVar1 == 0xb) {
      len_00 = (int)sVar3;
      iVar1 = BIO_write(bp,name,len_00);
      if ((iVar1 == len_00) && (iVar1 = BIO_write(bp,"-----\n",6), iVar1 == 6)) {
        sVar3 = strlen(hdr);
        iVar1 = (int)sVar3;
        if ((iVar1 < 1) ||
           ((iVar2 = BIO_write(bp,hdr,iVar1), iVar2 == iVar1 &&
            (iVar1 = BIO_write(bp,&DAT_0081a1ca,1), iVar1 == 1)))) {
          out = (uchar *)CRYPTO_malloc(0x2000,"../crypto/pem/pem_lib.c",0x27c);
          if (out == (uchar *)0x0) goto LAB_00540627;
          if (len < 1) {
            local_6c = 0;
          }
          else {
            iVar1 = 0;
            local_6c = 0;
            do {
              lVar4 = 0x1400;
              if (len < 0x1401) {
                lVar4 = len;
              }
              EVP_EncodeUpdate(ctx,out,&local_44,data + iVar1,(int)lVar4);
              if ((extraout_EAX == 0) ||
                 ((local_44 != 0 && (iVar2 = BIO_write(bp,out,local_44), iVar2 != local_44)))) {
                uVar5 = 0x80007;
                goto LAB_00540456;
              }
              len = len - lVar4;
              local_6c = local_6c + local_44;
              iVar1 = iVar1 + (int)lVar4;
            } while (0 < len);
          }
          local_58 = &local_44;
          EVP_EncodeFinal(ctx,out,local_58);
          if ((local_44 < 1) || (iVar1 = BIO_write(bp,out,local_44), iVar1 == local_44)) {
            uVar5 = 0x80007;
            iVar1 = BIO_write(bp,"-----END ",9);
            if ((((iVar1 == 9) && (iVar1 = BIO_write(bp,name,len_00), iVar1 == len_00)) &&
                (iVar1 = BIO_write(bp,"-----\n",6), iVar1 == 6)) &&
               (local_6c = local_6c + local_44, local_6c != 0)) goto LAB_00540483;
          }
          else {
            uVar5 = 0x80007;
          }
          goto LAB_00540456;
        }
      }
    }
    uVar5 = 0x80007;
    out = (uchar *)0x0;
  }
LAB_00540456:
  ERR_new();
  local_6c = 0;
  ERR_set_debug("../crypto/pem/pem_lib.c",0x298,"PEM_write_bio");
  ERR_set_error(9,uVar5,0);
LAB_00540483:
  EVP_ENCODE_CTX_free(ctx);
  CRYPTO_clear_free(out,0x2000,"../crypto/pem/pem_lib.c",0x29a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_6c;
}

