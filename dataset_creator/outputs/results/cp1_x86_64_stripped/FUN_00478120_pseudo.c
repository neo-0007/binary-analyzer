
undefined8 * FUN_00478120(undefined8 *param_1)

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
               FUN_0041aec0(0x100,"../providers/implementations/macs/poly1305_prov.c",0x31);
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
      uVar1 = param_1[10];
      puVar5[9] = param_1[9];
      puVar5[10] = uVar1;
      uVar1 = param_1[0xc];
      puVar5[0xb] = param_1[0xb];
      puVar5[0xc] = uVar1;
      uVar1 = param_1[0xe];
      puVar5[0xd] = param_1[0xd];
      puVar5[0xe] = uVar1;
      uVar1 = param_1[0x10];
      puVar5[0xf] = param_1[0xf];
      puVar5[0x10] = uVar1;
      uVar1 = param_1[0x12];
      puVar5[0x11] = param_1[0x11];
      puVar5[0x12] = uVar1;
      uVar1 = param_1[0x14];
      puVar5[0x13] = param_1[0x13];
      puVar5[0x14] = uVar1;
      uVar1 = param_1[0x16];
      puVar5[0x15] = param_1[0x15];
      puVar5[0x16] = uVar1;
      uVar1 = param_1[0x18];
      puVar5[0x17] = param_1[0x17];
      puVar5[0x18] = uVar1;
      uVar1 = param_1[0x1a];
      puVar5[0x19] = param_1[0x19];
      puVar5[0x1a] = uVar1;
      uVar1 = param_1[0x1c];
      puVar5[0x1b] = param_1[0x1b];
      puVar5[0x1c] = uVar1;
      uVar1 = param_1[0x1e];
      puVar5[0x1d] = param_1[0x1d];
      puVar5[0x1e] = uVar1;
      puVar5[0x1f] = param_1[0x1f];
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}

