
undefined8 FUN_005b5530(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar3 = 0;
  if (param_1[1] != 0x1c) {
    return 0;
  }
  uVar1 = *param_1;
  if ((uVar1 & 3) == 0) {
    puVar4 = *(undefined1 **)(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar2 = 0;
      do {
        if (((puVar4[lVar2] != '\0') || (puVar4[lVar2 + 1] != '\0')) || (puVar4[lVar2 + 2] != '\0'))
        {
          if ((int)lVar2 < (int)uVar1) {
            return 0;
          }
          break;
        }
        lVar2 = lVar2 + 4;
      } while ((int)lVar2 < (int)uVar1);
    }
    puVar6 = puVar4;
    if (3 < (int)uVar1) {
      lVar2 = 3;
      puVar5 = puVar4;
      while( true ) {
        puVar4 = puVar4 + lVar2;
        puVar6 = puVar5 + 1;
        lVar2 = lVar2 + 4;
        *puVar5 = *puVar4;
        if ((int)*param_1 <= (int)lVar2) break;
        puVar4 = *(undefined1 **)(param_1 + 2);
        puVar5 = puVar6;
      }
    }
    *puVar6 = 0;
    uVar1 = *param_1;
    uVar7 = uVar1 + 3;
    if (-1 < (int)uVar1) {
      uVar7 = uVar1;
    }
    *param_1 = (int)uVar7 >> 2;
    uVar1 = FUN_005b5450(*(undefined8 *)(param_1 + 2));
    param_1[1] = uVar1;
    uVar3 = 1;
  }
  return uVar3;
}

