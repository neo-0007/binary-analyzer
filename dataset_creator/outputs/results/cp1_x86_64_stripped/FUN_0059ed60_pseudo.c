
undefined4 FUN_0059ed60(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004069d0(0,&DAT_007cfb56,&DAT_007ce243);
  lVar3 = FUN_00405f40();
  if ((lVar2 != 0) && (lVar3 != 0)) {
    FUN_005ad530(param_1,0);
    iVar1 = FUN_00407430(lVar3,lVar2,0);
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_00405f60(lVar3,(*(undefined8 **)(param_1 + 0x10))[1],
                              **(undefined8 **)(param_1 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_00406090(lVar3,local_48,0), iVar1 != 0)))) goto LAB_0059edc9;
  }
  local_48[0] = 0;
LAB_0059edc9:
  FUN_00406b90(lVar3);
  FUN_00406a50(lVar2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_48[0];
}

