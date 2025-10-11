
void FUN_00454f00(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x18,"../providers/implementations/encode_decode/decode_msblob2key.c",0x42);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &DAT_00929760;
  }
  return;
}

