
void key2ms_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x40,"../providers/implementations/encode_decode/encode_key2ms.c",0x49);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 2;
  }
  return;
}

