
undefined8 FUN_0051d4d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (code *)FUN_0051d4c0();
  if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1,&local_28,0,param_2), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/tb_pkmeth.c",0x4f,"ENGINE_get_pkey_meth");
    FUN_0051f8f0(0x26,0x65,0);
    local_28 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_28;
}

