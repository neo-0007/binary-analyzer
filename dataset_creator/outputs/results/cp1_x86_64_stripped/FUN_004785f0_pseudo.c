
undefined8 * FUN_004785f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = FUN_0043b840();
  if (iVar4 != 0) {
    uVar1 = *param_1;
    iVar4 = FUN_0043b840();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)
               FUN_0041aec0(0x50,"../providers/implementations/macs/siphash_prov.c",0x3d);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      uVar1 = param_1[4];
      puVar5[3] = param_1[3];
      puVar5[4] = uVar1;
      uVar1 = param_1[6];
      puVar5[5] = param_1[5];
      puVar5[6] = uVar1;
      uVar1 = param_1[8];
      puVar5[7] = param_1[7];
      puVar5[8] = uVar1;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}

