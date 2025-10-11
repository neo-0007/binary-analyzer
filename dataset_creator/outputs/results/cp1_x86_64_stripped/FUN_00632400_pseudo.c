
void FUN_00632400(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_49;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x48) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x88) = 1;
  *(undefined1 *)(param_2 + 0x49) = uVar4;
  lVar3 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  (**(code **)(lVar3 + 0x20))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 0063247a to 00632491 has its CatchHandler @ 00632641 */
  lVar5 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar5,lVar3,0);
  *(undefined1 *)(lVar5 + lVar3) = 0;
  *(long *)(param_2 + 0x10) = lVar5;
  *(long *)(param_2 + 0x18) = lVar3;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_48 + -0x18),&local_49);
    }
  }
  (**(code **)(*param_1 + 0x28))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 006324d3 to 006324ea has its CatchHandler @ 00632650 */
  lVar5 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar5,lVar3,0);
  *(undefined1 *)(lVar5 + lVar3) = 0;
  *(long *)(param_2 + 0x28) = lVar5;
  *(long *)(param_2 + 0x30) = lVar3;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_48 + -0x18),&local_49);
    }
  }
  (**(code **)(*param_1 + 0x30))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 00632524 to 0063253b has its CatchHandler @ 0063264a */
  lVar5 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar5,lVar3,0);
  *(undefined1 *)(lVar5 + lVar3) = 0;
  *(long *)(param_2 + 0x38) = lVar5;
  *(long *)(param_2 + 0x40) = lVar3;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_48 + -0x18),&local_49);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

