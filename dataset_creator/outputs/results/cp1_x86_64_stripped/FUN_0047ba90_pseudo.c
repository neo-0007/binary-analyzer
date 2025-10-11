
void FUN_0047ba90(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x48,"../providers/implementations/rands/test_rng.c",0x37);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0x7fffffff;
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return;
}

