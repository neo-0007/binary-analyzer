
void pem2der_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(8,"../providers/implementations/encode_decode/decode_pem2der.c",0x3b);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}

