
uint FUN_007c84c0(char *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  
  uVar4 = (uint)*param_1;
  puVar1 = param_2 + param_3;
  if (*param_1 == '\0') {
    if (param_2 < puVar1) {
      *param_2 = 0;
      return uVar4;
    }
  }
  else {
    bVar2 = false;
    puVar5 = param_2 + 1;
    pcVar3 = param_1 + 1;
    puVar8 = param_2;
LAB_007c855e:
    do {
      pcVar7 = pcVar3;
      puVar6 = puVar5;
      if (bVar2) {
        if (uVar4 - 0x30 < 10) {
          if (9 < (byte)(param_1[1] - 0x30U)) goto LAB_007c8600;
          pcVar7 = param_1 + 3;
          if ((9 < (byte)(param_1[2] - 0x30U)) ||
             (uVar4 = (uVar4 - 0x30) * 100 + (param_1[1] * 5 + -0xf0) * 2 + -0x30 + (int)param_1[2],
             0xff < (int)uVar4)) goto LAB_007c8600;
        }
LAB_007c853c:
        if (puVar1 <= puVar6) goto LAB_007c8600;
        *puVar6 = (char)uVar4;
        bVar2 = false;
        puVar5 = puVar6 + 1;
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 != 0x2e) goto LAB_007c853c;
          uVar4 = ((int)puVar6 - (int)puVar8) - 1;
          if (((uVar4 & 0xc0) != 0) || (puVar1 <= puVar8)) goto LAB_007c8600;
          *puVar8 = (char)uVar4;
          if (param_1[1] == '\0') {
            if (uVar4 != 0) {
              if (puVar1 <= puVar6) goto LAB_007c8600;
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            if ((long)puVar6 - (long)param_2 < 0x100) {
              return 1;
            }
            goto LAB_007c8600;
          }
          if ((uVar4 == 0) || (param_1[1] == '.')) goto LAB_007c8600;
          puVar5 = puVar6 + 1;
          uVar4 = (uint)*pcVar7;
          bVar2 = false;
          pcVar3 = pcVar7 + 1;
          param_1 = pcVar7;
          puVar8 = puVar6;
          if (*pcVar7 == '\0') {
            bVar2 = false;
            break;
          }
          goto LAB_007c855e;
        }
        bVar2 = true;
        puVar5 = puVar6;
      }
      uVar4 = (uint)*pcVar7;
      pcVar3 = pcVar7 + 1;
      param_1 = pcVar7;
    } while (*pcVar7 != '\0');
    if (!bVar2) {
      uVar4 = ((int)puVar5 - (int)puVar8) - 1;
      if (((uVar4 & 0xc0) == 0) && (puVar8 < puVar1)) {
        *puVar8 = (char)uVar4;
        if (uVar4 != 0) {
          if (puVar1 <= puVar5) goto LAB_007c8600;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        if ((long)puVar5 - (long)param_2 < 0x100) {
          return uVar4 & 0xc0;
        }
      }
    }
  }
LAB_007c8600:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
  return 0xffffffff;
}

