
ulong FUN_005fc480(undefined8 param_1,long param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    piVar8 = (int *)FUN_004ab640(param_1);
    lVar9 = FUN_004ac470(param_1);
    if ((piVar8 != (int *)0x0) && (lVar9 != 0)) {
      uVar14 = 0;
      lVar11 = param_2;
      if (0 < *piVar8) {
        iVar7 = *piVar8 - piVar8[1];
        if (param_3 < iVar7) {
          iVar7 = param_3;
        }
        uVar14 = (ulong)iVar7;
        lVar11 = param_2 + uVar14;
        param_3 = param_3 - iVar7;
        thunk_FUN_00713a50(param_2,(long)piVar8 + (long)piVar8[1] + 0x30,uVar14);
        iVar4 = piVar8[1];
        piVar8[1] = iVar4 + iVar7;
        if (iVar4 + iVar7 == *piVar8) {
          piVar8[0] = 0;
          piVar8[1] = 0;
        }
      }
      iVar4 = FUN_004096f0(*(undefined8 *)(piVar8 + 6));
      iVar7 = 0;
      if (iVar4 != 1) {
        iVar7 = iVar4;
      }
      if (0 < param_3) {
        piVar1 = piVar8 + 0xc;
        do {
          while( true ) {
            if (piVar8[2] < 1) goto LAB_005fc700;
            lVar10 = *(long *)(piVar8 + 8);
            if (lVar10 != *(long *)(piVar8 + 10)) break;
            piVar2 = piVar8 + 0x54;
            *(int **)(piVar8 + 8) = piVar2;
            *(int **)(piVar8 + 10) = piVar2;
            uVar5 = FUN_004ab770(lVar9,piVar2,0x1000);
            if (0 < (int)uVar5) {
              lVar10 = *(long *)(piVar8 + 8);
              *(long *)(piVar8 + 10) = *(long *)(piVar8 + 10) + (long)(int)uVar5;
              goto LAB_005fc520;
            }
LAB_005fc626:
            iVar4 = FUN_004ab6d0(lVar9,8);
            if (iVar4 != 0) {
              if ((int)uVar14 != 0) {
                FUN_004ab6c0(param_1,0xf);
                FUN_004ac5f0(param_1);
                goto LAB_005fc683;
              }
              uVar14 = (ulong)uVar5;
              goto LAB_005fc700;
            }
            piVar8[2] = uVar5;
            iVar6 = FUN_00536ac0(*(undefined8 *)(piVar8 + 6),piVar1,piVar8);
            piVar8[1] = 0;
            iVar4 = *piVar8;
            piVar8[4] = iVar6;
            lVar10 = lVar11;
LAB_005fc5c1:
            if (param_3 <= iVar4) {
              iVar4 = param_3;
            }
            if (iVar4 < 1) goto LAB_005fc700;
            lVar11 = lVar10 + iVar4;
            thunk_FUN_00713a50(lVar10,piVar1,(long)iVar4);
            piVar8[1] = iVar4;
            uVar14 = (ulong)(uint)((int)uVar14 + iVar4);
            param_3 = param_3 - iVar4;
LAB_005fc5f3:
            if (param_3 < 1) goto LAB_005fc700;
          }
          uVar5 = (int)*(long *)(piVar8 + 10) - (int)lVar10;
          if ((int)uVar5 < 1) goto LAB_005fc626;
LAB_005fc520:
          uVar12 = *(undefined8 *)(piVar8 + 6);
          if (param_3 < 0x101) {
LAB_005fc588:
            if (0x100 < (int)uVar5) {
              uVar5 = 0x100;
            }
            iVar4 = FUN_005366f0(uVar12,piVar1,piVar8,lVar10,uVar5);
            if (iVar4 != 0) {
              iVar4 = *piVar8;
              piVar8[2] = 1;
              *(long *)(piVar8 + 8) = *(long *)(piVar8 + 8) + (long)(int)uVar5;
              lVar10 = lVar11;
              if (iVar4 != 0) goto LAB_005fc5c1;
              goto LAB_005fc5f3;
            }
            FUN_004ab6c0(param_1,0xf);
            piVar8[4] = 0;
            goto LAB_005fc680;
          }
          uVar13 = param_3 - iVar7;
          uVar3 = uVar5;
          if ((int)uVar13 <= (int)uVar5) {
            uVar3 = uVar13;
          }
          iVar4 = FUN_005366f0(uVar12,lVar11,&local_44,lVar10,uVar3);
          if (iVar4 == 0) {
            uVar14 = 0;
            FUN_004ab6c0(param_1,0xf);
            goto LAB_005fc683;
          }
          uVar5 = uVar5 - uVar13;
          uVar14 = (ulong)(uint)((int)uVar14 + local_44);
          lVar11 = lVar11 + local_44;
          param_3 = param_3 - local_44;
          if (0 < (int)uVar5) {
            lVar10 = (long)(int)uVar13 + *(long *)(piVar8 + 8);
            uVar12 = *(undefined8 *)(piVar8 + 6);
            *(long *)(piVar8 + 8) = lVar10;
            goto LAB_005fc588;
          }
          *(undefined8 *)(piVar8 + 8) = *(undefined8 *)(piVar8 + 10);
        } while (0 < param_3);
      }
LAB_005fc700:
      FUN_004ab6c0(param_1,0xf);
      FUN_004ac5f0(param_1);
      if ((int)uVar14 == 0) {
        uVar14 = (ulong)(uint)piVar8[2];
      }
      goto LAB_005fc683;
    }
  }
LAB_005fc680:
  uVar14 = 0;
LAB_005fc683:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

