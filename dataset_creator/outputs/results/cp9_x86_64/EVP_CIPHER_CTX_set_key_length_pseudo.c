
int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x,int keylen)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (x->cipher[1].do_cipher == (_func_1090 *)0x0) {
    if ((x->cipher->flags & 0x80) != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar1 = EVP_CIPHER_CTX_ctrl(x,1,keylen,(void *)0x0);
        return iVar1;
      }
      goto LAB_0040b369;
    }
    iVar1 = EVP_CIPHER_CTX_get_key_length();
    uVar2 = 1;
    if (iVar1 != keylen) {
      if ((keylen < 1) || ((x->cipher->flags & 8) == 0)) {
        ERR_new();
        uVar3 = 0x41d;
        goto LAB_0040b2ec;
      }
      x->key_len = keylen;
    }
  }
  else {
    local_80 = (long)keylen;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    iVar1 = EVP_CIPHER_CTX_get_key_length();
    uVar2 = 1;
    if (iVar1 != keylen) {
      uVar3 = EVP_CIPHER_settable_ctx_params(x->cipher);
      lVar4 = OSSL_PARAM_locate_const(uVar3,"keylen");
      if (lVar4 == 0) {
        ERR_new();
        uVar3 = 0x405;
LAB_0040b2ec:
        ERR_set_debug("../crypto/evp/evp_enc.c",uVar3,"EVP_CIPHER_CTX_set_key_length");
        ERR_set_error(6,0x82,0);
        uVar2 = 0;
      }
      else {
        OSSL_PARAM_construct_size_t(&local_b8,"keylen",&local_80);
        local_78._8_8_ = uStack_b0;
        local_78._0_8_ = local_b8;
        local_58._0_8_ = local_98;
        local_68._8_8_ = uStack_a0;
        local_68._0_8_ = local_a8;
        iVar1 = evp_do_ciph_ctx_setparams(x->cipher,x[1].cipher,local_78);
        uVar2 = (uint)(0 < iVar1);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_0040b369:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

