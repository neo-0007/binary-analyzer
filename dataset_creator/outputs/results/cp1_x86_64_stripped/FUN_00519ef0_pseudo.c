
undefined4 FUN_00519ef0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = FUN_004cde20(param_2,0x2c,1,FUN_00519b50,&local_24);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_fat.c",0x56,"ENGINE_set_default_string");
    FUN_0051f8f0(0x26,0x96,"str=%s",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00519db0(param_1,local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

