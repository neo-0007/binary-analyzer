
undefined8
FUN_00477680(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_140;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00477590(local_138,&local_140);
  if (iVar1 != 0) {
    uVar2 = (((param_5 - 1) + (long)((int)local_140 + 2)) / param_5) * param_5;
    *param_2 = uVar2;
    if (uVar2 < 0x151) {
      uVar3 = FUN_00477190(param_1,0,local_138,local_140,0,0,param_5);
      goto LAB_004776c1;
    }
  }
  uVar3 = 0;
LAB_004776c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

