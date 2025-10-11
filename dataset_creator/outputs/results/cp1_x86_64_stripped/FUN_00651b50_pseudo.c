
void FUN_00651b50(long *param_1,long param_2)

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
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x60) = uVar1;
  lVar4 = *param_1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x98) = 1;
  (**(code **)(lVar4 + 0x20))(&local_68,param_1);
  lVar4 = local_60;
                    /* try { // try from 00651bdb to 00651bf2 has its CatchHandler @ 00651dc7 */
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
                    /* try { // try from 00651c4a to 00651c61 has its CatchHandler @ 00651dd0 */
    lVar3 = thunk_FUN_006c31f0(lVar2);
    FUN_006b74d0(&local_68,lVar3,lVar4,0);
    *(long *)(param_2 + 0x30) = lVar3;
    *(long *)(param_2 + 0x38) = lVar4;
    *(undefined4 *)(lVar3 + -4 + lVar2) = 0;
    if (local_68 != local_58) {
      thunk_FUN_007104f0();
    }
    (**(code **)(*param_1 + 0x30))(&local_68,param_1);
    lVar4 = local_60;
    if (0x1ffffffffffffffe < local_60 + 1U) {
                    /* try { // try from 00651dbd to 00651dc1 has its CatchHandler @ 00651db7 */
      FUN_00403cf5();
      goto LAB_00651dc2;
    }
    lVar2 = (local_60 + 1U) * 4;
                    /* try { // try from 00651cbc to 00651cd3 has its CatchHandler @ 00651db7 */
    lVar3 = thunk_FUN_006c31f0(lVar2);
    FUN_006b74d0(&local_68,lVar3,lVar4,0);
    *(long *)(param_2 + 0x40) = lVar3;
    *(long *)(param_2 + 0x48) = lVar4;
    *(undefined4 *)(lVar3 + -4 + lVar2) = 0;
    if (local_68 != local_58) {
      thunk_FUN_007104f0();
    }
    (**(code **)(*param_1 + 0x38))(&local_68,param_1);
    if (local_60 + 1U < 0x1fffffffffffffff) {
      lVar4 = (local_60 + 1U) * 4;
                    /* try { // try from 00651d2e to 00651d45 has its CatchHandler @ 00651da9 */
      lVar2 = thunk_FUN_006c31f0(lVar4);
      FUN_006b74d0(&local_68,lVar2,local_60,0);
      *(long *)(param_2 + 0x50) = lVar2;
      *(long *)(param_2 + 0x58) = local_60;
      *(undefined4 *)(lVar2 + -4 + lVar4) = 0;
      if (local_68 != local_58) {
        thunk_FUN_007104f0();
      }
      uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      *(undefined4 *)(param_2 + 100) = uVar1;
      uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      *(undefined4 *)(param_2 + 0x68) = uVar1;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return;
    }
                    /* try { // try from 00651db2 to 00651db6 has its CatchHandler @ 00651da9 */
    uVar5 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 00651cbc with catch @ 00651db7
                       catch() { ... } // from try @ 00651dbd with catch @ 00651db7 */
    if (local_68 == local_58) goto LAB_00651de5;
  }
  else {
LAB_00651dc2:
                    /* try { // try from 00651dc2 to 00651dc6 has its CatchHandler @ 00651dd0 */
    uVar5 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 00651bdb with catch @ 00651dc7 */
    if (local_68 == local_58) goto LAB_00651de5;
  }
  thunk_FUN_007104f0();
LAB_00651de5:
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0(uVar5);
}

