
uint FUN_004708d0(long param_1,long param_2,undefined8 param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long local_60;
  
  if ((param_1 == 0) || (lVar3 = FUN_004ee2d0(), lVar3 == 0)) {
    return 0;
  }
  lVar4 = FUN_004ee2e0(param_1);
  lVar5 = FUN_004ee3f0(param_1);
  lVar7 = lVar5;
  if (lVar5 != 0) {
    uVar6 = FUN_004ee2a0(param_1);
    lVar7 = FUN_004b2a70(uVar6);
    if (lVar7 == 0) {
      lVar7 = 0;
      uVar1 = 0;
      goto LAB_004709cd;
    }
    if (param_2 == 0) {
      lVar9 = FUN_0041cdd0(param_3,&DAT_007ce5e4);
      local_60 = FUN_0041cdd0(param_3,&DAT_007e4d93);
      lVar10 = FUN_0041cdd0(param_3,&DAT_007e4d96);
      if (lVar9 != 0) goto LAB_0047095d;
    }
    else {
      local_60 = 0;
      lVar10 = 0;
      lVar9 = 0;
LAB_0047095d:
      lVar8 = FUN_004f4df0(lVar3,lVar5,2,param_5,lVar7);
      if (lVar8 == 0) {
        uVar1 = 0;
        goto LAB_004709cd;
      }
      iVar2 = FUN_00548b90(param_2,lVar9,&DAT_007ce5e4,*param_5,lVar8);
      if (iVar2 == 0) {
        uVar1 = 0;
        goto LAB_004709cd;
      }
    }
    if (local_60 != 0 || lVar10 != 0) {
      if (local_60 == 0) {
        uVar6 = FUN_004b2df0(lVar7);
        uVar1 = FUN_004f0d70(lVar3,lVar5,0,uVar6,lVar7);
        if (uVar1 == 0) goto LAB_004709cd;
      }
      else {
        uVar11 = FUN_004b2df0(lVar7);
        if (lVar10 == 0) {
          uVar1 = FUN_004f0d70(lVar3,lVar5,uVar11,0,lVar7);
          if (uVar1 == 0) goto LAB_004709cd;
          iVar2 = FUN_00548c90(param_2,local_60,&DAT_007e4d93,uVar11);
          if (iVar2 == 0) {
            uVar1 = 0;
            goto LAB_004709cd;
          }
          goto LAB_004709bb;
        }
        uVar6 = FUN_004b2df0(lVar7);
        uVar1 = FUN_004f0d70(lVar3,lVar5,uVar11,uVar6,lVar7);
        if (uVar1 == 0) goto LAB_004709cd;
        iVar2 = FUN_00548c90(param_2,local_60,&DAT_007e4d93,uVar11);
        if (iVar2 == 0) {
          uVar1 = 0;
          goto LAB_004709cd;
        }
      }
      iVar2 = FUN_00548c90(param_2,lVar10,&DAT_007e4d96,uVar6);
      if (iVar2 == 0) {
        uVar1 = 0;
        goto LAB_004709cd;
      }
    }
  }
LAB_004709bb:
  if ((lVar4 == 0) || (param_4 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    iVar2 = FUN_004ef7f0(lVar3);
    if (0 < iVar2) {
      iVar2 = FUN_00548c00(param_2,param_3,&DAT_007ce5df,lVar4,(long)(iVar2 + 7 >> 3));
      uVar1 = (uint)(iVar2 != 0);
    }
  }
LAB_004709cd:
  FUN_004b2b50(lVar7);
  return uVar1;
}

