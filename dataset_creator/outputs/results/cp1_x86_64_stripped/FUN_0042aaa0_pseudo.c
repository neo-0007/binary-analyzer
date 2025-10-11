
ulong FUN_0042aaa0(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0;
  if (param_1 == 0) goto LAB_0042accc;
  lVar4 = thunk_FUN_0041cdd0(param_3,"properties");
  lVar5 = thunk_FUN_0041cdd0(param_3,"digest");
  lVar6 = thunk_FUN_0041cdd0(param_3,&DAT_007dc8b3);
  lVar7 = thunk_FUN_0041cdd0(param_3,"mgf1-digest");
  lVar8 = thunk_FUN_0041cdd0(param_3,"saltlen");
  if (lVar4 == 0) {
LAB_0042ab4b:
    if (*param_2 != 0) goto LAB_0042ab5a;
LAB_0042aca0:
    if (((lVar5 != 0 || lVar6 != 0) || lVar7 != 0) || lVar8 != 0) {
      uVar10 = FUN_004331f0(param_1);
      if ((int)uVar10 == 0) goto LAB_0042accc;
      *param_2 = 1;
      goto LAB_0042ab5a;
    }
    lVar7 = 0;
    uVar3 = 1;
    lVar5 = 0;
  }
  else {
    if (*(int *)(lVar4 + 8) != 4) {
      lVar4 = 0;
      goto LAB_0042ab4b;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (*param_2 == 0) goto LAB_0042aca0;
LAB_0042ab5a:
    if (lVar6 != 0) {
      uVar1 = FUN_00433360(0);
      local_48 = 0;
      if (*(int *)(lVar6 + 8) == 4) {
        local_48 = *(ulong *)(lVar6 + 0x10);
LAB_0042ab86:
        uVar9 = FUN_004337e0(uVar1);
        iVar2 = FUN_0041c9c0(*(undefined8 *)(lVar6 + 0x10),uVar9);
        if (iVar2 == 0) goto LAB_0042aba2;
      }
      else {
        iVar2 = FUN_0041e310(lVar6,&local_48);
        if (iVar2 != 0) goto LAB_0042ab86;
      }
      uVar10 = 0;
      goto LAB_0042accc;
    }
LAB_0042aba2:
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_0042abff:
      if (lVar7 == 0) {
LAB_0042ac62:
        if (lVar8 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = thunk_FUN_0041cf60(lVar8,&local_48);
          if (uVar3 != 0) {
            iVar2 = FUN_00433300(param_1,local_48 & 0xffffffff);
            uVar3 = (uint)(iVar2 != 0);
          }
        }
        goto LAB_0042acb6;
      }
      local_48 = 0;
      if (*(int *)(lVar7 + 8) == 4) {
        local_48 = *(ulong *)(lVar7 + 0x10);
LAB_0042ac23:
        lVar7 = FUN_004069d0(param_4,local_48,lVar4);
        if (lVar7 == 0) goto LAB_0042ad80;
        uVar1 = FUN_00433720(lVar7);
        iVar2 = FUN_004332e0(param_1,uVar1);
        if (iVar2 != 0) goto LAB_0042ac62;
      }
      else {
        iVar2 = FUN_0041e310(lVar6,&local_48);
        if (iVar2 != 0) goto LAB_0042ac23;
LAB_0042ad80:
        lVar7 = 0;
      }
      uVar3 = 0;
      goto LAB_0042acb6;
    }
    local_48 = 0;
    if (*(int *)(lVar5 + 8) == 4) {
      local_48 = *(ulong *)(lVar5 + 0x10);
LAB_0042abc7:
      lVar5 = FUN_004069d0(param_4,local_48,lVar4);
      if (lVar5 == 0) goto LAB_0042ad50;
      uVar1 = FUN_00433720(lVar5);
      iVar2 = FUN_004332a0(param_1,uVar1);
      if (iVar2 != 0) goto LAB_0042abff;
    }
    else {
      iVar2 = FUN_0041e310(lVar6,&local_48);
      if (iVar2 != 0) goto LAB_0042abc7;
LAB_0042ad50:
      lVar5 = 0;
    }
    uVar3 = 0;
    lVar7 = 0;
  }
LAB_0042acb6:
  FUN_00406a50(lVar5);
  FUN_00406a50(lVar7);
  uVar10 = (ulong)uVar3;
LAB_0042accc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar10;
}

