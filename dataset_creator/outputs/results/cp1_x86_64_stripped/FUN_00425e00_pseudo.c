
undefined8
FUN_00425e00(long param_1,long param_2,int param_3,long param_4,long param_5,code *param_6,
            long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  undefined8 local_90;
  int local_88;
  long local_78;
  long local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == 0 || param_4 == 0) || param_1 == 0) || (param_3 < 1)) ||
     (iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar6 = 0;
    goto LAB_00425f63;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    local_90 = 0;
    local_88 = FUN_004225b0();
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (local_88 == 0) {
      local_88 = 1;
    }
    FUN_0054a430(*(undefined8 *)(param_1 + 8),FUN_004250d0,local_98);
    *(undefined8 *)(param_1 + 0x18) = local_90;
  }
  lVar2 = FUN_0054a470(*(undefined8 *)(param_1 + 8),(long)param_3);
  if (lVar2 == 0) {
LAB_00425fe7:
    plVar4 = (long *)0x0;
LAB_00425fea:
    uVar6 = 0;
    FUN_0041ad60(plVar4,"../crypto/property/property.c",0x2da);
  }
  else {
    if (param_5 == 0) {
      local_78 = param_2;
      local_70 = param_4;
      lVar2 = FUN_005459e0(*(undefined8 *)(lVar2 + 0x10),&local_78);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x10));
        FUN_0041ad60(lVar2,"../crypto/property/property.c",0xce);
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
      }
LAB_00426055:
      uVar6 = 1;
      goto LAB_00425ffd;
    }
    lVar3 = thunk_FUN_007129d0(param_4);
    plVar4 = (long *)FUN_0041ad90(lVar3 + 0x30,"../crypto/property/property.c",0x2c3);
    if (plVar4 == (long *)0x0) goto LAB_00425fe7;
    *plVar4 = param_2;
    plVar4[1] = (long)(plVar4 + 5);
    plVar4[2] = param_5;
    plVar4[3] = (long)param_6;
    plVar4[4] = param_7;
    iVar1 = (*param_6)(param_5);
    if (iVar1 == 0) goto LAB_00425fea;
    thunk_FUN_00713a50(plVar4[1],param_4,lVar3 + 1);
    lVar3 = FUN_005457f0(*(undefined8 *)(lVar2 + 0x10),plVar4);
    if (lVar3 == 0) {
      iVar1 = FUN_00545d90(*(undefined8 *)(lVar2 + 0x10));
      if (iVar1 != 0) {
        (*(code *)plVar4[4])(plVar4[2]);
        goto LAB_00425fea;
      }
      uVar5 = *(long *)(param_1 + 0x18) + 1;
      *(ulong *)(param_1 + 0x18) = uVar5;
      if (uVar5 < 500) goto LAB_00426055;
      *(undefined4 *)(param_1 + 0x20) = 1;
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
      (**(code **)(lVar3 + 0x20))(*(undefined8 *)(lVar3 + 0x10));
      FUN_0041ad60(lVar3,"../crypto/property/property.c",0xce);
    }
  }
LAB_00425ffd:
  FUN_004222e0(*(undefined8 *)(param_1 + 0x10));
LAB_00425f63:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

