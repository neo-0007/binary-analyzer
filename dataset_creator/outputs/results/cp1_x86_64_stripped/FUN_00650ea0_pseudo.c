
void FUN_00650ea0(long *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x48) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x88) = 1;
  *(undefined1 *)(param_2 + 0x49) = uVar1;
  lVar3 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  (**(code **)(lVar3 + 0x20))(&local_68,param_1);
  lVar3 = local_60;
                    /* try { // try from 00650f14 to 00650f2b has its CatchHandler @ 00651013 */
  lVar2 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar2,lVar3,0);
  *(undefined1 *)(lVar2 + lVar3) = 0;
  *(long *)(param_2 + 0x10) = lVar2;
  *(long *)(param_2 + 0x18) = lVar3;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x28))(&local_68,param_1);
  lVar3 = local_60;
                    /* try { // try from 00650f63 to 00650f7a has its CatchHandler @ 0065100d */
  lVar2 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar2,lVar3,0);
  *(undefined1 *)(lVar2 + lVar3) = 0;
  *(long *)(param_2 + 0x28) = lVar2;
  *(long *)(param_2 + 0x30) = lVar3;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  (**(code **)(*param_1 + 0x30))(&local_68,param_1);
                    /* try { // try from 00650fac to 00650fc3 has its CatchHandler @ 00651004 */
  lVar3 = thunk_FUN_006c31f0(local_60 + 1);
  FUN_0069fe80(&local_68,lVar3,local_60,0);
  *(undefined1 *)(lVar3 + local_60) = 0;
  *(long *)(param_2 + 0x38) = lVar3;
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

