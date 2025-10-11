
undefined8 FUN_006ff780(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + 0x28);
  uVar4 = puVar3[4];
  if (puVar3[3] < uVar4) {
    uVar2 = (**(code **)(puVar3[0x1c] + 0x18))(param_1,0xffffffff);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
    puVar3 = *(ulong **)(param_1 + 0x28);
    uVar4 = puVar3[4];
  }
  uVar1 = *param_1;
  if ((uVar1 & 0x100) == 0) {
    puVar3[2] = puVar3[6];
    if (puVar3[1] < uVar4) {
      puVar3[1] = uVar4;
    }
  }
  else {
    puVar3[2] = puVar3[9];
  }
  *puVar3 = uVar4;
  puVar3[5] = uVar4;
  puVar3[3] = uVar4;
  *param_1 = uVar1 & 0xfffff7ff;
  return 0;
}

