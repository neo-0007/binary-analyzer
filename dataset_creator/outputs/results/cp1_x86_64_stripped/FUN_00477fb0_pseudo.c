
undefined8 * FUN_00477fb0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043b840();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x100,"../providers/implementations/macs/poly1305_prov.c",0x31);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}

