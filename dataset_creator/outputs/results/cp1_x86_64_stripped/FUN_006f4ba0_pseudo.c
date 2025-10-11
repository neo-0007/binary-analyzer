
void FUN_006f4ba0(undefined8 param_1,char *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  undefined1 auStack_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (pcVar2 = ": ", *param_2 == '\0')) {
    pcVar2 = "";
    param_2 = "";
  }
  uVar1 = FUN_00712950(param_3,auStack_428,0x400);
  FUN_006fcea0(param_1,"%s%s%s\n",param_2,pcVar2,uVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

