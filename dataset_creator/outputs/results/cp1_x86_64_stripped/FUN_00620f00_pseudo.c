
undefined8 FUN_00620f00(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  uVar1 = FUN_0059f520(param_2,0x3b8,0xffffffff);
  if ((int)uVar1 < 0) {
    if (uVar1 != 0xffffffff) goto LAB_00620fd3;
    if (param_3 == 0) {
      iVar3 = FUN_005b0140(param_2,&local_50);
      lVar10 = (long)iVar3;
      if (iVar3 < 0) goto LAB_00620f63;
      goto LAB_00620fd6;
    }
LAB_00620f63:
    lVar6 = 0;
  }
  else {
    iVar3 = FUN_0059f520(param_2,0x3b8,uVar1);
    if (-1 < iVar3) goto LAB_00620f63;
LAB_00620fd3:
    lVar10 = 0;
LAB_00620fd6:
    uVar2 = FUN_0059f520(param_2,0x3b7,0xffffffff);
    if (-1 < (int)uVar2) {
      uVar4 = FUN_0059f520(param_2,0x3b7,uVar2);
      uVar4 = uVar1 & uVar4;
      uVar1 = uVar2;
      if ((int)uVar4 < 0) goto LAB_00621080;
      goto LAB_00620f63;
    }
    if ((uVar2 != 0xffffffff) || ((int)uVar1 < 0)) {
      lVar9 = 0;
      lVar6 = 0;
LAB_00621005:
      FUN_005b0200(lVar6);
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../crypto/ct/ct_sct_ctx.c",0xbc);
      *(long *)(param_1 + 0x30) = lVar10;
      *(undefined8 *)(param_1 + 0x28) = local_50;
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x38),"../crypto/ct/ct_sct_ctx.c",0xc0);
      *(long *)(param_1 + 0x40) = lVar9;
      *(undefined8 *)(param_1 + 0x38) = local_48;
      uVar7 = 1;
      goto LAB_00620f9b;
    }
LAB_00621080:
    lVar6 = FUN_005b0220(param_2);
    if (lVar6 == 0) goto LAB_00620f63;
    uVar7 = FUN_0059f560(lVar6,uVar1);
    FUN_005aca30(uVar7);
    if (param_3 == 0) {
LAB_00621117:
      iVar3 = FUN_005b0830(lVar6,&local_48);
      lVar9 = (long)iVar3;
      if (0 < iVar3) goto LAB_00621005;
    }
    else {
      uVar1 = FUN_0059f520(param_3,0x5a,0xffffffff);
      if ((int)uVar1 < 0) {
        iVar3 = FUN_0059f520(lVar6,0x5a,0xffffffff);
        if (iVar3 < 0) {
          if ((iVar3 < -1) || (uVar1 != 0xffffffff)) goto LAB_00620f66;
          uVar7 = FUN_0059e6c0(param_3);
          iVar3 = FUN_005a1a40(lVar6,uVar7);
joined_r0x0062121b:
          if (iVar3 != 0) goto LAB_00621117;
        }
        else {
          uVar2 = FUN_0059f520(lVar6,0x5a,iVar3);
          uVar2 = ~uVar1 & uVar2;
joined_r0x006211b0:
          if ((int)uVar2 < 0) {
            uVar7 = FUN_0059e6c0(param_3);
            iVar5 = FUN_005a1a40(lVar6,uVar7);
            if (iVar5 != 0) {
              lVar9 = FUN_0059f550(param_3,uVar1);
              lVar8 = FUN_0059f550(lVar6,iVar3);
              if (((lVar9 != 0) && (lVar8 != 0)) && (lVar9 = FUN_005a2b20(lVar9), lVar9 != 0)) {
                iVar3 = FUN_005a28f0(lVar8,lVar9);
                goto joined_r0x0062121b;
              }
            }
          }
        }
      }
      else {
        uVar2 = FUN_0059f520(param_3,0x5a,uVar1);
        iVar3 = FUN_0059f520(lVar6,0x5a,0xffffffff);
        if ((-1 < iVar3) && (uVar4 = FUN_0059f520(lVar6,0x5a,iVar3), (int)(~uVar1 & uVar4) < 0))
        goto joined_r0x006211b0;
      }
    }
  }
LAB_00620f66:
  FUN_0041ad60(local_50,"../crypto/ct/ct_sct_ctx.c",0xc6);
  FUN_0041ad60(local_48,"../crypto/ct/ct_sct_ctx.c",199);
  FUN_005b0200(lVar6);
  uVar7 = 0;
LAB_00620f9b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

