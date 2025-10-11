
undefined8 FUN_005122b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005afa30(0,&local_20,&local_24,&local_18,param_2);
  if (iVar1 != 0) {
    lVar2 = FUN_00510f50(local_18,local_20,local_24,**(undefined4 **)(param_1 + 8),0,0,0);
    if (lVar2 != 0) {
      FUN_0040f1c0(param_1,**(undefined4 **)(param_1 + 8),lVar2,0x5122e5);
      uVar3 = 1;
      goto LAB_005122eb;
    }
  }
  uVar3 = 0;
LAB_005122eb:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

