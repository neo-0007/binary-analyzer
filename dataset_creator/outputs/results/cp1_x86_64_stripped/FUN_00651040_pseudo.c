
void FUN_00651040(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_2 + 0x48) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x148) = 1;
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  lVar4 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  (**(code **)(lVar4 + 0x20))(&local_68,param_1);
  lVar4 = local_60;
                    /* try { // try from 006510b6 to 006510cd has its CatchHandler @ 006511fd */
  lVar2 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar2,lVar4,0);
  *(undefined1 *)(lVar2 + lVar4) = 0;
  *(long *)(param_2 + 0x18) = lVar4;
  *(long *)(param_2 + 0x10) = lVar2;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x28))(&local_68,param_1);
  lVar4 = local_60;
  if (local_60 + 1U < 0x1fffffffffffffff) {
    lVar2 = (local_60 + 1U) * 4;
                    /* try { // try from 00651125 to 0065113c has its CatchHandler @ 00651206 */
    lVar3 = thunk_FUN_006c31f0(lVar2);
    FUN_006b74d0(&local_68,lVar3,lVar4,0);
    *(long *)(param_2 + 0x28) = lVar3;
    *(long *)(param_2 + 0x30) = lVar4;
    *(undefined4 *)(lVar3 + -4 + lVar2) = 0;
    if (local_68 != local_58) {
      thunk_FUN_007104f0();
    }
    (**(code **)(*param_1 + 0x30))(&local_68,param_1);
    if (local_60 + 1U < 0x1fffffffffffffff) {
      lVar2 = (local_60 + 1U) * 4;
                    /* try { // try from 0065118e to 006511f7 has its CatchHandler @ 006511ea */
      lVar4 = thunk_FUN_006c31f0(lVar2);
      FUN_006b74d0(&local_68,lVar4,local_60,0);
      *(long *)(param_2 + 0x38) = lVar4;
      *(undefined4 *)(lVar4 + -4 + lVar2) = 0;
      *(long *)(param_2 + 0x40) = local_60;
      if (local_68 != local_58) {
        thunk_FUN_007104f0();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_00403cf5();
  }
                    /* try { // try from 006511f8 to 006511fc has its CatchHandler @ 00651206 */
  uVar5 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 006510b6 with catch @ 006511fd */
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0(uVar5);
}

