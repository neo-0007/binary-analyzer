
undefined8 * FUN_00477380(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x298,"../providers/implementations/macs/kmac_prov.c",0xa9);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_00405f40();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        *puVar2 = param_1;
        return puVar2;
      }
      FUN_00406b90(0);
      FUN_0043c5e0(puVar2 + 2);
      FUN_004227b0((long)puVar2 + 0x44,puVar2[6]);
      FUN_004227b0((long)puVar2 + 0x194,puVar2[7]);
      FUN_0041ad60(puVar2,"../providers/implementations/macs/kmac_prov.c",0x99);
    }
  }
  return (undefined8 *)0x0;
}

