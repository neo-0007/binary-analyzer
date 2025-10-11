
void FUN_004559c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x18,"../providers/implementations/encode_decode/decode_pvk2key.c",0x42);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &DAT_009297e0;
  }
  return;
}

