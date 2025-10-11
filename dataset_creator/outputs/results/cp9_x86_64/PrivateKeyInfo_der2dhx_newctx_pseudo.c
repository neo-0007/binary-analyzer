
void PrivateKeyInfo_der2dhx_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x18,"../providers/implementations/encode_decode/decode_der2key.c",0x7e);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = PrivateKeyInfo_dhx_desc;
  }
  return;
}

