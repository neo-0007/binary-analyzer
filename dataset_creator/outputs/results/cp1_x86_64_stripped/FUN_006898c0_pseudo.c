
undefined1  [16]
FUN_006898c0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  lVar3 = FUN_0067e030(param_6 + 0xd0);
  auVar6 = FUN_006884d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10));
  plVar4 = auVar6._0_8_;
  bVar5 = auVar6._8_4_ == -1;
  bVar1 = plVar4 != (long *)0x0 && bVar5;
  if ((bVar1) && (bVar5 = false, (ulong)plVar4[3] <= (ulong)plVar4[2])) {
    iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar2 == -1) {
      plVar4 = (long *)0x0;
    }
    bVar5 = iVar2 == -1 && bVar1;
  }
  bVar1 = (int)param_5 == -1;
  if (((param_4 != (long *)0x0) && (bVar1)) &&
     (bVar1 = false, (ulong)param_4[3] <= (ulong)param_4[2])) {
    iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar1 = iVar2 == -1;
  }
  if (bVar5 == bVar1) {
    *param_7 = *param_7 | 2;
  }
  auVar6._8_8_ = param_3 & 0xffffffff00000000 | auVar6._8_8_ & 0xffffffff;
  auVar6._0_8_ = plVar4;
  return auVar6;
}

