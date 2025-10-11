
undefined8 * FUN_00476af0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_0041aec0(0xa0,"../providers/implementations/macs/hmac_prov.c",0x50);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_00545280();
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  FUN_0041ad60(puVar2,"../providers/implementations/macs/hmac_prov.c",0x52);
  return (undefined8 *)0x0;
}

