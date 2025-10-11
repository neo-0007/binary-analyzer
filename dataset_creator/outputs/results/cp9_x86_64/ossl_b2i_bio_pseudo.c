
undefined8 ossl_b2i_bio(BIO *param_1,undefined4 *param_2)

{
  int iVar1;
  uint num;
  uint uVar2;
  undefined1 *data;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  iVar1 = BIO_read(param_1,local_58,0x10);
  if (iVar1 == 0x10) {
    local_60 = local_58;
    iVar1 = ossl_do_blob_header(&local_60,0x10,local_68,&local_6c,&local_64,param_2);
    uVar4 = 0;
    if (0 < iVar1) {
      num = ossl_blob_length(local_6c,local_64,*param_2);
      if (num < 0x19001) {
        data = (undefined1 *)CRYPTO_malloc(num,"../crypto/pem/pvkfmt.c",0x157);
        if (data == (undefined1 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/pem/pvkfmt.c",0x159,__func___10);
          ERR_set_error(9,0xc0100,0);
        }
        else {
          local_60 = data;
          uVar2 = BIO_read(param_1,data,num);
          if (num == uVar2) {
            if (local_64 == 0) {
              lVar3 = ossl_b2i_RSA_after_header(&local_60,local_6c,*param_2);
            }
            else {
              lVar3 = ossl_b2i_DSA_after_header();
            }
            if (lVar3 == 0) {
              ERR_new();
              ERR_set_debug("../crypto/pem/pvkfmt.c",0x16a,__func___10);
              ERR_set_error(9,0x6e,0);
              uVar4 = 0;
            }
            else {
              uVar4 = 6;
              if ((local_64 != 0) && (uVar4 = 0x74, local_64 != 1)) {
                uVar4 = 0;
              }
              uVar4 = evp_pkey_new0_key(lVar3,uVar4);
            }
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/pem/pvkfmt.c",0x15e,__func___10);
            ERR_set_error(9,0x7b,0);
          }
        }
        CRYPTO_free(data);
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/pem/pvkfmt.c",0x154,__func___10);
        ERR_set_error(9,0x80,0);
      }
    }
  }
  else {
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x14b,__func___10);
    ERR_set_error(9,0x7b,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

