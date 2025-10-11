
ulong FUN_004b3a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 *local_1c0;
  int local_1a8;
  undefined1 local_188 [64];
  long local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004b7e80(param_3,4);
  if ((iVar2 == 0) && (iVar2 = FUN_004b7e80(param_2,4), iVar2 == 0)) {
    uVar3 = FUN_004b7e80(param_4,4);
    uVar11 = (ulong)uVar3;
    if (uVar3 != 0) goto LAB_004b3ab9;
    iVar2 = FUN_004b7bb0(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_004b7b70(param_4,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar11 = FUN_004b8190(param_1,1);
          return uVar11;
        }
        goto LAB_004b3f80;
      }
      uVar11 = 1;
      FUN_004b7b50(param_1);
    }
    else {
      FUN_004b2c00(param_5);
      lVar6 = FUN_004b2df0(param_5);
      lVar7 = FUN_004b2df0(param_5);
      local_148[0] = lVar7;
      if (lVar7 != 0) {
        FUN_004bba20(local_188);
        lVar8 = param_4;
        if (*(int *)(param_4 + 0x10) != 0) {
          lVar8 = FUN_004b8260(lVar6,param_4);
          if (lVar8 == 0) goto LAB_004b3d28;
          *(undefined4 *)(lVar6 + 0x10) = 0;
          lVar8 = lVar6;
        }
        iVar4 = FUN_004bbb30(local_188,lVar8,param_5);
        if ((0 < iVar4) && (iVar4 = FUN_004b8a20(lVar7,param_2,param_4,param_5), iVar4 != 0)) {
          iVar4 = FUN_004b7ba0(lVar7);
          if (iVar4 == 0) {
            if (iVar2 < 0x2a0) {
              if (0xef < iVar2) {
                local_1a8 = 5;
                goto LAB_004b3c30;
              }
              if (0x4f < iVar2) {
                local_1a8 = 4;
                goto LAB_004b3c30;
              }
              if (0x17 < iVar2) {
                local_1a8 = 3;
                goto LAB_004b3c30;
              }
              local_1a8 = 1;
            }
            else {
              local_1a8 = 6;
LAB_004b3c30:
              iVar4 = FUN_004bbe70(lVar6,lVar7,lVar7,local_188,param_5);
              if (iVar4 == 0) goto LAB_004b3d28;
              plVar9 = local_148;
              do {
                lVar7 = FUN_004b2df0(param_5);
                plVar9[1] = lVar7;
                if ((lVar7 == 0) ||
                   (iVar4 = FUN_004bbe70(lVar7,*plVar9,lVar6,local_188,param_5), iVar4 == 0))
                goto LAB_004b3d28;
                plVar9 = plVar9 + 1;
              } while (local_148 + (ulong)((1 << ((char)local_1a8 - 1U & 0x1f)) - 2) + 1 != plVar9);
            }
            iVar4 = FUN_004b8190(param_1,1);
            if (iVar4 != 0) {
              bVar1 = true;
              iVar2 = iVar2 + -1;
LAB_004b3cf7:
              while (iVar4 = FUN_004b78f0(param_3,iVar2), iVar4 == 0) {
                if ((!bVar1) &&
                   (iVar4 = FUN_004bbe70(param_1,param_1,param_1,local_188,param_5), iVar4 == 0))
                goto LAB_004b3f16;
                if (iVar2 == 0) goto LAB_004b3d1f;
                iVar2 = iVar2 + -1;
              }
              if (local_1a8 == 1) {
                uVar3 = 1;
                iVar4 = 0;
              }
              else if (iVar2 < 1) {
                uVar3 = 1;
                iVar4 = 0;
              }
              else {
                iVar4 = 0;
                iVar10 = 1;
                uVar3 = 1;
                do {
                  iVar5 = FUN_004b78f0(param_3,iVar2 - iVar10);
                  if (iVar5 != 0) {
                    uVar3 = uVar3 << ((char)iVar10 - (char)iVar4 & 0x1fU) | 1;
                    iVar4 = iVar10;
                  }
                  iVar10 = iVar10 + 1;
                } while ((local_1a8 != iVar10) && (iVar10 != iVar2 + 1));
              }
              if (!bVar1) {
                iVar10 = 0;
                do {
                  iVar5 = FUN_004bbe70(param_1,param_1,param_1,local_188,param_5);
                  if (iVar5 == 0) {
                    uVar11 = 0;
                    goto LAB_004b3d28;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar4 + 1 != iVar10);
              }
              iVar10 = FUN_004bbe70(param_1,param_1,local_148[(int)uVar3 >> 1],local_188,param_5);
              if (iVar10 == 0) {
LAB_004b3f16:
                uVar11 = 0;
                goto LAB_004b3d28;
              }
              iVar2 = iVar2 - (iVar4 + 1);
              if (-1 < iVar2) {
                bVar1 = false;
                goto LAB_004b3cf7;
              }
LAB_004b3d1f:
              uVar11 = 1;
            }
          }
          else {
            uVar11 = 1;
            FUN_004b7b50(param_1);
          }
        }
      }
LAB_004b3d28:
      local_1c0 = local_188;
      FUN_004b2d50(param_5);
      FUN_004bbae0(local_1c0);
    }
  }
  else {
LAB_004b3ab9:
    FUN_0051f420();
    uVar11 = 0;
    FUN_0051f540("../crypto/bn/bn_exp.c",0xae,"BN_mod_exp_recp");
    FUN_0051f8f0(3,0xc0101,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
LAB_004b3f80:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

