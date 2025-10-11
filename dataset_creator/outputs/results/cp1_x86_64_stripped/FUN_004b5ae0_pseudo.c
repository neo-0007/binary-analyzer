
ulong FUN_004b5ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_178;
  uint local_164;
  long local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004b7e80(param_3,4);
  if ((iVar2 == 0) && (iVar2 = FUN_004b7e80(param_2,4), iVar2 == 0)) {
    uVar3 = FUN_004b7e80(param_4,4);
    uVar10 = (ulong)uVar3;
    if (uVar3 != 0) goto LAB_004b5b39;
    iVar2 = FUN_004b7bb0(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_004b7b70(param_4,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar10 = FUN_004b8190(param_1,1);
          return uVar10;
        }
        goto LAB_004b5f40;
      }
      uVar10 = 1;
      FUN_004b7b50(param_1);
    }
    else {
      FUN_004b2c00(param_5);
      uVar6 = FUN_004b2df0(param_5);
      lVar7 = FUN_004b2df0(param_5);
      local_148[0] = lVar7;
      if ((lVar7 != 0) && (iVar4 = FUN_004b8a20(lVar7,param_2,param_4,param_5), iVar4 != 0)) {
        iVar4 = FUN_004b7ba0(lVar7);
        if (iVar4 == 0) {
          if (iVar2 < 0x2a0) {
            if (0xef < iVar2) {
              local_178 = 5;
              goto LAB_004b5cb8;
            }
            if (0x4f < iVar2) {
              local_178 = 4;
              goto LAB_004b5cb8;
            }
            if (0x17 < iVar2) {
              local_178 = 3;
              goto LAB_004b5cb8;
            }
            local_178 = 1;
          }
          else {
            local_178 = 6;
LAB_004b5cb8:
            iVar4 = FUN_004b8fe0(uVar6,lVar7,lVar7,param_4,param_5);
            if (iVar4 == 0) goto LAB_004b5c04;
            plVar8 = local_148;
            do {
              lVar7 = FUN_004b2df0(param_5);
              plVar8[1] = lVar7;
              if ((lVar7 == 0) ||
                 (iVar4 = FUN_004b8fe0(lVar7,*plVar8,uVar6,param_4,param_5), iVar4 == 0))
              goto LAB_004b5c04;
              plVar8 = plVar8 + 1;
            } while (local_148 + (ulong)((1 << ((char)local_178 - 1U & 0x1f)) - 2) + 1 != plVar8);
          }
          iVar4 = FUN_004b8190(param_1,1);
          if (iVar4 != 0) {
            bVar1 = true;
            iVar2 = iVar2 + -1;
LAB_004b5d7e:
            while (iVar4 = FUN_004b78f0(param_3,iVar2), iVar4 == 0) {
              if ((!bVar1) &&
                 (iVar4 = FUN_004b8fe0(param_1,param_1,param_1,param_4,param_5), iVar4 == 0))
              goto LAB_004b5ef2;
              if (iVar2 == 0) goto LAB_004b5da1;
              iVar2 = iVar2 + -1;
            }
            if (local_178 == 1) {
              local_164 = 1;
              iVar4 = 0;
            }
            else if (iVar2 < 1) {
              iVar4 = 0;
              local_164 = 1;
            }
            else {
              iVar4 = 0;
              iVar9 = 1;
              local_164 = 1;
              do {
                iVar5 = FUN_004b78f0(param_3,iVar2 - iVar9);
                if (iVar5 != 0) {
                  local_164 = local_164 << ((char)iVar9 - (char)iVar4 & 0x1fU) | 1;
                  iVar4 = iVar9;
                }
                iVar9 = iVar9 + 1;
              } while ((local_178 != iVar9) && (iVar9 != iVar2 + 1));
            }
            if (!bVar1) {
              iVar9 = 0;
              do {
                iVar5 = FUN_004b8fe0(param_1,param_1,param_1,param_4,param_5);
                if (iVar5 == 0) goto LAB_004b5ef2;
                iVar9 = iVar9 + 1;
              } while (iVar4 + 1 != iVar9);
            }
            iVar9 = FUN_004b8fe0(param_1,param_1,local_148[(int)local_164 >> 1],param_4,param_5);
            if (iVar9 == 0) {
LAB_004b5ef2:
              uVar10 = 0;
              goto LAB_004b5c04;
            }
            iVar2 = iVar2 - (iVar4 + 1);
            if (-1 < iVar2) {
              bVar1 = false;
              goto LAB_004b5d7e;
            }
LAB_004b5da1:
            uVar10 = 1;
          }
        }
        else {
          uVar10 = 1;
          FUN_004b7b50(param_1);
        }
      }
LAB_004b5c04:
      FUN_004b2d50(param_5);
    }
  }
  else {
LAB_004b5b39:
    FUN_0051f420();
    uVar10 = 0;
    FUN_0051f540("../crypto/bn/bn_exp.c",0x510,"BN_mod_exp_simple");
    FUN_0051f8f0(3,0xc0101,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_004b5f40:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

