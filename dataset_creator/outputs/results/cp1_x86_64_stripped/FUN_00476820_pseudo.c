
undefined8 * FUN_00476820(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x28,"../providers/implementations/macs/gmac_prov.c",0x41);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_00535890();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        *puVar2 = param_1;
        return puVar2;
      }
      FUN_00537b70(0);
      FUN_0043c400(puVar2 + 2);
      FUN_0041ad60(puVar2,"../providers/implementations/macs/gmac_prov.c",0x36);
    }
  }
  return (undefined8 *)0x0;
}

