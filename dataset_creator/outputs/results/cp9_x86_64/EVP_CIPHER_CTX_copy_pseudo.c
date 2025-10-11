
int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out,EVP_CIPHER_CTX *in)

{
  ENGINE *pEVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_var;
  EVP_CIPHER *pEVar4;
  void *pvVar5;
  int in_ECX;
  uchar *extraout_RDX;
  uchar *extraout_RDX_00;
  uchar *iv;
  EVP_CIPHER_CTX *key;
  undefined8 uVar6;
  
  if ((in == (EVP_CIPHER_CTX *)0x0) || (pEVar4 = in->cipher, pEVar4 == (EVP_CIPHER *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x56f,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0x6f,0);
    return 0;
  }
  if (pEVar4[1].do_cipher != (_func_1090 *)0x0) {
    if (pEVar4[2].init == (_func_1089 *)0x0) {
      ERR_new();
      uVar6 = 0x577;
    }
    else {
      key = in;
      EVP_CIPHER_CTX_reset();
      pEVar1 = in->engine;
      out->cipher = in->cipher;
      out->engine = pEVar1;
      iVar3 = in->buf_len;
      uVar6 = *(undefined8 *)in->oiv;
      out->encrypt = in->encrypt;
      out->buf_len = iVar3;
      *(undefined8 *)out->oiv = uVar6;
      uVar6 = *(undefined8 *)in->iv;
      *(undefined8 *)(out->oiv + 8) = *(undefined8 *)(in->oiv + 8);
      *(undefined8 *)out->iv = uVar6;
      uVar6 = *(undefined8 *)in->buf;
      *(undefined8 *)(out->iv + 8) = *(undefined8 *)(in->iv + 8);
      *(undefined8 *)out->buf = uVar6;
      uVar6 = *(undefined8 *)(in->buf + 0x10);
      *(undefined8 *)(out->buf + 8) = *(undefined8 *)(in->buf + 8);
      *(undefined8 *)(out->buf + 0x10) = uVar6;
      iVar3 = in->num;
      uVar2 = *(undefined4 *)&in->field_0x5c;
      *(undefined8 *)(out->buf + 0x18) = *(undefined8 *)(in->buf + 0x18);
      out->num = iVar3;
      *(undefined4 *)&out->field_0x5c = uVar2;
      iVar3 = in->key_len;
      uVar2 = *(undefined4 *)&in->field_0x6c;
      out->app_data = in->app_data;
      out->key_len = iVar3;
      *(undefined4 *)&out->field_0x6c = uVar2;
      pvVar5 = in->cipher_data;
      out->flags = in->flags;
      out->cipher_data = pvVar5;
      iVar3 = in->block_mask;
      uVar6 = *(undefined8 *)in->final;
      out->final_used = in->final_used;
      out->block_mask = iVar3;
      *(undefined8 *)out->final = uVar6;
      uVar6 = *(undefined8 *)(in->final + 0x10);
      *(undefined8 *)(out->final + 8) = *(undefined8 *)(in->final + 8);
      *(undefined8 *)(out->final + 0x10) = uVar6;
      pEVar4 = in[1].cipher;
      *(undefined8 *)(out->final + 0x18) = *(undefined8 *)(in->final + 0x18);
      out[1].cipher = pEVar4;
      pEVar1 = in[1].engine;
      out[1].cipher = (EVP_CIPHER *)0x0;
      out[1].engine = pEVar1;
      iv = extraout_RDX;
      if ((in[1].engine != (ENGINE *)0x0) &&
         (iVar3 = EVP_CIPHER_up_ref(), iv = extraout_RDX_00, iVar3 == 0)) {
        out[1].engine = (ENGINE *)0x0;
        return 0;
      }
      iVar3 = (*in->cipher[2].init)((EVP_CIPHER_CTX *)in[1].cipher,(uchar *)key,iv,in_ECX);
      out[1].cipher = (EVP_CIPHER *)CONCAT44(extraout_var,iVar3);
      if ((EVP_CIPHER *)CONCAT44(extraout_var,iVar3) != (EVP_CIPHER *)0x0) {
        return 1;
      }
      ERR_new();
      uVar6 = 0x587;
    }
    ERR_set_debug("../crypto/evp/evp_enc.c",uVar6,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0xbe,0);
    return 0;
  }
  if ((in->engine != (ENGINE *)0x0) && (iVar3 = ENGINE_init(in->engine), iVar3 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x593,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0x80026,0);
    return 0;
  }
  EVP_CIPHER_CTX_reset(out);
  pEVar1 = in->engine;
  out->cipher = in->cipher;
  out->engine = pEVar1;
  iVar3 = in->buf_len;
  uVar6 = *(undefined8 *)in->oiv;
  out->encrypt = in->encrypt;
  out->buf_len = iVar3;
  *(undefined8 *)out->oiv = uVar6;
  uVar6 = *(undefined8 *)in->iv;
  *(undefined8 *)(out->oiv + 8) = *(undefined8 *)(in->oiv + 8);
  *(undefined8 *)out->iv = uVar6;
  uVar6 = *(undefined8 *)in->buf;
  *(undefined8 *)(out->iv + 8) = *(undefined8 *)(in->iv + 8);
  *(undefined8 *)out->buf = uVar6;
  uVar6 = *(undefined8 *)(in->buf + 0x10);
  *(undefined8 *)(out->buf + 8) = *(undefined8 *)(in->buf + 8);
  *(undefined8 *)(out->buf + 0x10) = uVar6;
  iVar3 = in->num;
  uVar2 = *(undefined4 *)&in->field_0x5c;
  *(undefined8 *)(out->buf + 0x18) = *(undefined8 *)(in->buf + 0x18);
  out->num = iVar3;
  *(undefined4 *)&out->field_0x5c = uVar2;
  iVar3 = in->key_len;
  uVar2 = *(undefined4 *)&in->field_0x6c;
  out->app_data = in->app_data;
  out->key_len = iVar3;
  *(undefined4 *)&out->field_0x6c = uVar2;
  pvVar5 = in->cipher_data;
  out->flags = in->flags;
  out->cipher_data = pvVar5;
  iVar3 = in->block_mask;
  uVar6 = *(undefined8 *)in->final;
  out->final_used = in->final_used;
  out->block_mask = iVar3;
  *(undefined8 *)out->final = uVar6;
  uVar6 = *(undefined8 *)(in->final + 0x10);
  *(undefined8 *)(out->final + 8) = *(undefined8 *)(in->final + 8);
  *(undefined8 *)(out->final + 0x10) = uVar6;
  pEVar4 = in[1].cipher;
  *(undefined8 *)(out->final + 0x18) = *(undefined8 *)(in->final + 0x18);
  out[1].cipher = pEVar4;
  out[1].engine = in[1].engine;
  pEVar4 = in->cipher;
  if ((in->cipher_data != (void *)0x0) && (*(int *)&pEVar4->set_asn1_parameters != 0)) {
    pvVar5 = CRYPTO_malloc(*(int *)&pEVar4->set_asn1_parameters,"../crypto/evp/evp_enc.c",0x59c);
    out->cipher_data = pvVar5;
    if (pvVar5 == (void *)0x0) {
      out->cipher = (EVP_CIPHER *)0x0;
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x59f,"EVP_CIPHER_CTX_copy");
      ERR_set_error(6,0xc0100,0);
      return 0;
    }
    memcpy(pvVar5,in->cipher_data,(long)*(int *)&in->cipher->set_asn1_parameters);
    pEVar4 = in->cipher;
  }
  if (((pEVar4->flags & 0x400) != 0) &&
     (iVar3 = (*(code *)pEVar4->app_data)(in,8,0,out), iVar3 == 0)) {
    out->cipher = (EVP_CIPHER *)0x0;
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x5a8,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0x86,0);
    return 0;
  }
  return 1;
}

