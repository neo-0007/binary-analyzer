
bool FUN_005ac270(undefined4 param_1,long *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  int local_48;
  int local_44;
  long local_40;
  
  lVar2 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  default:
    bVar20 = true;
    break;
  case 3:
    pcVar5 = *(code **)(*(long *)(lVar2 + 0xd0) + 0x10);
    if ((pcVar5 == (code *)0x0) || (iVar7 = (*pcVar5)(lVar2), iVar7 != 0)) {
      FUN_0060a160(*(undefined8 *)(lVar2 + 0x88));
      FUN_0060e1f0(*(undefined8 *)(lVar2 + 0x90));
      thunk_FUN_004a2270(*(undefined8 *)(lVar2 + 0xa0));
      thunk_FUN_004a2270(*(undefined8 *)(lVar2 + 0xa8));
      FUN_00436430(*(undefined8 *)(lVar2 + 0xb0),FUN_0060e7a0);
      FUN_0041ad60(*(undefined8 *)(lVar2 + 0xf0),"../crypto/x509/x_crl.c",0x10b);
      bVar20 = true;
      break;
    }
    goto LAB_005ac5b0;
  case 4:
    pcVar5 = *(code **)(*(long *)(lVar2 + 0xd0) + 0x10);
    if ((pcVar5 != (code *)0x0) && (iVar7 = (*pcVar5)(lVar2), iVar7 == 0)) goto LAB_005ac5b0;
    FUN_0060a160(*(undefined8 *)(lVar2 + 0x88));
    FUN_0060e1f0(*(undefined8 *)(lVar2 + 0x90));
    thunk_FUN_004a2270(*(undefined8 *)(lVar2 + 0xa0));
    thunk_FUN_004a2270(*(undefined8 *)(lVar2 + 0xa8));
    FUN_00436430(*(undefined8 *)(lVar2 + 0xb0),FUN_0060e7a0);
  case 1:
    puVar6 = PTR_DAT_0093cd20;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined4 *)(lVar2 + 0x84) = 0;
    *(undefined **)(lVar2 + 0xd0) = puVar6;
    *(undefined8 *)(lVar2 + 0x98) = 0x807f00000000;
    bVar20 = true;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    break;
  case 5:
    uVar12 = FUN_0040bef0();
    iVar7 = FUN_005ab470(lVar2,uVar12,lVar2 + 0xb8,0);
    if (iVar7 == 0) {
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x100000;
    }
    puVar13 = (undefined8 *)FUN_0059f4d0(lVar2,0x302,&local_48,0);
    *(undefined8 **)(lVar2 + 0x90) = puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      if (local_48 != -1) goto LAB_005ac5be;
    }
    else {
      uVar9 = *(uint *)(lVar2 + 0x98);
      iVar7 = *(int *)(puVar13 + 1);
      iVar19 = *(int *)((long)puVar13 + 0x1c);
      iVar10 = *(int *)((long)puVar13 + 0xc);
      *(uint *)(lVar2 + 0x98) = uVar9 | 1;
      if (iVar7 < 1) {
        if (0 < iVar10) {
          uVar8 = uVar9 | 9;
          *(uint *)(lVar2 + 0x98) = uVar8;
          goto LAB_005ac8b2;
        }
        if (0 < iVar19) {
          *(uint *)(lVar2 + 0x98) = uVar9 | 0x11;
        }
      }
      else {
        uVar8 = uVar9 | 5;
        *(uint *)(lVar2 + 0x98) = uVar8;
        if (iVar10 < 1) {
LAB_005ac8b2:
          if (0 < iVar19) goto LAB_005ac50a;
        }
        else {
          uVar8 = uVar9 | 0xd;
          *(uint *)(lVar2 + 0x98) = uVar8;
          if (0 < iVar19) {
LAB_005ac50a:
            uVar8 = uVar8 | 0x10;
          }
          *(uint *)(lVar2 + 0x98) = uVar8 | 2;
        }
      }
      if (0 < *(int *)(puVar13 + 3)) {
        *(uint *)(lVar2 + 0x98) = *(uint *)(lVar2 + 0x98) | 0x20;
      }
      piVar3 = (int *)puVar13[2];
      if (piVar3 != (int *)0x0) {
        *(uint *)(lVar2 + 0x98) = *(uint *)(lVar2 + 0x98) | 0x40;
        iVar7 = *piVar3;
        if (iVar7 < 1) {
          uVar9 = *(uint *)(lVar2 + 0x9c);
        }
        else {
          pbVar4 = *(byte **)(piVar3 + 2);
          bVar1 = *pbVar4;
          uVar9 = (uint)bVar1;
          *(uint *)(lVar2 + 0x9c) = (uint)bVar1;
          if (iVar7 != 1) {
            uVar9 = (uint)CONCAT11(pbVar4[1],bVar1);
          }
        }
        *(uint *)(lVar2 + 0x9c) = uVar9 & 0x807f;
      }
      uVar12 = FUN_005a9850(lVar2);
      iVar7 = FUN_0060e420(*puVar13,uVar12);
      if (iVar7 == 0) {
LAB_005ac5be:
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x80;
      }
    }
    lVar14 = FUN_0059f4d0(lVar2,0x5a,&local_48,0);
    *(long *)(lVar2 + 0x88) = lVar14;
    if ((lVar14 == 0) && (local_48 != -1)) {
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x80;
    }
    lVar14 = FUN_0059f4d0(lVar2,0x58,&local_48,0);
    *(long *)(lVar2 + 0xa0) = lVar14;
    if ((lVar14 == 0) && (local_48 != -1)) {
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x80;
    }
    lVar14 = FUN_0059f4d0(lVar2,0x8c,&local_48,0);
    *(long *)(lVar2 + 0xa8) = lVar14;
    if (lVar14 == 0) {
      if (local_48 != -1) goto LAB_005ac890;
    }
    else if (*(long *)(lVar2 + 0xa0) == 0) {
LAB_005ac890:
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x80;
    }
    uVar12 = *(undefined8 *)(lVar2 + 0x38);
    iVar19 = 0;
    iVar7 = FUN_00436480(uVar12);
    if (0 < iVar7) {
      do {
        uVar15 = FUN_004364a0(uVar12,iVar19);
        uVar16 = FUN_005a2b00(uVar15);
        iVar7 = FUN_00423da0(uVar16);
        if (iVar7 == 0x359) {
          *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x1000;
          iVar7 = FUN_005a2b40(uVar15);
          if (iVar7 != 0) goto LAB_005ac834;
        }
        else {
          iVar10 = FUN_005a2b40(uVar15);
          if (((iVar10 != 0) && (iVar7 != 0x302 && iVar7 != 0x5a)) && (iVar7 != 0x8c)) {
LAB_005ac834:
            *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x200;
            break;
          }
        }
        iVar19 = iVar19 + 1;
        iVar7 = FUN_00436480(uVar12);
      } while (iVar19 < iVar7);
    }
    lVar14 = 0;
    uVar12 = FUN_005a9870(lVar2);
    for (iVar7 = 0; iVar19 = FUN_00436480(uVar12), iVar7 < iVar19; iVar7 = iVar7 + 1) {
      lVar17 = FUN_004364a0(uVar12,iVar7);
      lVar18 = FUN_0059f630(lVar17,0x303,&local_44,0);
      if (lVar18 == 0) {
        if (local_44 == -1) goto LAB_005ac747;
LAB_005ac845:
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x80;
        break;
      }
      lVar14 = *(long *)(lVar2 + 0xb0);
      if (lVar14 == 0) {
        lVar14 = FUN_00436410();
        *(long *)(lVar2 + 0xb0) = lVar14;
        if (lVar14 == 0) goto LAB_005ac5b0;
      }
      iVar19 = FUN_00435f80(lVar14,lVar18);
      lVar14 = lVar18;
      if (iVar19 == 0) goto LAB_005ac5b0;
LAB_005ac747:
      *(long *)(lVar17 + 0x28) = lVar14;
      lVar18 = FUN_0059f630(lVar17,0x8d,&local_44,0);
      if (lVar18 == 0) {
        if (local_44 != -1) goto LAB_005ac845;
        *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
      }
      else {
        uVar11 = FUN_0049fab0(lVar18);
        *(undefined4 *)(lVar17 + 0x30) = uVar11;
        thunk_FUN_004a2270(lVar18);
      }
      uVar15 = *(undefined8 *)(lVar17 + 0x20);
      local_44 = 0;
      while (iVar19 = FUN_00436480(uVar15), local_44 < iVar19) {
        uVar16 = FUN_004364a0(uVar15);
        iVar19 = FUN_005a2b40(uVar16);
        if (iVar19 != 0) {
          uVar16 = FUN_005a2b00(uVar16);
          iVar19 = FUN_00423da0(uVar16);
          if (iVar19 != 0x303) {
            *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x200;
            break;
          }
        }
        local_44 = local_44 + 1;
      }
    }
    pcVar5 = *(code **)(*(long *)(lVar2 + 0xd0) + 8);
    if ((pcVar5 == (code *)0x0) || (iVar7 = (*pcVar5)(lVar2), iVar7 != 0)) {
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x100;
      bVar20 = true;
      break;
    }
LAB_005ac5b0:
    bVar20 = false;
    break;
  case 0xf:
    iVar7 = FUN_005ac1f0(lVar2,*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0xf0));
    bVar20 = iVar7 != 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

