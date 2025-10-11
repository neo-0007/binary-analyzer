
void FUN_00456890(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x48,"../providers/implementations/encode_decode/encode_key2any.c",0x3a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  return;
}

