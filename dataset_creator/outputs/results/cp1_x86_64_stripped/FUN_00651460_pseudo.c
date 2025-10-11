
void FUN_00651460(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x21) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x22) = uVar1;
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined1 *)(param_2 + 0x6f) = 1;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  lVar4 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  (**(code **)(lVar4 + 0x20))(&local_68,param_1);
  lVar4 = local_60;
                    /* try { // try from 006514e6 to 006514fd has its CatchHandler @ 00651650 */
  lVar3 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar3,lVar4,0);
  *(undefined1 *)(lVar3 + lVar4) = 0;
  *(long *)(param_2 + 0x18) = lVar4;
  *(long *)(param_2 + 0x10) = lVar3;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x28))(&local_68,param_1);
  lVar4 = local_60;
                    /* try { // try from 00651535 to 0065154c has its CatchHandler @ 0065164a */
  lVar3 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar3,lVar4,0);
  *(undefined1 *)(lVar3 + lVar4) = 0;
  *(long *)(param_2 + 0x28) = lVar3;
  *(long *)(param_2 + 0x30) = lVar4;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x30))(&local_68,param_1);
  lVar4 = local_60;
                    /* try { // try from 0065157f to 00651596 has its CatchHandler @ 00651644 */
  lVar3 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar3,lVar4,0);
  *(undefined1 *)(lVar3 + lVar4) = 0;
  *(long *)(param_2 + 0x38) = lVar3;
  *(long *)(param_2 + 0x40) = lVar4;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x38))(&local_68,param_1);
                    /* try { // try from 006515c9 to 006515e0 has its CatchHandler @ 0065163b */
  lVar4 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar4,local_60,0);
  *(undefined1 *)(lVar4 + local_60) = 0;
  *(long *)(param_2 + 0x48) = lVar4;
  *(long *)(param_2 + 0x50) = local_60;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined4 *)(param_2 + 0x5c) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  *(undefined4 *)(param_2 + 0x60) = uVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

