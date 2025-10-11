
undefined8 * FUN_00476010(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_0041aec0(0x28,"../providers/implementations/macs/cmac_prov.c",0x3a);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_004cb5e0();
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  FUN_0041ad60(puVar2,"../providers/implementations/macs/cmac_prov.c",0x3c);
  return (undefined8 *)0x0;
}

