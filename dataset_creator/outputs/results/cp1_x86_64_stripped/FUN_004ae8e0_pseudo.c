
undefined4 FUN_004ae8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 uStack_860;
  undefined1 local_84c [4];
  undefined4 local_848 [2];
  undefined1 *local_840;
  undefined8 local_838;
  long local_830;
  undefined1 local_828 [2056];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_838 = 0x800;
  local_830 = 0;
  local_840 = local_828;
  iVar2 = FUN_004adbd0(&local_840,&local_830,&local_838,local_848,local_84c,param_2,param_3);
  lVar1 = local_830;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    FUN_0041ad60(local_830,"../crypto/bio/bio_print.c",0x390,uStack_860);
  }
  else if (local_830 == 0) {
    uVar3 = FUN_004ab7e0(param_1,local_828,local_848[0]);
  }
  else {
    uVar3 = FUN_004ab7e0(param_1,local_830,local_848[0]);
    FUN_0041ad60(lVar1,"../crypto/bio/bio_print.c",0x395);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

