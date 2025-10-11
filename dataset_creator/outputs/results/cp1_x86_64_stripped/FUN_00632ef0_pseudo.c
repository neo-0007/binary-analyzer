
void FUN_00632ef0(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_49;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x21) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x22) = uVar4;
  uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined1 *)(param_2 + 0x6f) = 1;
  *(undefined4 *)(param_2 + 0x58) = uVar5;
  lVar3 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  (**(code **)(lVar3 + 0x20))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 00632f7c to 00632f93 has its CatchHandler @ 00633203 */
  lVar6 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar6,lVar3,0);
  *(undefined1 *)(lVar6 + lVar3) = 0;
  *(long *)(param_2 + 0x18) = lVar3;
  *(long *)(param_2 + 0x10) = lVar6;
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
                    /* try { // try from 00632fd5 to 00632fec has its CatchHandler @ 006331f4 */
  lVar6 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar6,lVar3,0);
  *(undefined1 *)(lVar6 + lVar3) = 0;
  *(long *)(param_2 + 0x28) = lVar6;
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
                    /* try { // try from 00633027 to 0063303e has its CatchHandler @ 006331fd */
  lVar6 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar6,lVar3,0);
  *(undefined1 *)(lVar6 + lVar3) = 0;
  *(long *)(param_2 + 0x38) = lVar6;
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
  (**(code **)(*param_1 + 0x38))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 00633079 to 00633090 has its CatchHandler @ 00633209 */
  lVar6 = thunk_FUN_006c31f0(lVar3 + 1);
  FUN_00637110(&local_48,lVar6,lVar3,0);
  *(undefined1 *)(lVar6 + lVar3) = 0;
  *(long *)(param_2 + 0x48) = lVar6;
  *(long *)(param_2 + 0x50) = lVar3;
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
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined4 *)(param_2 + 0x5c) = uVar5;
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  *(undefined4 *)(param_2 + 0x60) = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

