
void FUN_00566f70(undefined4 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = -param_2;
  uVar6 = 0;
  if ((DAT_0094b598 >> 0x14 & 1) == 0) {
    do {
      param_1[uVar6 + 2] = (int)uVar6;
      cVar3 = (char)uVar6;
      uVar6 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar7 = 0;
    uVar6 = 0;
    lVar5 = lVar4;
    do {
      uVar6 = (ulong)(byte)((char)uVar6 + *(char *)(param_3 + param_2 + lVar5) +
                           (char)param_1[uVar7 + 2]);
      lVar5 = lVar5 + 1;
      uVar2 = param_1[uVar6 + 2];
      if (lVar5 == 0) {
        lVar5 = lVar4;
      }
      param_1[uVar6 + 2] = param_1[uVar7 + 2];
      param_1[uVar7 + 2] = uVar2;
      cVar3 = (char)uVar7;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
  }
  else {
    do {
      cVar3 = (char)uVar6;
      *(char *)((long)param_1 + uVar6 + 8) = cVar3;
      uVar6 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar7 = 0;
    uVar6 = 0;
    lVar5 = lVar4;
    do {
      cVar3 = *(char *)((long)param_1 + uVar7 + 8);
      uVar6 = (ulong)(byte)((char)uVar6 + *(char *)(param_3 + param_2 + lVar5) + cVar3);
      lVar5 = lVar5 + 1;
      uVar1 = *(undefined1 *)((long)param_1 + uVar6 + 8);
      if (lVar5 == 0) {
        lVar5 = lVar4;
      }
      *(char *)((long)param_1 + uVar6 + 8) = cVar3;
      *(undefined1 *)((long)param_1 + uVar7 + 8) = uVar1;
      cVar3 = (char)uVar7;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    param_1[0x42] = 0xffffffff;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

