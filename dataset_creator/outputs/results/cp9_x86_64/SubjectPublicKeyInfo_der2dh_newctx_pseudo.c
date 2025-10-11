
void SubjectPublicKeyInfo_der2dh_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x18,"../providers/implementations/encode_decode/decode_der2key.c",0x7e);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = SubjectPublicKeyInfo_dh_desc;
  }
  return;
}

