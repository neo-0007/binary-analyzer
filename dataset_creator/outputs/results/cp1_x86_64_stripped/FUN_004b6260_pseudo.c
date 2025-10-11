
long FUN_004b6260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_98;
  long local_88;
  int local_64;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b7b70(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_004b7ba0(param_3), iVar1 != 0)) {
    local_88 = 0;
    *param_5 = 1;
    goto LAB_004b6514;
  }
  *param_5 = 0;
  iVar1 = FUN_004b7e80(param_2,4);
  if ((iVar1 == 0) && (iVar1 = FUN_004b7e80(param_3,4), iVar1 == 0)) {
    FUN_004b2c00(param_4);
    lVar5 = FUN_004b2df0(param_4);
    lVar4 = FUN_004b2df0(param_4);
    lVar3 = FUN_004b2df0(param_4);
    puVar9 = (undefined8 *)FUN_004b2df0(param_4);
    lVar7 = FUN_004b2df0(param_4);
    local_98 = FUN_004b2df0(param_4);
    lVar8 = FUN_004b2df0(param_4);
    if (lVar8 == 0) {
      local_88 = 0;
      goto LAB_004b6550;
    }
    if (param_1 == 0) {
      local_88 = FUN_004b7690();
      if (local_88 != 0) {
        FUN_004b8190(lVar3,1);
        FUN_004b7b50(local_98);
        lVar10 = FUN_004b8260(lVar4,param_2);
        if ((lVar10 != 0) && (lVar10 = FUN_004b8260(lVar5,param_3), lVar10 != 0)) goto LAB_004b6629;
      }
      goto LAB_004b677f;
    }
    FUN_004b8190(lVar3,1);
    FUN_004b7b50(local_98);
    lVar10 = FUN_004b8260(lVar4,param_2);
    if ((lVar10 == 0) || (lVar10 = FUN_004b8260(lVar5,param_3), local_88 = param_1, lVar10 == 0))
    goto LAB_004b655c;
LAB_004b6629:
    *(undefined4 *)(lVar5 + 0x10) = 0;
    if (((*(int *)(lVar4 + 0x10) != 0) || (iVar1 = FUN_004b77f0(lVar4,lVar5), -1 < iVar1)) &&
       (iVar1 = FUN_004b8a20(lVar4,lVar4,lVar5,param_4), iVar1 == 0)) goto LAB_004b6550;
    iVar1 = FUN_004b7d40(param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_004b7bb0(param_3), iVar1 < 0x801)) {
      do {
        iVar1 = FUN_004b7ba0(lVar4);
        if (iVar1 != 0) goto LAB_004b6bb1;
        iVar1 = 0;
        while (iVar2 = FUN_004b78f0(lVar4,iVar1), iVar2 == 0) {
          iVar1 = iVar1 + 1;
          iVar2 = FUN_004b7d40(lVar3);
          if (((iVar2 != 0) && (iVar2 = FUN_004b1610(lVar3,lVar3,param_3), iVar2 == 0)) ||
             (iVar2 = FUN_004bbff0(lVar3,lVar3), iVar2 == 0)) goto LAB_004b6550;
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar1 = FUN_004bc3b0(lVar4,lVar4,iVar1);
          goto joined_r0x004b6bdb;
        }
        while (iVar1 = FUN_004b78f0(lVar5,iVar2), iVar1 == 0) {
          iVar2 = iVar2 + 1;
          iVar1 = FUN_004b7d40(local_98);
          if ((iVar1 != 0) && (iVar1 = FUN_004b1610(local_98,local_98,param_3), iVar1 == 0))
          goto LAB_004b6550;
          iVar1 = FUN_004bbff0(local_98,local_98);
joined_r0x004b6bdb:
          if (iVar1 == 0) goto LAB_004b6550;
        }
        if ((iVar2 != 0) && (iVar1 = FUN_004bc3b0(lVar5,lVar5,iVar2), iVar1 == 0)) break;
        iVar1 = FUN_004b77f0(lVar4,lVar5);
        if (iVar1 < 0) {
          iVar1 = FUN_004b1610(local_98,local_98,lVar3);
          if (iVar1 == 0) break;
          iVar1 = FUN_004b16e0(lVar5,lVar5,lVar4);
        }
        else {
          iVar1 = FUN_004b1610(lVar3,lVar3,local_98);
          if (iVar1 == 0) break;
          iVar1 = FUN_004b16e0(lVar4,lVar4,lVar5);
        }
      } while (iVar1 != 0);
      goto LAB_004b6550;
    }
    local_64 = -1;
    lVar10 = lVar5;
    lVar11 = local_98;
    while (local_98 = lVar11, lVar11 = lVar3, lVar5 = lVar10, lVar10 = lVar4,
          iVar1 = FUN_004b7ba0(lVar10), iVar1 == 0) {
      iVar1 = FUN_004b7bb0(lVar5);
      iVar2 = FUN_004b7bb0(lVar10);
      if (iVar1 == iVar2) {
LAB_004b67e8:
        iVar1 = FUN_004b8190(puVar9,1);
        if (iVar1 == 0) goto LAB_004b6550;
        iVar1 = FUN_004b18d0(lVar7,lVar5,lVar10);
      }
      else {
        iVar1 = FUN_004b7bb0(lVar5);
        iVar2 = FUN_004b7bb0(lVar10);
        if (iVar1 == iVar2 + 1) {
          iVar1 = FUN_004bbf30(lVar8,lVar10);
          if (iVar1 == 0) goto LAB_004b6550;
          iVar1 = FUN_004b77f0(lVar5,lVar8);
          if (iVar1 < 0) goto LAB_004b67e8;
          iVar1 = FUN_004b18d0(lVar7,lVar5,lVar8);
          if ((iVar1 == 0) || (iVar1 = FUN_004b1810(puVar9,lVar8,lVar10), iVar1 == 0))
          goto LAB_004b6550;
          iVar1 = FUN_004b77f0(lVar5,puVar9);
          if (iVar1 < 0) {
            iVar1 = FUN_004b8190(puVar9,2);
          }
          else {
            iVar1 = FUN_004b8190(puVar9,3);
            if (iVar1 == 0) goto LAB_004b6550;
            iVar1 = FUN_004b18d0(lVar7,lVar7,lVar10);
          }
        }
        else {
          iVar1 = FUN_004b34a0(puVar9,lVar7,lVar5,lVar10,param_4);
        }
      }
      if (iVar1 == 0) goto LAB_004b6550;
      iVar1 = FUN_004b7cc0(puVar9);
      if (iVar1 == 0) {
        iVar1 = FUN_004b7cf0(puVar9,2);
        if (iVar1 == 0) {
          iVar1 = FUN_004b7cf0(puVar9,4);
          if (iVar1 == 0) {
            if (*(int *)(puVar9 + 1) == 1) {
              lVar4 = FUN_004b8260(lVar5,lVar11);
              if (lVar4 == 0) goto LAB_004b6550;
              iVar1 = FUN_004bcd70(lVar5,*(undefined8 *)*puVar9);
            }
            else {
              iVar1 = FUN_004bacf0(lVar5,puVar9,lVar11,param_4);
            }
          }
          else {
            iVar1 = FUN_004bc220(lVar5,lVar11,2);
          }
        }
        else {
          iVar1 = FUN_004bbf30(lVar5,lVar11);
        }
        if (iVar1 == 0) goto LAB_004b6550;
        iVar1 = FUN_004b1810(lVar5,lVar5,local_98);
      }
      else {
        iVar1 = FUN_004b1810(lVar5,lVar11,local_98);
      }
      if (iVar1 == 0) goto LAB_004b6550;
      local_64 = -local_64;
      lVar4 = lVar7;
      lVar3 = lVar5;
      lVar7 = local_98;
    }
    if (local_64 == -1) {
LAB_004b6bb1:
      iVar1 = FUN_004b18d0(local_98,param_3);
      if (iVar1 == 0) goto LAB_004b6550;
    }
    iVar1 = FUN_004b7cc0(lVar5);
    if (iVar1 == 0) goto LAB_004b6b26;
    if ((*(int *)(local_98 + 0x10) == 0) && (iVar1 = FUN_004b77f0(local_98,param_3), iVar1 < 0)) {
      lVar4 = FUN_004b8260(local_88,local_98);
      if (lVar4 == 0) goto LAB_004b6550;
    }
    else {
      iVar1 = FUN_004b8a20(local_88,local_98,param_3,param_4);
      if (iVar1 == 0) goto LAB_004b6550;
    }
  }
  else {
    FUN_004b2c00(param_4);
    lVar3 = FUN_004b2df0(param_4);
    lVar4 = FUN_004b2df0(param_4);
    lVar5 = FUN_004b2df0(param_4);
    uVar6 = FUN_004b2df0(param_4);
    local_98 = FUN_004b2df0(param_4);
    lVar7 = FUN_004b2df0(param_4);
    local_88 = FUN_004b2df0(param_4);
    if (local_88 == 0) {
LAB_004b6550:
      if (param_1 == 0) goto LAB_004b677f;
    }
    else {
      if (param_1 != 0) {
        FUN_004b8190(lVar5,1);
        FUN_004b7b50(lVar7);
        lVar8 = FUN_004b8260(lVar4,param_2);
        if ((lVar8 == 0) || (lVar8 = FUN_004b8260(lVar3,param_3), local_88 = param_1, lVar8 == 0))
        goto LAB_004b655c;
LAB_004b63a9:
        *(undefined4 *)(lVar3 + 0x10) = 0;
        if ((*(int *)(lVar4 + 0x10) != 0) || (iVar1 = FUN_004b77f0(lVar4,lVar3), -1 < iVar1)) {
          FUN_004b7670(local_58);
          FUN_004b7d90(local_58,lVar4,4);
          iVar1 = FUN_004b8a20(lVar4,local_58,lVar3,param_4);
          if (iVar1 == 0) goto LAB_004b6550;
        }
        local_64 = -1;
        while (lVar10 = lVar7, lVar8 = lVar3, lVar3 = lVar4, iVar1 = FUN_004b7ba0(lVar3), iVar1 == 0
              ) {
          FUN_004b7670(local_58);
          FUN_004b7d90(local_58,lVar8,4);
          iVar1 = FUN_004b34a0(uVar6,local_98,local_58,lVar3,param_4);
          if (((iVar1 == 0) || (iVar1 = FUN_004bacf0(lVar8,uVar6,lVar5,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_004b1810(lVar8,lVar8,lVar10), iVar1 == 0)) goto LAB_004b6550;
          local_64 = -local_64;
          lVar4 = local_98;
          lVar7 = lVar5;
          lVar5 = lVar8;
          local_98 = lVar10;
        }
        if ((local_64 != -1) || (iVar1 = FUN_004b18d0(lVar10,param_3,lVar10), iVar1 != 0)) {
          iVar1 = FUN_004b7cc0(lVar8);
          if (iVar1 == 0) {
LAB_004b6b26:
            *param_5 = 1;
          }
          else if ((*(int *)(lVar10 + 0x10) == 0) &&
                  (iVar1 = FUN_004b77f0(lVar10,param_3), iVar1 < 0)) {
            lVar4 = FUN_004b8260(local_88,lVar10);
            if (lVar4 != 0) {
LAB_004b64f2:
              *param_5 = 0;
              goto LAB_004b6565;
            }
          }
          else {
            iVar1 = FUN_004b8a20(local_88,lVar10,param_3,param_4);
            if (iVar1 != 0) goto LAB_004b64f2;
          }
        }
        goto LAB_004b6550;
      }
      local_88 = FUN_004b7690();
      if (local_88 != 0) {
        FUN_004b8190(lVar5,1);
        FUN_004b7b50(lVar7);
        lVar8 = FUN_004b8260(lVar4,param_2);
        if ((lVar8 != 0) && (lVar8 = FUN_004b8260(lVar3,param_3), lVar8 != 0)) goto LAB_004b63a9;
      }
LAB_004b677f:
      FUN_004b7fa0(local_88);
    }
LAB_004b655c:
    local_88 = 0;
  }
LAB_004b6565:
  FUN_004b2d50(param_4);
LAB_004b6514:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_88;
}

