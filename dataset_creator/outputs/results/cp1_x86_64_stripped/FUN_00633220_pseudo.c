
void FUN_00633220(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 local_49;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_2 + 0x24) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x60) = uVar4;
  lVar3 = *param_1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x98) = 1;
  (**(code **)(lVar3 + 0x20))(&local_48,param_1);
  lVar3 = *(long *)(local_48 + -0x18);
                    /* try { // try from 006332af to 006332c6 has its CatchHandler @ 006335a7 */
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
  if (lVar3 + 1U < 0x1fffffffffffffff) {
    lVar7 = (lVar3 + 1U) * 4;
                    /* try { // try from 0063331f to 00633336 has its CatchHandler @ 0063359e */
    lVar5 = thunk_FUN_006c31f0(lVar7);
    FUN_0063a420(&local_48,lVar5,lVar3,0);
    *(long *)(param_2 + 0x30) = lVar5;
    *(undefined4 *)(lVar5 + -4 + lVar7) = 0;
    *(long *)(param_2 + 0x38) = lVar3;
    if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
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
    if (lVar3 + 1U < 0x1fffffffffffffff) {
      lVar7 = (lVar3 + 1U) * 4;
                    /* try { // try from 00633392 to 006333a9 has its CatchHandler @ 006335bb */
      lVar5 = thunk_FUN_006c31f0(lVar7);
      FUN_0063a420(&local_48,lVar5,lVar3,0);
      *(long *)(param_2 + 0x40) = lVar5;
      *(undefined4 *)(lVar5 + -4 + lVar7) = 0;
      *(long *)(param_2 + 0x48) = lVar3;
      if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
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
      if (lVar3 + 1U < 0x1fffffffffffffff) {
        lVar7 = (lVar3 + 1U) * 4;
                    /* try { // try from 00633405 to 0063341c has its CatchHandler @ 006335b5 */
        lVar5 = thunk_FUN_006c31f0(lVar7);
        FUN_0063a420(&local_48,lVar5,lVar3,0);
        *(long *)(param_2 + 0x50) = lVar5;
        *(undefined4 *)(lVar5 + -4 + lVar7) = 0;
        *(long *)(param_2 + 0x58) = lVar3;
        if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
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
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        *(undefined4 *)(param_2 + 100) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
        *(undefined4 *)(param_2 + 0x68) = uVar4;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
                    /* try { // try from 006335b0 to 006335b4 has its CatchHandler @ 006335b5 */
      uVar6 = FUN_00403cf5();
                    /* catch() { ... } // from try @ 00633405 with catch @ 006335b5
                       catch() { ... } // from try @ 006335b0 with catch @ 006335b5 */
      goto LAB_006335a2;
    }
  }
  else {
                    /* try { // try from 00633594 to 00633598 has its CatchHandler @ 0063359e */
    FUN_00403cf5();
  }
                    /* try { // try from 00633599 to 0063359d has its CatchHandler @ 006335bb */
  uVar6 = FUN_00403cf5();
LAB_006335a2:
  FUN_0063b1a0(&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0(uVar6);
}

