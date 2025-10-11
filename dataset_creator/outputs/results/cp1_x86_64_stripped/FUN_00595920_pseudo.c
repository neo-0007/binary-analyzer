
int FUN_00595920(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  iVar1 = 0;
  auStack_54 = SUB1612((undefined1  [16])0x0,4);
  local_58 = 5;
  auStack_54._4_8_ = param_1;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    iVar1 = -(uint)(iVar1 < 1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

