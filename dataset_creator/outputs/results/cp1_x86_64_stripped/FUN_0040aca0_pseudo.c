
undefined8 * FUN_0040aca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1[0xe] == 0) {
    puVar4 = (undefined8 *)FUN_0040ac70(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4));
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar1 = puVar4[0x10];
      *puVar4 = *param_1;
      puVar4[1] = uVar2;
      uVar2 = param_1[3];
      puVar4[2] = param_1[2];
      puVar4[3] = uVar2;
      uVar2 = param_1[5];
      puVar4[4] = param_1[4];
      puVar4[5] = uVar2;
      uVar2 = param_1[7];
      puVar4[6] = param_1[6];
      puVar4[7] = uVar2;
      uVar2 = param_1[9];
      puVar4[8] = param_1[8];
      puVar4[9] = uVar2;
      uVar2 = param_1[0xb];
      puVar4[10] = param_1[10];
      puVar4[0xb] = uVar2;
      uVar2 = param_1[0xd];
      puVar4[0xc] = param_1[0xc];
      puVar4[0xd] = uVar2;
      uVar2 = param_1[0xf];
      puVar4[0xe] = param_1[0xe];
      puVar4[0xf] = uVar2;
      uVar2 = param_1[0x11];
      puVar4[0x10] = param_1[0x10];
      puVar4[0x11] = uVar2;
      uVar2 = param_1[0x13];
      puVar4[0x12] = param_1[0x12];
      puVar4[0x13] = uVar2;
      uVar2 = param_1[0x15];
      puVar4[0x14] = param_1[0x14];
      puVar4[0x15] = uVar2;
      uVar2 = param_1[0x17];
      puVar4[0x16] = param_1[0x16];
      puVar4[0x17] = uVar2;
      uVar2 = param_1[0x19];
      puVar4[0x18] = param_1[0x18];
      puVar4[0x19] = uVar2;
      uVar2 = param_1[0x1b];
      puVar4[0x1a] = param_1[0x1a];
      puVar4[0x1b] = uVar2;
      uVar2 = param_1[0x1c];
      uVar3 = param_1[0x1d];
      puVar4[0x10] = uVar1;
      puVar4[0x1c] = uVar2;
      puVar4[0x1d] = uVar3;
      *(undefined4 *)(puVar4 + 3) = 2;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}

