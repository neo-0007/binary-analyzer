
undefined8 FUN_005339d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_004098f0();
  lVar4 = *(long *)(lVar3 + 0x520);
  if (lVar4 == -1) {
    iVar2 = FUN_004098b0(param_1);
    if (iVar2 == 0) {
      FUN_00566900(lVar3,param_4,param_3,param_2);
      FUN_0054afa0(lVar3 + 0x4c0,param_2,param_4);
    }
    else {
      FUN_0054afa0(lVar3 + 0x4c0,param_3,param_4);
LAB_00533b71:
      FUN_00566900(lVar3,param_4,param_3,param_2);
    }
  }
  else {
    uVar5 = 0;
    if (lVar4 + 0x10 != param_4) goto LAB_00533b22;
    lVar1 = lVar3 + 0x4c0;
    iVar2 = FUN_004098b0(param_1);
    if (iVar2 == 0) {
      FUN_00566900(lVar3,lVar4 + 0x10,param_3,param_2);
      FUN_0054afa0(lVar1,param_2,lVar4);
      FUN_0054b1a0(local_58,lVar1);
      *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x4b4);
      *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x464);
      *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x46c);
      *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x474);
      *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x47c);
      *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x4bc);
      *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x484);
      *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x48c);
      *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x494);
      *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x49c);
      *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x4a4);
      *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x4ac);
      FUN_0054afa0(lVar1,local_58,0x10);
      FUN_0054b1a0(local_58,lVar1);
      iVar2 = FUN_00422820(param_2 + lVar4,local_58,0x10);
      uVar5 = 0;
      if (iVar2 != 0) goto LAB_00533b22;
    }
    else {
      FUN_0054afa0(lVar1,param_3,lVar4);
      if (lVar4 == param_4) goto LAB_00533b71;
      if (param_3 != param_2) {
        thunk_FUN_00713a50(param_2,param_3,lVar4);
      }
      lVar4 = lVar4 + param_2;
      FUN_0054b1a0(lVar4,lVar1);
      *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x4b4);
      *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x464);
      *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x46c);
      *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x4bc);
      *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x474);
      *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x47c);
      *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x484);
      *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x48c);
      *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x494);
      *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x49c);
      *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x4a4);
      *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x4ac);
      FUN_0054afa0(lVar1,lVar4,0x10);
      FUN_0054b1a0(lVar4,lVar1);
      FUN_00566900(lVar3,param_4,param_2,param_2);
    }
  }
  *(undefined8 *)(lVar3 + 0x520) = 0xffffffffffffffff;
  uVar5 = 1;
LAB_00533b22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

