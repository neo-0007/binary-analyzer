
undefined1  [16]
FUN_006619d0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar3 = FUN_006a68a0(param_6 + 0xd0);
  auVar7 = FUN_006602b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10));
  plVar4 = auVar7._0_8_;
  auVar8._8_8_ = auVar7._8_8_ & 0xffffffff | param_3 & 0xffffffff00000000;
  bVar6 = auVar7._8_4_ == -1;
  bVar1 = plVar4 != (long *)0x0 && bVar6;
  plVar5 = plVar4;
  if (bVar1) {
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar2 = *(int *)plVar4[2];
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    }
    bVar6 = iVar2 == -1 && bVar1;
    plVar5 = (long *)0x0;
    if (iVar2 != -1) {
      plVar5 = plVar4;
    }
  }
  bVar1 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0) && (bVar1)) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar2 = *(int *)param_4[2];
    }
    else {
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    bVar1 = iVar2 == -1;
  }
  if (bVar6 == bVar1) {
    *param_7 = *param_7 | 2;
  }
  auVar8._0_8_ = plVar5;
  return auVar8;
}

