
undefined8 * FUN_0043de10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x28,"../providers/implementations/asymciphers/sm2_enc.c",0x32);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_00485290(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}

