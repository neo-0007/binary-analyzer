
uint * FUN_006fd380(uint param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  
  cVar1 = *param_2;
  if (cVar1 == 'r') {
    bVar4 = false;
    bVar2 = true;
    uVar11 = 0;
    uVar10 = 8;
  }
  else if (cVar1 == 'w') {
    bVar4 = true;
    bVar2 = false;
    uVar11 = 0;
    uVar10 = 4;
  }
  else {
    if (cVar1 != 'a') goto LAB_006fd3ab;
    bVar4 = true;
    bVar2 = false;
    uVar11 = 0x1000;
    uVar10 = 0x1004;
  }
  cVar1 = param_2[1];
  if (cVar1 == '+') {
    bVar3 = false;
LAB_006fd443:
    bVar4 = false;
    bVar2 = false;
    uVar10 = uVar11;
  }
  else {
    if (cVar1 == 'm') {
      bVar3 = true;
LAB_006fd3fb:
      cVar1 = param_2[2];
      if (cVar1 != '+') {
        if (cVar1 == 'm') {
          bVar3 = true;
        }
        else if (cVar1 == '\0') goto LAB_006fd44b;
        cVar1 = param_2[3];
        if (cVar1 != '+') {
          if (cVar1 == 'm') {
            bVar3 = true;
          }
          else if (cVar1 == '\0') goto LAB_006fd44b;
          if (param_2[4] != '+') {
            if (param_2[4] == 'm') {
              bVar3 = true;
            }
            goto LAB_006fd44b;
          }
        }
      }
      goto LAB_006fd443;
    }
    bVar3 = false;
    if (cVar1 != '\0') goto LAB_006fd3fb;
  }
LAB_006fd44b:
  uVar5 = FUN_0076db30(param_1,3);
  if (uVar5 == 0xffffffff) {
    return (uint *)0x0;
  }
  if ((uVar5 & 3) == 0) {
    if (bVar2) {
LAB_006fd476:
      bVar4 = false;
      if ((uVar11 != 0) && ((uVar5 & 0x400) == 0)) {
        iVar6 = FUN_0076db30(param_1,4,uVar5 | 0x400);
        if (iVar6 == -1) {
          return (uint *)0x0;
        }
        bVar4 = true;
      }
      puVar7 = (uint *)FUN_007101b0(0x1d8);
      if (puVar7 == (uint *)0x0) {
        return (uint *)0x0;
      }
      *(uint **)(puVar7 + 0x22) = puVar7 + 0x38;
      if ((bVar3) && (bVar2)) {
        FUN_00707490(puVar7,0,0,puVar7 + 0x3c,&DAT_0093f160);
        puVar8 = &DAT_0093f460;
      }
      else {
        FUN_00707490(puVar7,0,0,puVar7 + 0x3c,&DAT_0093f2e0);
        puVar8 = &DAT_0093f5e0;
      }
      *(undefined **)(puVar7 + 0x36) = puVar8;
      FUN_00704d80(puVar7);
      puVar7[0x1c] = param_1;
      *puVar7 = *puVar7 & 0xffffefb3 | uVar10;
      if (!bVar4) {
        return puVar7;
      }
      if ((uVar10 & 0x1004) != 0x1004) {
        return puVar7;
      }
      lVar9 = *(long *)(puVar7 + 0x36);
      if (0x827 < lVar9 - 0x93f160U) {
        FUN_00703130();
      }
      lVar9 = (**(code **)(lVar9 + 0x80))(puVar7,0,2);
      if (lVar9 == -1) {
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x1d) {
          return (uint *)0x0;
        }
        return puVar7;
      }
      return puVar7;
    }
  }
  else if (((uVar5 & 3) != 1) || (bVar4)) goto LAB_006fd476;
LAB_006fd3ab:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return (uint *)0x0;
}

