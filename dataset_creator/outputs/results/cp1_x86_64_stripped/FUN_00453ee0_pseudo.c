
void FUN_00453ee0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x18,"../providers/implementations/encode_decode/decode_der2key.c",0x7e);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &PTR_s_ED25519_00928ee0;
  }
  return;
}

