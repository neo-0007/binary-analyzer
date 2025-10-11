
void spki2typespki_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(8,"../providers/implementations/encode_decode/decode_spki2typespki.c",0x25)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}

