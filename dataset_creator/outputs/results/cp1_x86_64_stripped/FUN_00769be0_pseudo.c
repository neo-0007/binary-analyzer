
uint FUN_00769be0(short *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (*param_1 == 10) {
    if ((char)param_1[4] == -1) {
      return *(byte *)((long)param_1 + 9) & 0xf;
    }
    uVar3 = 2;
    uVar4 = *(uint *)(param_1 + 4) & 0xc0ff;
    if (uVar4 != 0x80fe) {
      if (*(uint *)(param_1 + 4) != 0) {
        return (uint)(uVar4 != 0xc0fe) * 9 + 5;
      }
      uVar3 = 0xe;
      if ((*(int *)(param_1 + 6) == 0) && (*(int *)(param_1 + 8) == 0)) {
        uVar3 = 0xe;
        if (*(int *)(param_1 + 10) == 0x1000000) {
          uVar3 = 2;
        }
        return uVar3;
      }
    }
  }
  else {
    uVar3 = 0xf;
    if (*param_1 == 2) {
      puVar5 = DAT_0094ab78;
      puVar2 = DAT_0094ab78;
      if ((DAT_0094ab78[1] & *(uint *)(param_1 + 2)) != *DAT_0094ab78) {
        do {
          puVar5 = puVar2 + 3;
          puVar1 = puVar2 + 4;
          puVar2 = puVar5;
        } while ((*puVar1 & *(uint *)(param_1 + 2)) != *puVar5);
      }
      return puVar5[2];
    }
  }
  return uVar3;
}

