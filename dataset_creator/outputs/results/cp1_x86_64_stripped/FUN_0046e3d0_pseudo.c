
undefined8 * FUN_0046e3d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x18,"../providers/implementations/kem/rsa_kem.c",0x55);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_00485290(param_1);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *puVar1 = uVar2;
  }
  return puVar1;
}

