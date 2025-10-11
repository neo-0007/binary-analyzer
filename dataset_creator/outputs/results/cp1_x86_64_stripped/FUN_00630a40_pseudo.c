
undefined1  [16]
FUN_00630a40(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,char param_6,long *param_7)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 local_69;
  long local_68;
  undefined8 local_60;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *param_7;
  local_48 = (code *)0x0;
  if (*(int *)(local_68 + -8) < 0) {
                    /* try { // try from 00630b2e to 00630b32 has its CatchHandler @ 00630b6a */
    local_68 = FUN_00638b30((undefined8 *)(local_68 + -0x18),&local_69,0);
  }
  else if ((undefined8 *)(local_68 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      *(int *)(local_68 + -8) = *(int *)(local_68 + -8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_68 + -8) = *(int *)(local_68 + -8) + 1;
    }
  }
  local_60 = *(undefined8 *)(*param_7 + -0x18);
  local_48 = FUN_006311c0;
                    /* try { // try from 00630ae0 to 00630ae4 has its CatchHandler @ 00630b6a */
  auVar1 = FUN_00652760(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,(int)param_6
                        ,0,0,&local_68);
  if (local_48 != (code *)0x0) {
    (*local_48)(&local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

