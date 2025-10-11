
void __nss_database_fork_subprocess(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = global_database_state;
  if (*(char *)((long)param_1 + 0xbc) == '\0') {
    if (global_database_state != (undefined8 *)0x0) {
      global_database_state = (undefined8 *)0x0;
    }
    return;
  }
  if (global_database_state != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *global_database_state = *param_1;
    puVar3[1] = uVar1;
    uVar1 = param_1[3];
    puVar3[2] = param_1[2];
    puVar3[3] = uVar1;
    uVar1 = param_1[5];
    puVar3[4] = param_1[4];
    puVar3[5] = uVar1;
    uVar1 = param_1[7];
    puVar3[6] = param_1[6];
    puVar3[7] = uVar1;
    uVar1 = param_1[9];
    puVar3[8] = param_1[8];
    puVar3[9] = uVar1;
    uVar1 = param_1[0xb];
    puVar3[10] = param_1[10];
    puVar3[0xb] = uVar1;
    uVar1 = param_1[0xd];
    puVar3[0xc] = param_1[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = param_1[0xf];
    puVar3[0xe] = param_1[0xe];
    puVar3[0xf] = uVar1;
    uVar1 = param_1[0x11];
    puVar3[0x10] = param_1[0x10];
    puVar3[0x11] = uVar1;
    uVar1 = param_1[0x13];
    puVar3[0x12] = param_1[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = param_1[0x15];
    puVar3[0x14] = param_1[0x14];
    puVar3[0x15] = uVar1;
    uVar1 = param_1[0x16];
    uVar2 = param_1[0x17];
    *(undefined4 *)(puVar3 + 0x18) = 0;
    puVar3[0x16] = uVar1;
    puVar3[0x17] = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("local != NULL","nss_database.c",0x209,"__nss_database_fork_subprocess");
}

