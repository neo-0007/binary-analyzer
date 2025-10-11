
int FUN_0077cc40(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4,ulong param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 uStack_60;
  
  uVar6 = (ulong)(-(int)param_4 & 7);
  lVar8 = param_5 - uVar6;
  if (param_5 <= uVar6) {
    lVar8 = 0;
  }
  uStack_60 = 0x77cc89;
  lVar4 = FUN_007b0710("/etc/hosts");
  if (lVar4 == 0) {
    iVar3 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    while( true ) {
      uVar5 = (ulong)param_2;
      iVar3 = FUN_0077bbf0(lVar4,param_3,param_4 + uVar6,lVar8,param_6,param_7);
      if (iVar3 != 1) break;
      uStack_60 = 0x77ccde;
      iVar3 = thunk_FUN_007a30f0(param_1,*param_3);
      if (iVar3 == 0) {
LAB_0077cd11:
        if ((DAT_0094ac40 & 0x10) == 0) {
          bVar9 = true;
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_0077c0b0(lVar4,param_1,param_2,param_3,param_4 + uVar6,lVar8,param_6);
          bVar9 = iVar3 == 1;
        }
        FUN_006fd190(lVar4);
        if (param_9 == (undefined8 *)0x0) {
          return iVar3;
        }
        if (!bVar9) {
          return iVar3;
        }
        *param_9 = *param_3;
        return iVar3;
      }
      plVar7 = (long *)param_3[1];
      lVar2 = *plVar7;
      while (lVar2 != 0) {
        uStack_60 = 0x77cd0d;
        iVar3 = thunk_FUN_007a30f0(param_1);
        if (iVar3 == 0) goto LAB_0077cd11;
        plVar1 = plVar7 + 1;
        plVar7 = plVar7 + 1;
        lVar2 = *plVar1;
      }
    }
    FUN_006fd190(lVar4,uStack_60,extraout_RDX,uVar5);
  }
  return iVar3;
}

