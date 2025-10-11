
void __nss_database_fork_prepare_parent(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = global_database_state;
  if (global_database_state == (undefined8 *)0x0) {
    *(undefined1 *)((long)param_1 + 0xbc) = 0;
  }
  else {
    piVar1 = (int *)(global_database_state + 0x18);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      __lll_lock_wait_private(piVar1);
    }
    uVar3 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar3;
    uVar3 = puVar4[3];
    param_1[2] = puVar4[2];
    param_1[3] = uVar3;
    uVar3 = puVar4[5];
    param_1[4] = puVar4[4];
    param_1[5] = uVar3;
    uVar3 = puVar4[7];
    param_1[6] = puVar4[6];
    param_1[7] = uVar3;
    uVar3 = puVar4[9];
    param_1[8] = puVar4[8];
    param_1[9] = uVar3;
    uVar3 = puVar4[0xb];
    param_1[10] = puVar4[10];
    param_1[0xb] = uVar3;
    uVar3 = puVar4[0xd];
    param_1[0xc] = puVar4[0xc];
    param_1[0xd] = uVar3;
    uVar3 = puVar4[0xf];
    param_1[0xe] = puVar4[0xe];
    param_1[0xf] = uVar3;
    uVar3 = puVar4[0x11];
    param_1[0x10] = puVar4[0x10];
    param_1[0x11] = uVar3;
    uVar3 = puVar4[0x13];
    param_1[0x12] = puVar4[0x12];
    param_1[0x13] = uVar3;
    uVar3 = puVar4[0x15];
    param_1[0x14] = puVar4[0x14];
    param_1[0x15] = uVar3;
    uVar3 = puVar4[0x17];
    param_1[0x16] = puVar4[0x16];
    param_1[0x17] = uVar3;
    LOCK();
    iVar2 = *(int *)(puVar4 + 0x18);
    *(int *)(puVar4 + 0x18) = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private(piVar1);
      return;
    }
  }
  return;
}

