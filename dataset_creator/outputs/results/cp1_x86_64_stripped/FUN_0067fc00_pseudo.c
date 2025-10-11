
int FUN_0067fc00(undefined1 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  puVar3 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        puVar3 = puVar3 + -1;
        uVar2 = (uint)param_2;
        param_2 = param_2 >> 3;
        *puVar3 = *(undefined1 *)(param_3 + 4 + (ulong)(uVar2 & 7));
      } while (param_2 != 0);
    }
    else {
      do {
        puVar3 = puVar3 + -1;
        uVar2 = (uint)param_2;
        param_2 = param_2 >> 4;
        *puVar3 = *(undefined1 *)
                   (param_3 + 0x14 + (-(ulong)((param_4 & 0x4000) == 0) & 0xfffffffffffffff0) +
                   (ulong)(uVar2 & 0xf));
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined1 *)(param_3 + 4 + param_2 % 10);
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (int)param_1 - (int)puVar3;
}

