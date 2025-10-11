
bool FUN_004aa5f0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x10,"../crypto/bio/bf_prefix.c",0x36);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0x100000000;
    FUN_004ab630(param_1);
    FUN_004ab650(param_1,1);
  }
  return puVar1 != (undefined8 *)0x0;
}

