
undefined8 FUN_0062cde0(long *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  puVar3 = (ushort *)*param_1;
  uVar4 = param_1[1] - (long)puVar3;
  if (puVar3 != (ushort *)param_1[1]) {
    do {
      uVar1 = *puVar3;
      uVar5 = (uint)uVar1;
      if (uVar1 - 0xd800 < 0x400) {
        if (param_4 == 1) {
          return 2;
        }
        if (uVar4 < 3) {
          return 0;
        }
        if (0x3ff < puVar3[1] - 0xdc00) {
          return 2;
        }
        lVar6 = 2;
        uVar5 = puVar3[1] + 0xfca02400 + uVar5 * 0x400;
      }
      else {
        if (uVar1 - 0xdc00 < 0x400) {
          return 2;
        }
        lVar6 = 1;
      }
      if (param_3 < uVar5) {
        return 2;
      }
      cVar2 = FUN_0062cbc0();
      if (cVar2 == '\0') {
        return 1;
      }
      puVar3 = (ushort *)(*param_1 + lVar6 * 2);
      *param_1 = (long)puVar3;
      uVar4 = param_1[1] - (long)puVar3;
    } while (puVar3 != (ushort *)param_1[1]);
  }
  return 0;
}

