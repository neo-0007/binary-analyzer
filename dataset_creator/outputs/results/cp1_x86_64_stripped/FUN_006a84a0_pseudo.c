
long FUN_006a84a0(undefined4 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        puVar3 = puVar3 + -1;
        uVar2 = (uint)param_2;
        param_2 = param_2 >> 3;
        *puVar3 = *(undefined4 *)(param_3 + 0x10 + (ulong)(uVar2 & 7) * 4);
      } while (param_2 != 0);
    }
    else {
      do {
        puVar3 = puVar3 + -1;
        uVar2 = (uint)param_2;
        param_2 = param_2 >> 4;
        *puVar3 = *(undefined4 *)
                   (param_3 +
                   ((ulong)(uVar2 & 0xf) +
                   (-(ulong)((param_4 & 0x4000) == 0) & 0xfffffffffffffff0) + 0x14) * 4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined4 *)(param_3 + 0x10 + (param_2 % 10) * 4);
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (long)param_1 - (long)puVar3 >> 2;
}

