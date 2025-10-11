
void FUN_00418a60(int param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = FUN_00423b00();
    uVar1 = FUN_00418a20(param_4,0,uVar3);
    uVar3 = FUN_00423c40(param_1);
    param_1 = FUN_00418a20(param_4,uVar1,uVar3);
  }
  if (param_2 != 0) {
    uVar3 = FUN_00423b00(param_2);
    uVar1 = FUN_00418a20(param_4,param_1,uVar3);
    uVar3 = FUN_00423c40(param_2);
    param_1 = FUN_00418a20(param_4,uVar1,uVar3);
    lVar4 = FUN_004239c0(param_2);
    if (lVar4 != 0) {
      iVar2 = FUN_00423e90(auStack_68,0x32,lVar4,1);
      if (0 < iVar2) {
        param_1 = FUN_00418a20(param_4,param_1,auStack_68);
      }
    }
  }
  if (param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    FUN_00418a20(param_4,param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

