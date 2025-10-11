
undefined8
FUN_004d4d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_0040aae0(param_8);
  uVar2 = FUN_00420cf0(uVar2);
  iVar1 = FUN_00423e90(local_78,0x32,param_5,0);
  uVar3 = 0;
  if (0 < iVar1) {
    uVar3 = FUN_004d4b50(param_1,param_2,param_3,param_4,local_78,param_6,param_7,param_8,uVar2,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

