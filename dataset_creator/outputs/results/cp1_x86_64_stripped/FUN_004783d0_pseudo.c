
undefined8 * FUN_004783d0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043b840();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x50,"../providers/implementations/macs/siphash_prov.c",0x3d);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}

