
undefined1  [16]
FUN_00634280(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined1 param_6,undefined8 param_7,int *param_8,long param_9,undefined8 *param_10)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == 0) {
    local_48 = &DAT_009452b8;
                    /* try { // try from 0063431e to 006343e2 has its CatchHandler @ 0063443b */
    auVar5 = (**(code **)(*param_1 + 0x18))
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_48);
    if (*param_8 == 0) {
      if ((code *)param_10[4] != (code *)0x0) {
        (*(code *)param_10[4])();
      }
      if (*(int *)(local_48 + -8) < 0) {
        puVar4 = (undefined1 *)FUN_00638b30(local_48 + -0x18,&local_49,0);
      }
      else {
        puVar4 = local_48;
        if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
          if (DAT_0093ea10 == '\0') {
            LOCK();
            *(int *)(local_48 + -8) = *(int *)(local_48 + -8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_48 + -8) = *(int *)(local_48 + -8) + 1;
          }
        }
      }
      *param_10 = puVar4;
      uVar3 = *(undefined8 *)(local_48 + -0x18);
      param_10[4] = FUN_006311c0;
      param_10[1] = uVar3;
    }
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
        thunk_FUN_007104f0(local_48 + -0x18,&local_49);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar5._8_8_ = param_3 & 0xffffffff00000000 | auVar5._8_8_ & 0xffffffff;
      return auVar5;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006342fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

