
void msblob2rsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x18,"../providers/implementations/encode_decode/decode_msblob2key.c",0x42)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = mstype2rsa_desc;
  }
  return;
}

